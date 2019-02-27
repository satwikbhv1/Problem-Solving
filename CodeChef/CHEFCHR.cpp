#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    for(int e=0;e<t;e++)
    {
        char s[500000+10];
        fgets(s,500000+10,stdin);
        //printf("%s",s);
        int count=0,flag_1,flag_2,flag_3,flag_4;
       // printf("%d\n",strlen(s));
        for(int i=0;i<strlen(s)-3;i++)
        {
            flag_1=0;
            flag_2=0;
            flag_3=0;
            flag_4=0;
            for(int j=i;j<=i+3;j++)
            {
              if((int)s[j]==99)
              {
                  flag_1=1;
                  
              }
              else if((int)s[j]==104)
              {
                  flag_2=1;
              }
              else if((int)s[j]==101)
              {
                  flag_3=1;
              }
              else if((int)s[j]==102)
              {
                  flag_4=1;
              }
            }
            if(flag_1==1&&flag_2==1&&flag_3==1&&flag_4==1)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("normal\n");
        }
        else
        {
            printf("lovely %d\n",count);
        }
    }
    return 0;
}
