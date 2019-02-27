#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1;i<=t;i++){
		int a , b, rem;
		scanf("%d %d",&a,&b);
		rem = a % b;
		printf("%d\n",rem);
	}
}
