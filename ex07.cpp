#include <iostream>

using namespace std;

/**
 * The main function is the entry point
 * for your program. There can be only one.
 */
int main()
{
    int test = 1000;

    // I am going to print out some debugging info
    cout << ">>> main(): test=" << test << ", test sizeof=" << sizeof test << endl;

    // now we do a debug print to show exiting main
    cout << "<<< return main(): 0\n";

    return 0;
}
