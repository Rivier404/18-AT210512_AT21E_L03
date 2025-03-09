#include <stdio.h>
int main (){
	int n,i;
	printf("nhap mot so nguyen bat ky: ");
	scanf("%d",&n);
	printf("cac uoc cua no la: ");
	for (i=1;i<=n;i++){
		if (n%i==0){
			printf("%d ",i);
		}
	}
}