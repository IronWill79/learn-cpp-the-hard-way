#include <iostream>
#include <fmt/core.h>

using namespace fmt;
using namespace std;

int main()
{
    int x = 0;

start_loop:

    println("X={}", x);
    ++x;

    if (x < 20)
        goto start_loop;

    return 0;
}
