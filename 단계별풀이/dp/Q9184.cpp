#include <bits/stdc++.h>

int[21][21][21];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        w(a, b, c) return 1;
    }

    if (a > 20 || b > 20 || c > 20)
    {
        w(a, b, c);
        return w(20, 20, 20);
    }

    if (a < b && b < c)
    {
        w(a, b, c);
        return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    }

    return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}