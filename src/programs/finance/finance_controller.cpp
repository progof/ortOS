#include "finance_controller.hpp"

void finance_menu()
{ 
    string programs_list[] = {"Fiance: Menu", "Finace: Info", "Compound interest"};
    cout << FCYN("\n[ID] Programs name:") << endl;
        for (int i = 0; i < end(programs_list)-begin(programs_list); i++)
        {
            cout << "[" << i << "] " << programs_list[i] << endl;
        }
        cout << endl;
}

void finance_info()
{
    cout << FGRN("\n'Compound Interest' =>") << " Calculator that will help calculate the investment;" << endl;
    cout << endl;
}

void finance_controller()
{
    int option;
    string confirm;
    do
    { 
        cout << "\n\nYou are currently in the section " << FBLU("'Finance'") << ", to run working with the manager, enter " << FYEL(BOLD("'0'")) << endl;
        cout << FBLU("\n[OrtOS@Finance] Type id of program to run it $ ");
        cin >> option;
        
        switch (option)
        {
            case 0: 
                finance_menu(); 
                break;
            case 1: 
                finance_info();
                break;
            case 2: 
                compound_interest();
                break;          
            default: 
                cout << "\n\tInvalid program ID\n" << endl;
                break;
        }
        cout << "Do you want to continue [Education]? [Y/n] ";
        cin >> confirm;

    } while (confirm == "y" || confirm == "Y");
}