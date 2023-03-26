// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#include "interface.hpp"

void displaymenu()
{ 
    string programs_list[] = {"Menu", "Info", "Guess X", "Compound Interest", "Multiplication of large numbers"};
    std::cout << FCYN("\n[ID] Programs name:") << std::endl;
        for (int i = 0; i < 5; i++)
        {
            std::cout << "[" << i << "] " << programs_list[i] << std::endl;
        }
        cout << endl;
}

void info()
{
    cout << FGRN("\n'Guess X' =>") << " The computer guesses a random number from 0 to 100 and you have to guess it;" << endl;
    cout << FGRN("\n'Compound Interest' =>") << " Calculator that will help calculate the investment;" << endl;
    cout << FGRN("\n'Multiplication of large numbers' =>") << " Calculator that can multiply a number with 100 digits;" << endl;
    cout << endl;
}

int main(int argc, char* argv[])
{   
    int option;
    string confirm;
    do
    { 
        cout << FBLU("\n\t\tWelcome to OrtOS manager") << FGRN(" ["<< version << "]") << endl;
        cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter " << FYEL(BOLD("'0'")) << endl;
        cout << FMAG("\n[OrtOS] Type id of program to run it $ ");
        cin >> option;
        
        switch (option)
        {
            case 0: 
                displaymenu(); 
                break;
            case 1: 
                info();
                break;
            case 2: 
                guess_x();
                break;
            case 3: 
                compound_interest(); 
                break;
            case 4: 
                mult_big_num(); 
                break;
            case 5: 
                compress_display(); 
                break;    
            default: 
                cout << FRED("\n\tInvalid program ID\n") << endl;
                break;
        }
        cout << "Do you want to continue? [Y/n] ";
        cin >> confirm;

    } while (confirm == "y" || confirm == "Y");
    
    return EXIT_SUCCESS;
}
