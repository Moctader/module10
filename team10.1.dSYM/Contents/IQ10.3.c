#include<stdio.h>

int main()
{
    int ara[105];
    int n, i;
    scanf("%d", &n);

    int ec=0, oc=0, ans;

    for (i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (i=0; i<n; i++)
    {
        if (ara[i]%2==0)
        {
            ec++;
        }
        else
            oc++;
        
    }
    
    //printf("evens= %d, odd= %d",ec, oc);
    if(ec==1)
    {
        for (i=0; i<n; i++)
        {
            if (ara[i]%2==0)
            {
                ans= i;
            }
        }
    }
    else
    {
        for (i=0; i<n; i++)
        {
            if (ara[i]%2==1)
            {
                ans= i;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}