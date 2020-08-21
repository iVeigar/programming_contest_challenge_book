#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX_N = 100;
int n, a[MAX_N];

void read_input()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void solve() // O(n^3)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int len = a[i] + a[j] + a[k];
                int ma = max(a[i], max(a[j], a[k]));
                int rest = len - ma;
                if (ma < rest)
                {
                    ans = max(ans, len);
                }
            }
        }
    }
    printf("%d\n", ans);
}

void solve2() // O(nlogn)
{

    int ans = 0;
    sort(a, a + n);
    for (int i = n - 1; i >= 2; i--)
    {
        int rest = a[i - 2] + a[i - 1];
        if (rest > a[i])
        {
            ans = a[i] + rest;
            break;
        }
    }
    printf("%d\n", ans);
}

int main()
{
    read_input();
    solve();
    //solve2();
    return 0;
}