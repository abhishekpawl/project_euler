#include <bits/stdc++.h>
using namespace std;

#define MAX 10001
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> res(MAX);
    int len{};

    res[len++] = 1;

    for (int i = 2; i <= n; i++)
    {
        int carry{};

        for (int j = 0; j < len; j++)
        {
            int temp = (res[j] * i + carry);
            res[j] = temp % 10;
            carry = temp / 10;
        }

        while (carry > 0)
        {
            res[len++] = carry % 10;
            carry /= 10;
        }
    }

    ll s{};

    for (int i = len - 1; i >= 0; i--)
    {
        s += res[i];
    }
    cout << s << endl;
}

int main()
{
    solve();
    return 0;
}