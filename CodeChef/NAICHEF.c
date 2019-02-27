#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,n;
        scanf("%d %d %d",&n,&a,&b);
        int arr[n];
        int counta=0,countb=0;
        for(int i = 0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==a)
            {
                counta ++;
            }
            if(arr[i]==b)
            {
                countb ++;
            }
        }
        float prod=counta*countb;
        float divi =prod/((float)n*(float)n);
        printf("%f\n",divi);
    }
}
