#include <iostream>
#include <fmt/core.h>

using namespace fmt;
using namespace std;

int main()
{
    int x = 0; // initializer

    while (x < 20)
    {
        println("X={}", x);
        ++x;
    }

    return 0;
}
