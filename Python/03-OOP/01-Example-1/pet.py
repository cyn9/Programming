class Pet:
    pets = ['Cat', 
            'Dog', 
            'Fish', 
            'Rat']

    def __init__(self, name, species):
        if species not in Pet.pets:
            raise ValueError(f"You cannot have {self.species} as a pet.")
        
        self.name = name
        self.species = species
    
pet1 = Pet("Body", "Dog")
pet2 = Pet("Iggy", "Tiger")
