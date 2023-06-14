#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    cout << "Finding 4: " << binary_search(v.begin(), v.end(), 4) << endl;
    return 0;
}
