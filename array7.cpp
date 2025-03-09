#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	float*a=(float*) malloc(n*sizeof(float));
	if(n<0){
		printf("????");
		return 0;
	}
	printf("nhap cac phan tu trong mang: ");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);	
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				float temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}

		}
	for(i=0;i<n;i++){
			printf("%.1f ",a[i]);	
}
 free(a);   
}