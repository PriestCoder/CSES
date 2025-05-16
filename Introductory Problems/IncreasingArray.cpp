#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll s = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            s += a[i] - a[i + 1];
            a[i + 1] = a[i];
        }
    }
}