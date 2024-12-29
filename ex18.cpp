#include <fmt/core.h>
#include <vector>

using std::string, std::vector;
using namespace fmt;

vector<string> bug_maker()
{
    return {"Boo! I'm a Bug!"};
}

int main()
{
    vector<string> fruit = {
        "Apple", "Orange", "Pear",
        "Grape", "Durian", "Mango"};

    // loop through fruit
    for (auto name : fruit)
    {
        println("Fruit is {}", name);
    }

    vector<string> guitars = {
        "Stratocaster", "Telecaster", "Bass VI",
        "P-Bass", "ASAT Special", "G&L S500"};

    // loop through guitars
    for (auto name : guitars)
    {
        println("Guitar is {}", name);
    }

    /*
    for(auto name : bug_maker()[0]) {
        println("Probably Crashing: {}", name);
    }
    */
}
