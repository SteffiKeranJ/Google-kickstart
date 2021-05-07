#include <bits/stdc++.h>
#define MAX 100001
using namespace std ;
int main() {
    int t, i ;
    cin >> t ;
    for(int c = 1 ; c <= t ; ++c) {
        int n , b , result = 0 ; 
        cin >> n >> b ;
        int a[MAX] ; 
        for(i = 0 ; i < n ; ++i) 
            cin >> a[i] ;
        sort(a, a+n) ;
        for(i = 0 ; i < n ; ++i) {
            if(a[i]<=b) {
                b -= a[i] ;
                result++ ;
            } else break;
        }
        printf("Case #%d: %d\n", c, result) ;
    }
}


