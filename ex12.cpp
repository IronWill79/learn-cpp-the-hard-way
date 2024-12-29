#include <iostream>
#include <fmt/core.h>

using namespace fmt;
using namespace std;

int main()
{
    int height = (6 * 12) + 2;
    int age = 50 * 12;
    const int is_tall = 6 * 12;
    const int is_old = 100; // no cap

    if (height > is_tall)
    {
        println("You are considered tall.");
    }
    else if (height == is_tall)
    {
        println("You could be if you lied about your height.");
    }
    else
    {
        println("You are considered short.");
    }

    if (age > is_old)
    {
        println("You are considered old.");
    }
    else if (age == is_old)
    {
        println("You are still considered old.");
    }
    else if (age > is_old / 2)
    {
        println("Most people still think you're old.");
    }
    else
    {
        println("You're considered not old.");
    }

    return 0;
}
