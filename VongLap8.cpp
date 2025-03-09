#include <stdio.h>
int main(){
	int i,n,x=1;
	printf("nhap gia tri cua n: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		x=x*i;
	}
	printf("%d! = %d",n,x);
}