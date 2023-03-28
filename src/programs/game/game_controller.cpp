#include "game_controller.hpp"

void game_menu()
{ 
    string programs_list[] = {"Game: Menu", "Game: Info", "Hungry Dog"};
    cout << FCYN("\n[ID] Programs name:") << endl;
        for (int i = 0; i < end(programs_list)-begin(programs_list); i++)
        {
            cout << "[" << i << "] " << programs_list[i] << endl;
        }
        cout << endl;
}

void game_info()
{
    cout << FGRN("\n'Hungry Dog' =>") << " This is a game in which you have to feed bones to a hungry dog;" << endl;
    cout << endl;
}

void game_controller()
{
    int option;
    string confirm;
    do
    { 
        cout << "\n\nYou are currently in the section " << FGRN("'Game'") << ", to run working with the manager, enter " << FYEL(BOLD("'0'")) << endl;
        cout << FGRN("\n[OrtOS@Game] Type id of program to run it $ ");
        cin >> option;
        
        switch (option)
        {
            case 0: 
                game_menu(); 
                break;
            case 1: 
                game_info();
                break;
            case 2: 
                hungry_dog();
                break;          
            default: 
                cout << "\n\tInvalid program ID\n" << endl;
                break;
        }
        cout << "Do you want to continue [Game]? [Y/n] ";
        cin >> confirm;

    } while (confirm == "y" || confirm == "Y");
}