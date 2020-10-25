class User:
    def __init__(self, firstName, lastName, age):
        self.firstName = firstName
        self.lastName = lastName
        self.age = age

user1 = User("John", "Doe", 19)
print(f"{user1.firstName} {user1.lastName}, {user1.age}")
