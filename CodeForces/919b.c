#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int j){
        int count=0;
        while(j >0){
            count = count + (j%10);
            j = j/10;
    }
    return count;
}
int main(){
    int n, m=1, i=19;
    scanf("%d",&n);
    while(n != m){
        i= i + 9;
        while(sum(i) != 10){
            i+=9;
        }
        m+=1;
     }
     printf("%d",i);
    return 0;
}

