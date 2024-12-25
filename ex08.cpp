#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    // CHALLENGE 1 HERE

    string from_number = std::to_string(123456);
    string from_float = std::to_string(1.1000f);

    ostringstream msg;

    // CHALLENGE 2 HERE

    msg << "From number " << from_number << endl;
    msg << "From float " << from_float << endl;

    cout << "The result is: " << endl
         << msg.str();

    return 0;
}
