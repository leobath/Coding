print("hi py")
print("First python program!")
name = 'L\ne\no'
print(name)

class Person:
	def __init__(self, name, age):
		self.name = name
		self.age = age
p1 = Person("Leo", 44)

print(p1.name, " age:" ,p1.age, sep='')
