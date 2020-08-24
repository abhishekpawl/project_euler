#include <bits/stdc++.h>
using namespace std;

int isPalindrome(long num) {
    int d;
    long rev = 0, temp = num;
    while(temp != 0) {
        d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    }
    if(rev == num){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    long max = LONG_MIN;
    for(long i = 999; i > 99; i--) {
        for(long j = i; j > 99; j--) {
            if(isPalindrome(i * j) == 1) {
                if((i * j) > max) {
                    max = i * j;
                }
            }
        }
    }
    cout<<max;
    return 0;
}