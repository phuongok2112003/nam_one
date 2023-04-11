#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s; // getline(cin, s)
    // RLRRLLRLRL
    int cnt = 0, c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        c += (s[i] == 'R') ? 1 : -1;
        cnt += (c == 0);
    }
    // i = 0, c = 1
    // i = 1, c = 0, -> cnt = 1
    // i = 2, c = 1, -> cnt = 1
    // i = 3, c = 2, -> cnt = 1
    // i = 4, c = 1, -> cnt = 1
    // i = 5, c = 0, -> cnt = 2
    cout << cnt;
    return 0;
}