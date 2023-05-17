#include "interface.hpp"

 // Enum class that represents unique identifier of program.
 // Starts from 1
 enum class ProgramID {
   GuessGame = 1,
   Compress,
   MultBigNum,
   HungryDog,
   CompoundInterest,
   Animal,
   // Min and max items are used to validate enum values
   MIN = GuessGame,
   MAX = CompoundInterest
 };

 // Validate and converts integer to ProgramID enum, otherwise throws error
 ProgramID intToProgramID(int n) {
   if (n < int(ProgramID::MIN) || n > int(ProgramID::MAX)) {
     throw std::out_of_range(FRED("invalid integer value for ProgramID"));
   }
   return static_cast<ProgramID>(n);
 }

 struct Program {
    // Program function
    void (*func)();
    string name;
    string description;
 };

 int main(){
   std::map<ProgramID, Program> programs;

    programs[ProgramID::GuessGame] = Program{.func = &guess_x, .name = FBLU("Game: Guess X"), .description = UNDL("The computer guesses a random number from 0 to 100 and you have to guess it;")};
    programs[ProgramID::CompoundInterest] = Program{.func = &compound_interest, .name = FBLU("Finance: Compound Interest"), .description = UNDL("Calculator that will help calculate the investment;")};
    programs[ProgramID::Compress] = Program{.func = &compress_display, .name = FBLU("Education: Compress"), .description = UNDL("Compresses elements that are repeated multiple times;")};
    programs[ProgramID::MultBigNum] = Program{.func = &mult_big_num, .name = FBLU("Education: MultBigNum"), .description = UNDL("Calculator that can multiply a number with 100 digits;")};
    programs[ProgramID::Animal] = Program{.func = &animal_display, .name = FBLU("Education: Animal"), .description = UNDL("Example of class inheritance in с++;")};
    programs[ProgramID::HungryDog] = Program{.func = &hungry_dog, .name = FBLU("Game: HungryDog"), .description = UNDL("This is a game in which you have to feed bones to a hungry dog;")};

    system("clear");
    cout << FBLU("\n\t\tWelcome to OrtOS manager") << FGRN(" ["<< version << "] ") << endl;
    cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter " << FYEL(BOLD("'0'\n\n")) << endl;

    std::cout << "ID | Program name | Description \n" << std::endl;
   // List all programs with their ids
   for (auto const &[id, program] : programs) {
     std::cout << (int)id << ". " << program.name <<  " => " << program.description << std::endl;
   }
   std::cout << std::endl;

   int option;
   while (true) {
        cout << FMAG("\n[OrtOS] Type id of program to run it # ");
        cin >> option;

      if (option == 0)
      {
        cout << FYEL("\n\tGood bye (>.<)\n") << endl;
        exit(0);
      } 

      try {
       auto id = intToProgramID(option);
       // Get program from `programs` map by id and call program function
       programs[id].func();
     } catch (std::out_of_range &error) {
       std::cout << "\n\tError: " << error.what() << std::endl;
       continue;
     }
   }
 } 

 