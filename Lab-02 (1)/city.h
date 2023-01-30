#include <string>

class City {
private:
std::string name;
unsigned int population;

public:
City(std::string name, unsigned int population) : name(name), population(population) {}
std::string getName() const { return name; }
unsigned int getPopulation() const { return population; }
};