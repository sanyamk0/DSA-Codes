#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s = "sanyam";
    reverse(s.begin(), s.end());
    cout << s << endl;

    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    cout << "Before Rotate" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After Rotate" << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
