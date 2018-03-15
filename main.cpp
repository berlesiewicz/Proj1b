#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main()
{
    Person per1;
    cout << "Write name: ";
    cin >> per1.name;
    cout << "Write surname: ";
    cin >> per1.surname;
    cout << "Write pseudonym: ";
    cin >> per1.pseudonym;
    cout << endl << per1.name << " " << per1.surname << " \"" << per1.pseudonym << "\"";
    cout << endl;
    return 0;
}
