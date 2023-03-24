// OrtOS - Private manager for working with simple programs
// Developmet to start 03/03/2023

#include "programs/education/guess_x.hpp"
#include "programs/finance/compound_interest.hpp"
#include <iostream>
#include <map>
#include <string>

// Enum class that represents unique identifier of program.
// Starts from 1
enum class ProgramID {
  GuessGame = 1,
  CompoundInterest,
  // Min and max items are used to validate enum values
  MIN = GuessGame,
  MAX = CompoundInterest
};

// Validate and converts integer to ProgramID enum, otherwise throws error
ProgramID intToProgramID(int n) {
  if (n < int(ProgramID::MIN) || n > int(ProgramID::MAX)) {
    throw std::out_of_range("invalid integer value for ProgramID");
  }
  return static_cast<ProgramID>(n);
}

struct Program {
  // Program function
  void (*func)();
  std::string name;
};

int main() {
  std::map<ProgramID, Program> programs;

  programs[ProgramID::GuessGame] =
      Program{.func = &guess_x, .name = "Game: Guess X"};
  programs[ProgramID::CompoundInterest] =
      Program{.func = &compound_interest, .name = "Finance: Compound Interest"};

  system("clear");
  std::cout << "Welcome to OrtOS manager :)" << std::endl;

  // List all programs with their ids
  for (auto const &[id, program] : programs) {
    std::cout << (int)id << ". " << program.name << std::endl;
  }
  std::cout << std::endl;

  int option;
  while (true) {
    std::cout << "[OrtOS] Type id of program to run it, or 0 to exit: ";
    std::cin >> option;

    if (option == 0)
      exit(0);

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
