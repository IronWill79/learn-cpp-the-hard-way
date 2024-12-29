#include <iostream>
#include <fmt/core.h>

using namespace fmt;
using namespace std;

void adder(int a, int b)
{
    println("{}+{}={}", a, b, a + b);
}

int main()
{
    adder(20, 26);
    adder(30, 36);

    return 0;
}
