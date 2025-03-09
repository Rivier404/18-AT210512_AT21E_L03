#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,n;
	printf("nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	if(n<=0){
		printf("?????");
		return 0;
	}
	float*a=(float*) malloc(n*sizeof(float));
	printf("nhap vao cac phan tu trong mang: ");
	for (i=0;i<n;i++){
		scanf("%f",&a[i]);
		if(a[i]<0){
			a[i]=0;
		}
	}
	for (i=0;i<n;i++){
		printf("%.2f ",a[i]);
	}
	free(a);
	
}