#include <stdio.h>
int check(int *,int *,int);
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int size,p,q;
	    scanf("%d",&size);
	    int f[size],g[size],frev[size];
	    for(int i=0;i<size;i++){
	        scanf("%d",&f[i]);
	        frev[size-i-1]=f[i];
	    }
	    for(int j=0;j<size;j++){
	        scanf("%d",&g[j]);
	    }
	    p=check(f,g,size);
	    q=check(frev,g,size);
	    if(p==1&&q==1){
	        printf("both\n");
	    }
	    else if(p==1){
	        printf("front\n");
	    }
	    else if(q==1){
	        printf("back\n");
	    }
	    else{
	        printf("none\n");
	    }
	}
	return 0;
}
int check(int *f,int *g,int size){
    int flag = 1;
    for(int i=0;i<size;i++){
        if(f[i]>g[i]){
            flag=0;
        }
    }
    return flag;
}
