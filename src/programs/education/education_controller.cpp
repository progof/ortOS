#include "education_controller.hpp"

void education_menu()
{ 
    string programs_list[] = {"Menu", "Info", "Guess X", "Multiplication of large numbers", "Compress"};
    cout << FCYN("\n[ID] Programs name:") << endl;
        for (int i = 0; i < end(programs_list)-begin(programs_list); i++)
        {
            cout << "[" << i << "] " << programs_list[i] << endl;
        }
        cout << endl;
}

void education_info()
{
    cout << FGRN("\n'Guess X' =>") << " The computer guesses a random number from 0 to 100 and you have to guess it;" << endl;
    cout << FGRN("\n'Multiplication of large numbers' =>") << " Calculator that can multiply a number with 100 digits;" << endl;
    cout << FGRN("\n'Copmress' =>") << " Compresses elements that are repeated multiple times;" << endl;
    cout << endl;
}

void education_controller()
{
    int option;
    string confirm;
    do
    { 
        cout << "\n\nYou are currently in the section " << FBLU("'Education'") << ", to run working with the manager, enter " << FYEL(BOLD("'0'")) << endl;
        cout << FBLU("\n[OrtOS@Education] Type id of program to run it $ ");
        cin >> option;
        
        switch (option)
        {
            case 0: 
                education_menu(); 
                break;
            case 1: 
                education_info();
                break;
            case 2: 
                guess_x();
                break;
            case 3: 
                mult_big_num(); 
                break;
            case 4: 
                compress_display();            
            default: 
                cout << "\n\tInvalid program ID\n" << endl;
                break;
        }
        cout << "Do you want to continue [Education]? [Y/n] ";
        cin >> confirm;

    } while (confirm == "y" || confirm == "Y");
}