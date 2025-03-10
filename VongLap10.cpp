#include <stdio.h>
int main (){
	int a=0,b=1,n,sum;
	printf("nhap vao so thu n trong day: ");
	scanf("%d",&n);
	if(n<0){
		printf("?????");
		return 0;
	}
	if(n==0){
		printf("phan tu thu 0 trong day la: 0");
		return 0;
	}
	if(n==1){
		printf("phan tu thu 1 trong day la: 1");
		return 0;
	}
	for (int i=1;i<n;i++){
		sum=a+b;
		a=b;
		b=sum;
	}
	printf("phan tu thu %d trong day la %d",n,b);
}