healthy = ["kale chips", "broccoli"]
backpack = ["pizza", "apple crisp", "kale chips"]

print(backpack)
backpack[:] = [item for item in backpack if item in healthy]
print(backpack)
