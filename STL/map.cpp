#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Sanyam";
    m[3] = "Saini";
    m[2] = "Kumar";
    m.insert({5, "Phone"});
    cout << "Before Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "5 present or not: " << m.count(5) << endl;
    cout << "After Erase" << endl;
    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "5 present or not: " << m.count(5) << endl;
    return 0;
}
