#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int h,w,flag1=0,flag2=0,flag3=0;
        float c;
        scanf("%d %f %d",&h,&c,&w);
        if(h>50){
            flag1=1;
        }
        if(c<0.7){
            flag2=1;
        }
        if(w>5600){
            flag3=1;
        }
        if(flag1==1&&flag2==1&&flag3==1){
            printf("10\n");
        }
        else if(flag1==1&&flag2==1){
            printf("9\n");
        }
        else if(flag3==1&&flag2==1){
            printf("8\n");
        }
        else if(flag1==1&&flag3==1){
            printf("7\n");
        }
        else if(flag1==0&&flag2==0&&flag3==0){
            printf("5\n");
        }
        else{
            printf("6\n");
        }
    }
}
