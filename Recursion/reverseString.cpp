#include <iostream>
using namespace std;

// void reverse(string &s, int i, int j)
// {
//     if (i > j)
//         return;
//     swap(s[i], s[j]);
//     i++, j--;
//     reverse(s, i, j);
// }
void reverse(string &s, int i)
{
    int n = s.length();
    if (i > n - i - 1)
        return;
    swap(s[i], s[n - i - 1]);
    i++;
    reverse(s, i);
}
int main()
{
    string s = "abcdefghij";
    // reverse(s, 0, s.length() - 1);
    reverse(s, 0);
    cout << s << endl;
    return 0;
}
