# include<stdio.h>
int main(){
	int n[3][3]={{1,3,4},{5,3,8},{0,4.6}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d",n[i][j]);
			}
	    printf("\n");
	}
	return 0;
	}		
