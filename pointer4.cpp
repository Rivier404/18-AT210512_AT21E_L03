#include <stdio.h>
#include <stdlib.h>
void swap(float *a, float *b){
	float temp =*a;
	*a=*b;
	*b=temp;
}
void sort(float *a,signed int n){
	for (int i=0;i<n;i++){
			float *min =a +i;
		for (int j=i+1;j<n;j++){
		    if(*(a+j)<*min){
		    	min=(a+j);
			}
		}
	swap(min,a+i);
	}
}

int main (){
	int n;
	printf("Nhap so phan tu can sap xep: ");
	scanf("%d",&n);
	if(n<1)
	printf("????");
	return 0;
float *a=(float*) malloc(n*sizeof(float));	
    printf("Nhap cac phan tu trong mang: ");
    for (int i=0;i<n;i++){
    	scanf("%f",a+i);
	}
	sort(a,n);
	for (int i=0;i<n;i++){
		printf("%.2f ",*(a+i));
	}
	printf("\n");
	free(a);
}