#include <stdio.h>

int main() {
    long n,t;
    long num[1000000]={0};
    long zl;
    long X1,X2,X,Y;
    long long sum;
    scanf("%ld %ld",&n,&t);
    for(long i=0;i<n;i++)
        scanf("%ld",&num[i]);

    for(long i_t=0;i_t<t;i_t++)
    {
        scanf("%ld",&zl);
        if(zl==1)
        {
            scanf("%ld %ld",&X,&Y);
            num[X-1]+=Y;
        }
        else if(zl==2)
        {
            scanf("%ld %ld %ld",&X1,&X2,&Y);
            for(long k=X1;k<=X2;k++)
                num[k-1]+=Y;
        }
        else if(zl==3)
        {
            scanf("%ld",&X);
            printf("%ld\n",num[X-1]);
        }
        else if(zl==4)
        {
            scanf("%ld %ld",&X1,&X2);
            sum=0;
            for(long k=X1;k<=X2;k++)
                sum+=num[k-1];
            printf("%lld\n",sum);
        }
    }
    return 0;
}
