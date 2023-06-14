#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(3);
    s.insert(3);
    s.insert(9);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "3 present or not: " << s.count(3) << endl;
    return 0;
}
