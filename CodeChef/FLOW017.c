#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int flag1=0,flag2=0,flag3=0;
	    if(a>b){
	        flag1=1;
	    }
	    if(c>a){
	        flag2=1;
	    }
	    if(b>c){
	        flag3=1;
	    }
	    if((flag1==1&&flag2==1)||(flag1==0&&flag2==0)){
	        printf("%d\n",a);   
	    }
	    if((flag1==0&&flag3==0)||(flag1==1&&flag3==1)){
	        printf("%d\n",b);   
	    }
	    if((flag2==0&&flag3==0)||(flag3==1&&flag2==1)){
	        printf("%d\n",c);
	    }
	}
	return 0;
}


