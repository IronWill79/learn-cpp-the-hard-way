#include <iostream>
#include <fmt/core.h>

using namespace fmt;
using namespace std;

int main()
{
    int peanuts = 1000;
    int people = 100;

    println("More {} peanuts and {} people.", peanuts, people);

    bool test = peanuts > people;
    println("More peanuts than people? {}", test);

    test = peanuts < people;
    println("Less peanuts than people? {}", test);

    test = peanuts == people;
    println("Are peanuts equal to people? {}", test);

    test = peanuts >= 1000;
    println("Are there more peanuts or equal to 1000? {}", test);

    test = people <= 500;
    println("Are there fewer or equal people than 500? {}", test);

    println("What if we not that? {}", !test);

    // combine with some math
    test = peanuts == people * 10;
    println("What about 10x the people? {}", test);

    bool tenth_peanuts = peanuts / 10 == people;
    println("Maybe 1/10th the peanuts? {}", tenth_peanuts);

    bool less_peanuts = peanuts - 100 == people;
    println("If I ear 100 peanuts? {}", less_peanuts);

    bool and_test = tenth_peanuts && less_peanuts;
    // remember multi-line strings?
    println("Are there 1/10th the peanuts of people\n"
            "\tAND there the same number of people "
            "as peanuts - 100? {}",
            and_test);

    bool or_test = tenth_peanuts || less_peanuts;
    println("Same but either there's 1/10th "
            "peanuts OR peanuts minus 100? {}",
            or_test);

    return 0;
}
