// TOGGLE CASE 
// FIRST LETTER CAPITALIZE

#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter letter string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] < 123)
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] <= 90 && s[i] >= 65)
        {
            s[i] += 32;
        }
        else
        {
            cout << "Invalid";
        }
    }
    cout << "Toggle: " << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }else{
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }
    }
    cout << s;
}