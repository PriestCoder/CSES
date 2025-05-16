#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
 
    int count = 1;
 
    vector<int> vec;
 
    vec.push_back(count);
 
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
 
        vec.push_back(count);
    }
 
    cout << *max_element(vec.begin(), vec.end()) << "\n";
}
