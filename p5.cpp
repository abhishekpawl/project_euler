#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long prod = 1;
    vector <int> v;
    v.push_back(1);
    for(int i = 2; i <= n; i++) {
        int temp = i;
        for(auto it = v.begin(); it != v.end(); ++it) {
            if(temp % (*it) == 0) {
                temp /= *it;
            }
        }
        v.push_back(temp);
        prod *= temp;
    }
    cout<<prod;
    return 0;
}