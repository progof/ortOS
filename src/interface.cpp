#include "interface.hpp"

 // Enum class that represents unique identifier of program.
 // Starts from 1
 enum class ProgramID {
   GuessGame = 1,
   Compress,
   MultBigNum,
   HungryDog,
   CompoundInterest,
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

 int main() {
   std::map<ProgramID, Program> programs;

    programs[ProgramID::GuessGame] = Program{.func = &guess_x, .name = "Game: Guess X", .description = "The computer guesses a random number from 0 to 100 and you have to guess it"};
    programs[ProgramID::CompoundInterest] = Program{.func = &compound_interest, .name = "Finance: Compound Interest", .description = "Calculator that will help calculate the investment"};
    programs[ProgramID::Compress] = Program{.func = &compress_display, .name = "Education: Compress", .description = "Compresses elements that are repeated multiple times"};
    programs[ProgramID::MultBigNum] = Program{.func = &mult_big_num, .name = "Education: MultBigNum", .description = "soon..."};
    programs[ProgramID::HungryDog] = Program{.func = &hungry_dog, .name = "Game: HungryDog", .description = "soon..."};

    system("clear");
    cout << FBLU("\n\t\tWelcome to OrtOS manager") << FGRN(" ["<< version << "] ") << endl;
    cout << "\nThis is a personal manager for working with simple programs,\nto run working with the manager, enter " << FYEL(BOLD("'0'\n\n")) << endl;

   // List all programs with their ids
   for (auto const &[id, program] : programs) {
     std::cout << (int)id << ". " << program.name << std::endl;
   }
   std::cout << std::endl;

   int option;
   while (true) {
        cout << FMAG("\n[OrtOS] Type id of program to run it :> ");
        cin >> option;

      if (option == 0)
      {
        cout << FYEL("Good bye (>.<)") << endl;
        exit(0);
      } 

      if(option == 77)
      {
        // List all programs with their ids
        for (auto const &[id, program] : programs)
        {
        std::cout << (int)id << ". " << program.description << std::endl;
        }
        std::cout << std::endl;
      }

      try {
       auto id = intToProgramID(option);
       // Get program from `programs` map by id and call program function
       programs[id].func();
     } catch (std::out_of_range &error) {
       std::cout << "Error: " << error.what() << std::endl;
       continue;
     }
   }
 } 