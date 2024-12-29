#include <fmt/core.h>

using namespace fmt;

int adder(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    int x = adder(40, 50);
    println("x={}", x);

    int y = adder(60, 70);
    println("y={}", y);

    return 0;
}
