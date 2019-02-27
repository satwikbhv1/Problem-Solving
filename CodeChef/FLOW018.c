#include<stdio.h>
int main(){	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int num,fact=1;
		scanf("%d",&num);
		for(int j=num;j>=2;j--){
		    fact*=j;
		}
		printf("%d\n",fact);
	}
	return 0;
}

