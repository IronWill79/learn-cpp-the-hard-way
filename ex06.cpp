#include <iostream>

using namespace std;

int main()
{
    int age = 50;
    float height = 6.25f;
    string name = "Zed";
    char initial = 'A';
    auto last = "Shaw";
    long int big_negative = -123'456'789;
    unsigned long long lots_of_pi = 3'141'592'653'589'793'238;

    cout << "I am " << age << " years old.\n";
    cout << "I am also " << height << " length units tall.\n";
    cout << "My name is " << name << " " << initial << " " << last << endl;
    cout << "Big negative number " << big_negative << endl;
    cout << "Digits of Pi " << lots_of_pi << endl;

    return 0;
}
