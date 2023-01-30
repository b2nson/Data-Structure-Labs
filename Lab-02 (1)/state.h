#include <string>
#include "cities.h"

class State {
private:
std::string name;
Cities stateCities;

public:
State() {name = "N/A";}
void setName(std::string stateName) {name = stateName;}
std::string getName() const { return name; }
void readStateCities() { stateCities.readCities(); }
void printStateCities() { stateCities.printCityList(); }
};