import re
object_list = ["[['cup', [85, 800]]]"]

print("object_list:",object_list)
object_list = object_list[0].split()

print("object_list_1:",object_list)

object_list = re.sub(r"['\[\]]", '', object_list[2])
print("object_list_2:",object_list)
