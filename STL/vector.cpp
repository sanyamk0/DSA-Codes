#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    v.push_back(5);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "Element at 2nd Index: " << v.at(2) << endl;
    cout << "First Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;

    cout << "Before Pop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    v.pop_back();
    cout << "After Pop" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear Size: " << v.size() << endl;
    v.clear();
    cout << "After Clear Size: " << v.size() << endl;
    return 0;
}
