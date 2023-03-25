// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#include "interface.hpp"
using namespace std;

int main()
{
    int option;
    string confirm;
    do
    { 
        system("clear");
        cout << "\t\tWelcome to OrtOS manager [" << version << "]" << endl;
        cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter '0'" << endl;
        cout << "\n[OrtOS] Type id of program to run it $ ";
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
            default: 
                cout << "\n\tInvalid program ID\n" << endl;
                break;
        }
        cout<<"Press 'y' or 'Y' to continue: ";
        cin>>confirm;

    } while (confirm == "y" || confirm == "Y");
    
    return EXIT_SUCCESS;
}