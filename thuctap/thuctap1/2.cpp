#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char t = 'A';
    int maxLen = 0, cnt = 0;
    // ATTCGGGA
    // maxLen = 1
    // t = 'T', cnt = 1
    // cnt = 2, maxLen = 2
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t)
        {
            cnt++;
        }
        else
        {
            t = s[i];
            cnt = 1;
        }
        maxLen = max(maxLen, cnt);
    }
    cout << maxLen;
    return 0;
}






