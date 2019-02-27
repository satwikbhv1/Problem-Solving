#include<stdio.h>
long int gcd(long,long);
int main(){	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        long  a,b,c,d,prod,hcf,lcm;
        scanf("%ld %ld",&a,&b);
        if(a>b){
            c=a;
            d=b;
        }  
        else{
            c=b;
            d=a;
        }
        prod = a * b; 
        hcf=gcd(c,d);
        lcm=prod / hcf;
        printf("%ld %ld\n",hcf,lcm);
	}
	return 0;
}
long int gcd(long a,long b) {
    if(a%b==0){
        return b;
    }
    else {
        return gcd(b,a%b);
    }
}
