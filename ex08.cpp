#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    // CHALLENGE 1 HERE
    auto a_int = stoi("1234");
    auto a_long = stol("37812394");
    auto a_long_long = stoll("-68354647782938476");
    auto a_unsigned_long = stoul("84938374");
    auto a_unsigned_long_long = stoull("68354647782938476");
    auto a_float = stof("0.1234");
    auto a_double = stod("3.23499");
    auto a_long_double = stold("0.00234002");

    string from_number = std::to_string(123456);
    string from_float = std::to_string(1.1000f);

    ostringstream msg;

    msg << "An int " << a_int << endl;
    msg << "A long " << a_long << endl;
    msg << "A long long " << a_long_long << endl;
    msg << "An unsigned long " << a_unsigned_long << endl;
    msg << "An unsigned long long " << a_unsigned_long_long << endl;
    msg << "A float " << a_float << endl;
    msg << "A double " << a_double << endl;
    msg << "A long double " << a_long_double << endl;
    msg << "From number " << from_number << endl;
    msg << "From float " << from_float << endl;

    cout << "The result is: " << endl
         << msg.str();

    return 0;
}
