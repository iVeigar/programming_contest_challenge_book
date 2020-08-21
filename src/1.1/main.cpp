#include <cstdio>
const int MAX_N = 50;
int n, m, k[MAX_N];

void read_input()
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
}

void solve()
{
    bool f = false;
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
                for (int d = 0; d < n; d++)
                {
                    if (k[a] + k[b] + k[c] + k[d] == m)
                    {
                        f = true;
                    }
                }
            }
        }
    }
    if (f)
        puts("Yes");
    else
        puts("No");
}

int main()
{
    read_input();
    solve();
    return 0;
}
