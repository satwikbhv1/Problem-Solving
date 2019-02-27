#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    t = t+1;
    while(t--){
        char a[101];
        gets(a);
        int len;
        len=strlen(a)-2;
        if(strlen(a)>10){
            printf("%c%d%c\n",a[0],len,a[(strlen(a))-1]);
        }
        else{
            puts(a);
        }
    }
}
