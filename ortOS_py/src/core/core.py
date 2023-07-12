class IProgram:
    def __init__(self, name, category, description):
        self.name = name
        self.category = category
        self.description = description

    def run(self):
        pass

class IProgramController(IProgram):
    def __init__(self):
        self.programs = []

    def register_program(self, program):
        self.programs.append(program)

    def display_programs(self):
        print("0. Exit")
        for index, program in enumerate(self.programs):
            print(f"{index}. {program.name}. {program.category}. {program.description}")  

    def run_program(self, index):
        if 0 <= index < len(self.programs):
            self.programs[index].run()
        else:
            print("Error: Incorrect program index.")

