#include<stdio.h>
int main(){	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n,a,flag=0;
		scanf("%d",&n);
		while(n>0){
			a = n % 10;
			n = n / 10;
			if(a != 0){
				flag = 1;
	        	}
	        	if(flag == 1){
				printf("%d",a);
			}
		}
		printf("\n");
	}
	return 0;
}

