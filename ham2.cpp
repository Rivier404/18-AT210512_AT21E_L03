#include <stdio.h>
int dequy(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*dequy(n-1);
	}
}
int main(){
	int n;
	printf("Hay nhap n: ");
	scanf("%d",&n);
	dequy(n);
	printf("%d! = %d",n,dequy(n));
}