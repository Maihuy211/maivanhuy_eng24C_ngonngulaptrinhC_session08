#include<stdio.h>
int main(){
	int n[3][3]={{3,8,5},{5,1,3},{5,3,6}};
    int i,j;
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d",n[i][j]);
			}
	    printf("\n");
	}
	int sum=0;
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	    sum=sum+n[i][j];
	    } 
	}
	sum=sum-n[1][1];
	printf("tong cac phan tu tren duong bien cua ma tran la: %d",sum);
	return 0;
}
