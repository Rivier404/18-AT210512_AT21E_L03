#include <stdio.h>
int main (){
	int a[10];
	printf("Nhap 10 phan tu vao mang: ");
	for (int i=0;i<10;i++){
		scanf("%d",a+i);
	}
	printf("Cac phan tu da nhap la: ");
	for(int i=0;i<10;i++){
		printf("%d ",*(a+i));
	}
}