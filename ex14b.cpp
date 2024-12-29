#include <iostream>
#include <fmt/core.h>

using namespace fmt;
using namespace std;

int main()
{
    int x = 0; // initializer

    do
    {
        println("X={}", x);
        ++x;
    } while (x < 20);

    return 0;
}
