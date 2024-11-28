# include<stdio.h>
int main(){
	int n[2][3]={{5,7,4},{3,1,2}};
	int i,j;
	int max=n[0][0];
	for(i=0;i<2;i++){
	    for(j=0;j<3;j++){
	   	    if(n[i][j]>max){
	   	    	max=n[i][j];
			}
	   	}
	}
	   	printf("phan tu lon nhat trong mang la: %d",max);
		return 0;
	}
