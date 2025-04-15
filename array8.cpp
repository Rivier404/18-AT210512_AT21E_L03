#include <stdio.h>
#include <stdlib.h>
void Nhapmang(int a[],int n){
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void Inmang(int a[], int n ){
	for (int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}
void Ghepmang(int a[], int b[],int c[],int na, int nb){
	int i,j,k;
	for(i=0,j=0;i<na&&j<nb;)
	if(a[i]<b[j]){
		c[k]=a[i];
		i++;
		k++;
	}
	else{
		c[k]=b[j];
		j++;
		k++;
	}
	while(i<na){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<nb){
		c[k]=b[j];
		j++;
		k++;
	}
	
}
int main(){
	int n,m;
	printf("Nhap do dai mang A: ");
	scanf("%d",&n);
	int* a=(int*) malloc(n*sizeof(int));
	printf("Nhap cac phan tu trong mang A: ");
	Nhapmang(a,n);
	printf("Nhap do dai mang B: ");
	scanf("%d",&m);
	int* b=(int*) malloc(m*sizeof(int));
	printf("Nhap phan tu trong mang B: ");
	Nhapmang(b,m);
	int *c=(int*) malloc((n+m)*sizeof(int));
	Ghepmang(a,b,c,n,m);
	printf("Mang sau khi sap xep la: ");
	Inmang(c,n+m);
	free(a);
	free(b);
	free(c);
	return 0;
}