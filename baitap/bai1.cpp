#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;
    int cnt[256] = {};

    for (int i = 0; i < s.size(); ++i)
    {

        cnt[s[i]]++;
    }
    for (int i = 0; i < 256; ++i)
    {
        if (cnt[i])
        {
            cout << char(i) << ' ' << cnt[i] << '\n';
        }
    }
    return 0;
}
