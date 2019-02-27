#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n , m;
    scanf("%d %d",&n,&m);
    double min=99999;
    for(int i=0;i<n;i++){
        double a ,b ;
        double cost1;
        scanf("%lf %lf",&a,&b);
        cost1=a/b;
       // printf("%f\n",cost1);
        if(cost1<min){
            min = cost1;
        }
    }
    printf("%.8lf",m*min);
    
}

