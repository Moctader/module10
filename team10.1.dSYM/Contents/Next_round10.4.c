#include<stdio.h>

int main()
{
    int i, n, k;
    scanf("%d %d", &n, &k);
    int ara[55];

    for ( i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int ans = 0;

    for ( i=1; i<=n; i++)
    {
        if (ara[i]>=ara[k] && ara[k]>0)
        {
            ans++;
        }
        
    }
    printf("%d", ans);

    

    return 0;
}