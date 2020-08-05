#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string S;
    cin >> S;
    for(int i=0;S[i];i++) {
        if(c=='R') cout << s[s.find(S[i])-1];
        if(c=='L') cout << s[s.find(S[i])+1];
    }
}