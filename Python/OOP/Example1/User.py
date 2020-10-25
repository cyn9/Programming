class User:
    def __init__(self, firstName, lastName, age):
        self.firstName = firstName
        self.lastName = lastName
        self.age = age
    
    def print(self):
        print(f"{user1.firstName} {user1.lastName}, {user1.age}")

user1 = User("John", "Doe", 19)
user1.print()
