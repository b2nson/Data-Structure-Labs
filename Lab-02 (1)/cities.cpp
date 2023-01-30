#include <iostream>
#include "cities.h"

void Cities::readCities() {
std::string cityName;
unsigned int cityPopulation;

std::cout << "Enter city name and population. To end, enter X." << std::endl;
 
while (true) {
  std::cin >> cityName;
  if (cityName == "X") {
    break;
  }
  std::cin >> cityPopulation;
  City newCity(cityName, cityPopulation);
  cityList.push_back(newCity);
}
  };

void Cities::printCityList() {
for (const auto &city:cityList) {
std::cout << "City: " << city.getName() << std::endl;
std::cout << "Population: " << city.getPopulation() << std::endl;
}
}