#include <iostream>
using namespace std;

int main()
{
    string s;
    int i  = 0;
    getline(cin, s);
    while (s[i])
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
        i++;
    }
    // if (i == 0)
    //     cout << "\n";
    cout << s << "\n";
    return 0;
}