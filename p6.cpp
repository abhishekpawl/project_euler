#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int limit;
    cin>>limit;
    ll sqsum = 0, sumsq = 0;
    for(int i = 1; i <= limit; i++) {
        sqsum += (i * i);
        sumsq += i;
    }
    ll dif = (sqsum > (sumsq * sumsq)) ? sqsum - (sumsq * sumsq) : (sumsq * sumsq) - sqsum;
    cout<<dif;
    return 0;
}