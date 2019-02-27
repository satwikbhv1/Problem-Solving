#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int c=(n+3)/2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(c > n){
                    c = 1;
                }
                printf("%d ",c);
                c++;
            }    
            c++;
            if(c>n+1){
                c=2;
            }
            printf("\n");
        }
    }
}
