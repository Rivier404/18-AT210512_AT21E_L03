#include<stdio.h>
int main (){
	int i,sum;
	int a[10];
	printf("nhap 10 so nguyen: ");
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++){
		 sum+=a[i];
	}
	printf("tong 10 so nguyen la: %d",sum);
}