class individual:
    def __init__(self,character_name):
        self.character_name=character_name;
        self.happy=True

    def get_character_name(self):
        return self.character_name
    
    def is_happy(self):
        return self.happy
    
    def switch_mood(self):
        if(self.happy==True):
            self.happy=False
        else:
            self.happy=True
            
    def speak(self):
        if(self.happy==True):
            return "Hello, I am "+self.character_name
        else:
            return "Go, away!"

individual3 = individual('Lucille')
print(individual3.is_happy())
print(individual3.speak())
individual3.switch_mood()
print(individual3.speak())