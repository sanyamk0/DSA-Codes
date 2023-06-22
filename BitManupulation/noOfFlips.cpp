// NumberofFlips-Coding Ninjas
#include <bits/stdc++.h>
int numberOfFlips(int a, int b)
{
    int c = a ^ b;
    int count = 0;
    while (c != 0)
    {
        if (c & 1)
        {
            count++;
        }
        c = c >> 1;
    }
    return count;
}
// Brian Kernighan's algorithm
#include <bits/stdc++.h>
int numberOfFlips(int a, int b)
{
    int c = a ^ b;
    int count = 0;
    while (c != 0)
    {
        c = c & (c - 1);
        count++;
    }
    return count;
}