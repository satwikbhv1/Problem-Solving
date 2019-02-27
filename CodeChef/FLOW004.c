#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1;i<=t;i++){
		int n,a,b,c;
		scanf("%d",&n);
		a = n % 10;
		while(n>0){
			b = n % 10;
			n = n / 10;
		}
		printf("%d\n",a+b);
	}	
	return 0;
}

