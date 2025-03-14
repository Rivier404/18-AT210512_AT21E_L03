#include <stdio.h>
int giaithua (int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x=x*i;
	}
	return x;
	
}
int main (){
	int n;
	float sum=0;
	printf("hay nhap so n: ");
	scanf("%d",&n);
	if(n<=0){
		printf("?????");
		return 0;
	}
	for(int i=1;i<n;i++){
		sum=sum+1.0/giaithua(i);
	}
	printf("tong cua day la: %.3f",sum);
}