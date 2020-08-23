#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll limit = 4000000;
    ll sum = 2;
    ll first = 1, second = 2;
    ll num  = first + second;
    while(num <= limit) {
        if(num % 2 == 0) {
            sum += num;
        }
        first = second;
        second = num;
        num = first + second;
    }
    cout<<sum;
    return 0;
}