#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int q;
        double loss=0;
        scanf("%d",&q);
        while(q--){
            double price,amount,disc,k;
            scanf("%lf %lf %lf",&price,&amount,&disc);
            k = price ;
            price+=price*disc/100;
            price-=price*disc/100;
            loss+=(k-price)*amount;
        }
        printf("%lf\n",loss);
    }
}
