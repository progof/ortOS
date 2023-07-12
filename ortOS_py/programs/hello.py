# programs/hello.py

from core.core import IProgram
from core.core import IProgramController

class HelloWorldProgram(IProgram):
    #def __init__(self, name, category, description):
    #    self.name = "Hello"
    #    self.category = "Test"
    #    self.description = "Simple description"

    def run(self):
        print("Hello, world!")

controller = IProgramController()

# Register programs in the controller
controller.register_program(HelloWorldProgram("Приветствие", "Test", "Программа выводит приветствие"))