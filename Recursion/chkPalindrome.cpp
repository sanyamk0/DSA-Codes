#include <iostream>
using namespace std;
bool checkPalindrome(string s, int i)
{
    int n = s.length();
    if (i > n - i - 1)
        return true;
    if (s[i] == s[n - i - 1])
    {
        i++;
        return checkPalindrome(s, i);
    }
    else
        return false;
}
int main()
{
    string s = "abbccbba";
    bool ans = checkPalindrome(s, 0);
    cout << ans << endl;
    return 0;
}
