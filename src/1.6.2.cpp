#include <cstdio>
#include <algorithm>
using namespace std;
const int MAX_N = 1000000;
int L, n;
int x[MAX_N];

void read_input()
{
    scanf("%d %d", &L, &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
}

void solve()
{
    int minT = 0, maxT = 0;
    for (int i = 0; i < n; i++)
    {
        minT = max(minT, min(x[i], L - x[i]));
        maxT = max(maxT, max(x[i], L - x[i]));
    }
    printf("%d %d\n", minT, maxT);
}

int main()
{
    read_input();
    solve();
    return 0;
}