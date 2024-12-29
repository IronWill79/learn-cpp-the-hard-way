#include <fmt/core.h>

using namespace fmt;

auto adder(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    auto x = adder(40, 50);
    println("x={}", x);

    auto y = adder(60, 70);
    println("y={}", y);

    return 0;
}
