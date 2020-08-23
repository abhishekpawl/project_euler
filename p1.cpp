#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int limit;
    cin>>limit;
    long sum = 0;
    for(int i = 1; i < limit; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout<<sum;
    return 0;
}