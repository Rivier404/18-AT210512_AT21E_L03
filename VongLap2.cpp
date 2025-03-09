#include<stdio.h>
int main(){
	int i,n,a=0;
	printf("nhap 1 so duong bat ky: ");
	scanf("%d",&n);
	if(n<=1){
		printf("khong phai so nguyen to");
	}
	for(i=2;i<n;i++){
	if(n%i==0){
	a=1;
	break;
	}
	}
	if(a==1){
		printf("khong phai so nguyen to");
	} else {
		printf("la so nguyen to");
	}
}