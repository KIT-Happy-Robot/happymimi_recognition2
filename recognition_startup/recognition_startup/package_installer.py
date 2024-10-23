#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import subprocess
from ament_index_python.packages import get_package_share_directory
import os

class PackageInstallerNode(Node):
    def __init__(self):
        super().__init__('package_installer_node')
        
        # config/packages.txtのパスを取得
        config_path = os.path.join(
            get_package_share_directory('recognition_startup'),
            'config',
            'packages.txt'
        )
        
        self.get_logger().info(f'パッケージリストを読み込みます: {config_path}')
        self.install_packages_from_file(config_path)

    def install_package(self, package_name):
        try:
            # パッケージのインストール状態を確認
            check_cmd = ['dpkg', '-l', package_name]
            result = subprocess.run(check_cmd, capture_output=True, text=True)
            
            if package_name in result.stdout:
                self.get_logger().info(f"{package_name} は既にインストールされています。")
                return True
                
            # パッケージのインストール
            self.get_logger().info(f"{package_name} をインストールしています...")
            install_cmd = ['sudo', 'apt-get', 'install', '-y', package_name]
            subprocess.run(install_cmd, check=True)
            self.get_logger().info(f"{package_name} のインストールが完了しました。")
            return True
            
        except subprocess.CalledProcessError as e:
            self.get_logger().error(f"エラー: {package_name} のインストールに失敗しました。")
            self.get_logger().error(f"エラーメッセージ: {e}")
            return False
        except Exception as e:
            self.get_logger().error(f"予期せぬエラーが発生しました: {e}")
            return False

    def install_packages_from_file(self, file_path):
        try:
            with open(file_path, 'r') as f:
                # 最初の行をスキップし、2行目以降を読み込む
                lines = f.readlines()[1:]
                packages = [line.strip() for line in lines if line.strip()]
                
            self.get_logger().info(f"インストールするパッケージ: {packages}")
            for package in packages:
                self.install_package(package)
                
        except FileNotFoundError:
            self.get_logger().error(f"パッケージリストファイルが見つかりません: {file_path}")
        except Exception as e:
            self.get_logger().error(f"ファイル読み込み中にエラーが発生しました: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = PackageInstallerNode()
    
    try:
        rclpy.spin_once(node)  # 1回だけ実行して終了
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()