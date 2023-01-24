/*
 * 1 Class State
In this lab, you are going to define class State consisting of the following details.
1. Each State has the following data components:
•The name of the state: name
•The population of the state: population
Each of the aforementioned data components must be hidden from the class user (2 points).
2. For each of the aforementioned data components, define the setter. The setter of a data component
assigns the input to that data component. Let the setter function for name and population be
named setName and setPopulation, respectively. Both setters must be visible to the class
users (6 points).
3. All setters must be defined in inlined form (2 points).
4. For each of the aforementioned data components, define the getter. The getter of a data compo-
nent returns that data component. Let the getter function for name and population be named
getName and getPopulation, respectively. Both getters must be visible to the class users. In
addition, each getter must be constant (6 points).
5. All getters must be defined in inlined form (2 points).
6. The definition of class State includes the default constructor that sets
•state name to N/A, and
•state population to 0.
In addition, avoid inlined form for its definition (3 points).
7. The class State includes a private helper function size() that returns small, medium, or
large according to the state’s population. The details are as follows:
•If the population is less than 1 million, then it returns small.
•If the population is larger than 1 million but less than 5 million, then it returns medium.
•If the population is larger than 5 million, then it returns large.
This function must be a constant function. In addition, avoid inlined form for its definition (4
points).
8. The class State includes a public function void printSize() that invokes getName()
along with size() to print the state name and its size in the standard output. printSize() must
be a constant function. In addition, avoid inlined form for its definition (3 points).
1
2 Main function
Define main function that does the following step by step.
1. Create an object of class State, called state1 (1 points).
2. Invoke printSize() function of state1 object (1 points).
3. Set the name and population for state1 to be California and 40000000, respectively (2
points).
4. Invoke printSize() function of state1 object (1 points).
The output of the program may look like the following:
N/A: small
California: large
 */

#include <iostream>

class State {
public:
    State();
    void setName(std::string stateName);
    void setPopulation(int statePopulation);
    std::string getName() const;
    int getPopulation() const;
    std::string getSize() const;
    void Print() const;

private:
    std::string name;
    int population;
    std::string size;
};

State::State() {
    name = "N/A";
    population = 0;
}

void State::setName(std::string stateName) {
    name = stateName;
}

void State::setPopulation(int statePopulation) {
    population = statePopulation;
}

std::string State::getName() const {
    return name;
}

int State::getPopulation() const {
    return population;
}

std::string State::getSize() const {
    if (population < 1000000) {
        return "small";
    }
    else if ((population > 1000000) && (population < 5000000)) {
        return "medium";
    }
    else {
        return "large";
    }
}
void State::Print() const {
    std::cout << name << " " << getSize() << std::endl;
}

int main() {

    State state1;

    state1.Print();

    state1.setName("California");
    state1.setPopulation(40000000);

    state1.Print();
    return 0;
}
