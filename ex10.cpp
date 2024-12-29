#include <fmt/core.h>

using namespace fmt;

int main()
{
    int peanuts = 1000;
    int people = 100;

    println("{} peanuts and {} people.", peanuts, people);

    peanuts += 10;
    people -= 10;

    println("After += and -= peanuts={}, people={}", peanuts, people);

    int tigers = peanuts * people;
    long lots_of_tigers = tigers * 5;

    println("tigers={}, lots_of_tigers={}", tigers, lots_of_tigers);

    double fewer_tigers = lots_of_tigers / 23;
    println("fewer_tigers={}", fewer_tigers);

    fewer_tigers /= 43.0f;
    println("fewer_tigers again={}", fewer_tigers);

    ++tigers;
    println("one more tiger={}", tigers);
    return 0;
}
