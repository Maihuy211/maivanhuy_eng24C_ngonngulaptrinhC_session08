# include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	int i,n,ton_tai=0;
	printf("nhap mot phan tu: ");
	scanf("%d",&n);
	for(i=0;i<size;i++){
	    if(arr[i]==n){
	    	printf("vi tri phan tu trong mang la: %d",i);
	    	ton_tai=1;
	    	}
	}if(!ton_tai){
	     printf("phan tu khong ton tai trong mang");
		}
  return 0;
	}
