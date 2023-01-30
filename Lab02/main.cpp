#include "state.h"
#include <iostream>

  // Group Members: Benson Nguyen and Kevin Li

int main() {
  std::string stateName;

  std::cout << "Enter the state name:" << std::endl;
  std::cin >> stateName;

  State state;
  state.setName(stateName);
  std::cout << "State: " << state.getName() << std::endl;
  state.readStateCities();
  state.printStateCities();
  return 0;
}