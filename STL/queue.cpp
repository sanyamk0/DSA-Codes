#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "First Element: " << q.front() << endl;
    q.pop();
    cout << "First Element: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl;
    return 0;
}
