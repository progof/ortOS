// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023
#include "interface.hpp"

void displaymenu()
{ 
    string programs_list[] = {"Menu", "Info", "Section: Education", "Section: Finance", "Section: Game"};
    std::cout << FCYN("\n[ID] Programs name:") << std::endl;
        for (int i = 0; i < end(programs_list)-begin(programs_list); i++)
        {
            std::cout << "[" << i << "] " << programs_list[i] << std::endl;
        }
        cout << endl;
}

void info()
{
    cout << FGRN("\n'Education' =>") << " ..." << endl;
    cout << FGRN("\n'Finance' =>") << " ..."  << endl;
    cout << FGRN("\n'Game' =>") << " ..."  << endl;
    cout << endl;
}


int main(int argc, char* argv[])
{   
    // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

    int option;
    string confirm;
    do
    { 
        cout << FBLU("\n\t\tWelcome to OrtOS manager [DEV]") << FGRN(" ["<< version << "] ") << dt << endl;
        cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter " << FYEL(BOLD("'0'")) << endl;
        cout << FMAG("\n[OrtOS@Root] Type id of program to run it $ ");
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
                education_controller();
                break;
            case 3: 
                finance_controller();
                break;
            case 4: 
                game_controller();
                break;         
            default: 
                cout << FRED("\n\tInvalid program ID\n") << endl;
                break;
        }
        cout << "Do you want to continue [Root]? [Y/n] ";
        cin >> confirm;

    } while (confirm == "y" || confirm == "Y");
    
    return EXIT_SUCCESS;
}
