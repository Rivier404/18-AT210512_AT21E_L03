#include<stdio.h>
int main (){
	int i,a,sum=0;
	printf("nhap vao so nguyen a: ");
	scanf("%d",&a);
	for ( i=1;i<=a;i++){
		if(a%i==0){
			sum+=i;
		}
	}
	if(2*a==sum){
		printf("a la so hoan hao");
	} else {
		printf("a khong la so hoan hao");
	}
}