from core.core import IProgramController

controller = IProgramController()

def ui2():
    print(f"\n\t\tWelcome to OrtOS manager [{version}]\n")
    print("This is a personal manager for working with simple programs.")
    print("To run working with the manager, enter '0'\n")
    controller.display_programs()

    programs = controller.programs
    print("\nID | Program name | Category | Description\n")
    controller.display_programs()
    #for index, program in enumerate(programs):
    #    print(f"{index+1} | {program.name} | {program.category} | {program.description}")
    print()

    choice = -1
    while choice != 0:
        choice = int(input("[OrtOS] Type id of program to run it # "))

        if choice != 0:
            controller.run_program(choice - 1)
            print()

        if choice == 0:
            print("\n\tGood bye (>.<)\n")
            exit(0)