#include<stdio.h>
int main(){
	float x,y;
	float *a=&x, *b=&y;
	printf("Nhap vao gia tri 2 so can hoan doi: ");
	scanf("%f%f",a,b);
	int temp = *a;
	*a=*b;
	*b=temp;
	printf("gia tri sau khi hoan doi la a=%.2f , b=%.2f",*a,*b);
	
}