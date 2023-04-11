#include <iostream>
#include <string>
using namespace std;
int main(){
      string s, t ="";
    cin >> s;
    // t = "a" -> t += 'b' ->t = abcd
   // 255.100.50.0
   // 255[.]100[.]5e[.]e
    for (int i = 0; i < s.size(); ++i)
    {//isdigit hamf kt có phải số không
        if (isdigit(s[i]))
        {
            t += s[i];
        }
        else 
        {
            t += "[.]";
        }}
    cout << t;
    return 0;}





