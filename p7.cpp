#include <bits/stdc++.h>
using namespace std;

int isPrime(long n) {
    long c = 0;
    for(long i = 2; i <= (long)sqrt(n); i++) {
        if(n % i == 0) {
            c++;
            break;
        }
    }
    if(c == 0) {
        return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long end, i = 1, num = 3;
    cin>>end;
    while(i != end) {
        if(isPrime(num) == 1) {
            i++;
        }
        num += 2;
    }
    cout<<num - 2;
    return 0;
}