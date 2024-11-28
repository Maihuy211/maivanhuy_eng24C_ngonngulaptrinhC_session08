# include<stdio.h>
int main(){
	int n[]={1,2,3,4,5,6,7,8,9,10};
	int i,size=sizeof(n)/sizeof(int);
		printf("tung phan tu trong mang tu cuoi ve dau la: \n");
	for(i=size-1;i>=0;i--){
		printf("%d\n",n[i]);
		}
	return 0;
	}
