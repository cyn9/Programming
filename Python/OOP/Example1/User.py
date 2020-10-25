class User:
    activeUsers = 0

    def __init__(self, firstName, lastName, age):
        self.firstName = firstName
        self.lastName = lastName
        self.age = age
        User.activeUsers += 1
    
    # Displays the number of active users.
    @classmethod
    def displayActiveUsers(cls):
        return f"Number of active users : {cls.activeUsers}."

    # Creates a new User from a string.
    @classmethod
    def clsFromString(cls, s):
        firstName, lastName, age = s.split(",")
        return cls(firstName, lastName, age)

    # Prints full user information.
    def print(self):
        print(f"{self.firstName} {self.lastName}, {self.age}.")

    # Returns fullName variable.
    def getFullName(self):
        return f"{self.firstName} {self.lastName}"
    
    # Returns initials of the User name.
    def getInitials(self):
        return f"{self.firstName[0]}{self.lastName[0]}"

    # Returns if the User is a senior.
    def isSenior(self):
        senior = self.age > 65
        return f"{self.getInitials()} is a senior." if senior else f"{self.getInitials()} is not a senior."

    # Logs out the user.
    def userLogout(self):
        print(f"{self.getFullName()} has logged out.")
        User.activeUsers -= 1

    # Sets the variable: age
    def setUserAge(self, age):
        self.age = age
    
    # Returns the variable: age
    def getUserAge(self):
        return self.age

    # Sets the variable: firstName
    def setUserFirstName(self, firstName):
        self.firstName = firstName
    
    # Returns the variable: firstName
    def getUserFirstName(self):
        return self.firstName

    # Sets the variable: lastName
    def setUserLastName(self, lastName):
        self.lastName = lastName
    
    # Returns the variable: lastName
    def getUserLastName(self):
        return self.lastName


print(User.displayActiveUsers())

user1 = User("John", "Doe", 19)
user1.print()
print(user1.isSenior())
print(f"Number of users : {User.activeUsers}.")

user2 = User("Mary", "Jane", 66)
user2.print()
print(user2.isSenior())
print(f"Number of active users : {User.activeUsers}.")

user2.userLogout()
print(f"Number of active users : {User.activeUsers}.")

user1.setUserAge(25)
print(user1.getUserAge())

user3 = User("John", "Doe", 19)
print(User.displayActiveUsers())

user4 = User.clsFromString("Jack,Steeler,45")
print(f"Full name is {user4.getFullName()}.")
