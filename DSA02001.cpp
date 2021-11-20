#include<stdio.h>

void slove()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n+5][n+5];

    for(j = 1; j <= n; j++)
    {
        scanf("%d", &a[1][j]);
    }
    int cot;
    cot = n - 1;

    for(i = 2; i <= n; i++)
    {
        for(j = 1; j <= cot; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        }
        cot--;
    }

    cot = n;

    for(i = 1; i <= n; i++)
    {
        printf("[");
        for(j = 1; j < cot; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("%d]", a[i][cot]);
        cot--;
        printf("\n");
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        slove();
    }

    return 0;
}