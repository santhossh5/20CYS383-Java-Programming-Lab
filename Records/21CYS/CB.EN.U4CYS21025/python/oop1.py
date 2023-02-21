class individual:
    #a=11
    def __init__(self,character_name):
        self.character_name=character_name;
        self.a=10
    def get_character_name(self):
        a=11
        print(a)
        print(self.a)
        return self.character_name;

individual1 = individual('Buster')
individual2 = individual('Tobias')
print(individual1.get_character_name())
print(individual2.get_character_name())
