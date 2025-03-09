#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,sum=0;
	float x;
	printf("nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	if(n<=0){
		printf("????");
		return 0;
	}
	float*a =(float*)malloc(n*sizeof(float));
	printf("nhap vao cac phan tu trong mang: ");
	for (i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("nhap vao phan tu x: ");
	scanf("%f",&x);
	for (i=0;i<n;i++){
		if(x==a[i]){
		sum++;
	}
	}
	printf("x xuat hien %d lan",sum);
	free(a);
}