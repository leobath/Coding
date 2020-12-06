healthy = ["kale chips", "broccoli"]
backpack = ["pizza", "apple crisp", "kale chips"]

print(backpack)
#backpack[:] = [item.upper() for item in backpack if item in healthy]

healthy_backpack = [item.upper() for item in backpack if item in healthy]

# for item in backpack:
#     if item in healthy:
#         healthy_backpack.append(item.upper())

print(backpack)
print(healthy_backpack)
