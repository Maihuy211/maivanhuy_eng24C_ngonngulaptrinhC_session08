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
	printf("duong cheo phu trong ma tran la: \n");
	printf("%d\n",n[0][2]);
	printf("%d\n",n[1][1]);
	printf("%d\n",n[2][0]);
	int sum=0;
	sum=n[0][2]+n[1][1]+n[2][0];
	    printf("tong cac phan tu tren duong cheo phu cua ma tran la: %d",sum);
	return 0;
}
