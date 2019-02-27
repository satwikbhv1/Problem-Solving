#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i = 0;i<t;i++){
		int n,a,sum = 0;
		scanf("%d",&n);
		while(n>0){
			a = n % 10;
			n = n / 10;
			sum += a;
		}
		printf("%d\n",sum);
	}
	return 0;
}

