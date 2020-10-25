class User:
    def __init__(self, firstName, lastName, age):
        self.firstName = firstName
        self.lastName = lastName
        self.age = age
    
    def print(self):
        print(f"{self.firstName} {self.lastName}, {self.age}")

    def fullName(self):
        return f"{self.firstName} {self.lastName}"
    
    def initials(self):
        return f"{self.firstName[0]}{self.lastName[0]}"

user1 = User("John", "Doe", 19)
user1.print()
print(user1.initials())
