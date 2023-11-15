#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "deepakdash";
    string s2 = "kissmyass";
    vector<int> v1(26, 0), v2(26, 0), com(26, 0);
    for(int i = 0; i < s1.length(); i ++){
        char ch = s1[i];
        v1[ch - 'a'] = 1;
    }
    for(int i = 0; i < s2.length(); i ++){
        char ch = s2[i];
        v2[ch - 'a'] = 1;
    }
    for(int i = 0; i < s1.length(); i ++){
        char ch = s1[i];
        if(v2[ch - 'a'] == 1){
            if(com[ch - 'a'] == 0)
                cout << ch;
            com[ch - 'a']++;
        }
    }

    cout << endl;

    return 0;
}