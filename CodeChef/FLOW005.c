#include<stdio.h>
int main(){	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n,a=0;
		scanf("%d",&n);
		while(n>=100){
		    a=a+(n/100);
		    n=n%100;
		}
	    while(n>=50){
		    a=a+(n/50);
		    n=n%50;
		}
		while(n>=10){
		    a=a+(n/10);
		    n=n%10;
		}
		while(n>=5){
		    a=a+(n/5);
		    n=n%5;
		}
		while(n>=2){
		    a=a+(n/2);
		    n=n%2;
		}
		while(n>=1){
		    a=a+(n/1);
		    n=n%1;
		}
		printf("%d\n",a);
	}
	return 0;
}

