#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    cout << (n * (n + 1)) / 2 - s << "\n";
}