#include <stdio.h>
int main (){
	int n,i;
	double sum=0;
	printf("nhap so n: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("tong day can tinh la: %f",sum);
}