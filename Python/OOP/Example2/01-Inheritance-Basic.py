class Animal:
    def __init__(self) -> None:
        self.isCool = True
        
    def makeSound(self, sound):
        print(f"This animal says {sound}.")
    
    def isAnimalCool(self):
        print(self.isCool)

class Cat(Animal):
    pass

myCat = Cat()
myCat.makeSound("Purr!")
myCat.isAnimalCool()
