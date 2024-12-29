#include <fmt/core.h>
#include <vector>

using namespace fmt;
using std::vector;

int main()
{
    vector<int> ages = {10, 34, 25, 19, 87, 5};

    println("I have {} cousins of different ages:", ages.size());

    for (size_t i = 0; i < ages.size(); i++)
    {
        int cousin_age = ages.at(i);
        println("cousin #{} is {} years old.", i, cousin_age);
    }
}
