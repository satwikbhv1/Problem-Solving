#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int ps;
        float sal=0;
        scanf("%d",&ps);
        if(ps<1500){
            sal = 2 * ps;
        }
        else{
            sal=ps+0.98*ps+500;
        }
        printf("%f\n",sal);
    }
}
