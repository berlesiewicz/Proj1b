#include <iostream>
#include <string>
#include <algorithm> //do funkcji reverse
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
    reverse(per1.name.begin(), per1.name.end());
    reverse(per1.surname.begin(), per1.surname.end());
    reverse(per1.pseudonym.begin(), per1.pseudonym.end());
    cout << endl << per1.name << " " << per1.surname << " \"" << per1.pseudonym << "\"";
    cout << endl;
    return 0;
}
