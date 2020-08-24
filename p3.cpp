#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll maxPrimeFactor(ll num) {
    ll maxPrime , div = 2;

    while(div < (int)sqrt(num)) {
        while(num % div == 0) {
            num /= div;
            maxPrime = div;
        }
        div++;
    }

    if(num >= 2) {
        maxPrime = num;
    }

    return maxPrime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll num;
    cin>>num;
    cout<<maxPrimeFactor(num);
    return 0;
}