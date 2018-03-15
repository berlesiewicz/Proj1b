#include <iostream>
#include <string>
#include "person.h"
//#include "perfun.h"

using namespace std;

string replz(string word)
{
    for(unsigned int i=0; i<word.length(); i++)
    {
        if (word[i]=='e' || word[i]=='u' || word[i]=='i' || word[i]=='o' || word[i]=='a' || word[i]=='E' || word[i]=='U' || word[i]=='I' || word[i]=='O' || word[i]=='A')
        {
            word[i]='z';
        }
    }
    return word;
}

int main()
{
    Person per1;

    cout << "Write name: ";
    cin >> per1.name;
    cout << "Write surname: ";
    cin >> per1.surname;
    cout << "Write pseudonym: ";
    cin >> per1.pseudonym;
    cout << endl << per1.name << " \"" << per1.pseudonym << "\" " << per1.surname;
    per1.name=replz(per1.name);
    per1.surname=replz(per1.surname);
    per1.pseudonym=replz(per1.pseudonym);
    cout << endl << per1.name << " \"" << per1.pseudonym << "\" " << per1.surname;
    cout << endl;
    return 0;
}
