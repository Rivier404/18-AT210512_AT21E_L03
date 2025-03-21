#include <stdio.h>
#include <stdlib.h>
int main (){
	int n;
	float *min,*max,*ptr;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if(n<=0) printf("????");
	return 0;
	float *a=(float*) malloc(n*sizeof(float));
	printf("Nhap cac phan tu trong mang: ");
	for (ptr=a;ptr<a+n;ptr++){
		scanf("%f",ptr);
	}
	min=max=a;
	for(ptr=a+1;ptr<a+n;ptr++){
		if(*ptr<*min){
			min=ptr;
	}
		if(*ptr>*max){
			max=ptr;
		}
	}
	printf("Gia tri nho nhat trong mang la: %.2f\n", *min);
	printf("Gia tri lon nhat trong mang la: %.2f", *max);
	free(a);
}