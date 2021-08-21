/**
Problem link: https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068cca3
**/

#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>


using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    string s="";
    for(int i = 1; i <= t; ++i) {
        cin >> n >> k;
        cin >> s;
        int half = n>>1;
        int goodness = 0;
        for(int j = 0; j < half; ++j) {
            if(s[j]==s[n-1-j]) continue;
            goodness++;
        }
        cout << "Case #"<<i<<": " <<abs(k-goodness)<< endl;
        
    }

    return 0;
}
