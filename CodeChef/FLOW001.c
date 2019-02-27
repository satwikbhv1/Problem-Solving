#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<=t-1;i++){
		int a,b,sum=0;
		scanf("%d %d",&a,&b);
		sum = a + b;
		printf("%d\n",sum);
	}
	return 0;
}
