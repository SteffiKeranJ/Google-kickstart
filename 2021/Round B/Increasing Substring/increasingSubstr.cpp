/** 
https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435a5b/000000000077a882
**/

include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    string s="";
    for(int i = 1; i <= t; ++i) {
        cin >> n;
        cin >> s;
        cout << "Case #"<<i<<": ";
        int maxChar = 1;
        int lastChar = s[0] - 'A';
        cout << maxChar << " ";
        for(int j = 1; j < n; ++j) {
            int curChar = s[j]-'A';
            maxChar = curChar<=lastChar ? 1 : ++maxChar;
            lastChar = curChar;
            cout << maxChar << " ";
        }
        cout << endl;
    }

    return 0;
}
