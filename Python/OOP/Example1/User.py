class User:
    activeUsers = 0

    def __init__(self, firstName, lastName, age):
        self.firstName = firstName
        self.lastName = lastName
        self.age = age
        User.activeUsers += 1
    
    def print(self):
        print(f"{self.firstName} {self.lastName}, {self.age}.")

    def fullName(self):
        return f"{self.firstName} {self.lastName}"
    
    def initials(self):
        return f"{self.firstName[0]}{self.lastName[0]}"

    def isSenior(self):
        senior = self.age > 65
        return f"{self.initials()} is a senior." if senior else f"{self.initials()} is not a senior."

    def userLogout(self):
        print(f"{self.fullName()} has logged out.")
        User.activeUsers -= 1

    def setUserAge(self, age):
        self.age = age
    
    def getUserAge(self):
        return self.age


print(f"Number of users : {User.activeUsers}.")

user1 = User("John", "Doe", 19)
user1.print()
print(user1.isSenior())
print(f"Number of users : {User.activeUsers}.")

user2 = User("Mary", "Jane", 66)
user2.print()
print(user2.isSenior())
print(f"Number of users : {User.activeUsers}.")

user2.userLogout()
print(f"Number of users : {User.activeUsers}.")

user1.setUserAge(25)
print(user1.getUserAge())