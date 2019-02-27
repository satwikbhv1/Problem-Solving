#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    double a,b;
	    double c;
	    scanf("%lf %lf",&a,&b);
	    c = a*b;
	    if(a>1000){
	        c*=0.9;
	    }
	    printf("%lf\n",c);
	}
	return 0;
}

