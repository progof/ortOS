import os
from core.core import IProgramController
from core.core import IProgram

class UI:
    def __init__(self, controller):
        self.controller = controller

    def clear_console(self):
        os.system('cls' if os.name == 'nt' else 'clear')

    def display_programs(self):
        programs = self.controller.programs
        print("\nID | Program name | Category | Description\n")
        for index, program in enumerate(programs):
            print(f"{index+1} | {program.name} | {program.category} | {program.description}")
        print()

    def run(self):
        self.clear_console()
        choice = -1
        version = "2.0.0"
        print(f"\n\t\tWelcome to OrtOS manager [{version}]\n")
        print("This is a personal manager for working with simple programs.")
        print("To run working with the manager, enter '0'\n")
        self.display_programs()

        while choice != 0:
            choice = int(input("[OrtOS] Type id of program to run it # "))

            if choice != 0:
                self.controller.run_program(choice - 1)
                print()

            if choice == 0:
                print("\n\tGood bye (>.<)\n")
                exit(0)
