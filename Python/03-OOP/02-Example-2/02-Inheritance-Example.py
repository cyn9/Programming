class Human:
    def __init__(self, firstName, lastName, age):
        # Internal class variables
        self._firstName = firstName
        self._lastName = lastName
        self._age = age
    
    def getFirstName(self):
        return self._firstName
    
    def getLastName(self):
        return self._lastName
    
    def getAge(self):
        return self._age
    
    def setFirstName(self, firstName):
        self._firstName = firstName
    
    def setLastName(self, lastName):
        self._lastName = lastName
    
    def setAge(self, age):
        self._age = age

    # Using decorators:
    @property
    def fullName(self):
        return f"Full name : {self._firstName} {self._lastName}"

    @fullName.setter
    def fullName(self, fullName):
        self._firstName, self._lastName = fullName.split(" ")

    @property
    def age(self):
        return self._age
    
    @age.setter
    def age(self, age):
        if age < 0:
            raise ValueError("Negative age entered.")
        else:
            self._age = age


person1 = Human("John", "Doe", 30)
print(person1.age)

person1.age = 32
print(person1.age)

print(person1.fullName)

person1.fullName = "Jane Doe"
print(person1.fullName)