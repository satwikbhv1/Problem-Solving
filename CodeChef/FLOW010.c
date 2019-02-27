#include<stdio.h>
int main(){	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    char g;
	    scanf("\n%c",&g);
	    if(g == 'B'||g == 'b'){
	        printf("BattleShip\n");
	    }
	    if(g == 'C'||g == 'c'){
	        printf("Cruiser\n");
	    }
	    if(g == 'D'||g == 'd'){
	        printf("Destroyer\n");
	    }
	    if(g == 'F'||g == 'f'){
	        printf("Frigate\n");
	    }
	    //printf("%d\n",i);
	}
	return 0;
}

