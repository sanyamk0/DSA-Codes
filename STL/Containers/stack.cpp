#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("A");
    s.push("B");
    s.push("C");
    cout << "Top Element: " << s.top() << endl;
    s.pop();
    cout << "Top Element: " << s.top() << endl;
    cout << "Size of Stack " << s.size() << endl;
    cout << "Empty or Not " << s.empty() << endl;
    return 0;
}
