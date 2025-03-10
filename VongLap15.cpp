#include <stdio.h>
#include <math.h>
int main (){
	int n,A;
	float final;
	printf("Nhap so tien gui vao: ");
	scanf("%d",&A);
	if(A<=0){
		printf("ban het tien a???");
		return 0;
	}
	printf("Nhap so thang gui: ");
	if(n<=0){
		printf("the thi gui lam gi???");
		return 0;
	}
	scanf("%d",&n);
	final = A*pow(1.0045,n);
	printf("So tien nhan duoc sau %d thang la: %.2f",n,final);
}