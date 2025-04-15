#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,m,n;
	printf("nhap so hang: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d",&n);
    int **a = (int **)malloc(m * sizeof(int *));
    int **b = (int **)malloc(m * sizeof(int *));
    int **sum = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) { 
    a[i] = (int *)malloc(n * sizeof(int)); 
    b[i] = (int *)malloc(n * sizeof(int));
    sum[i] = (int *)malloc(n*sizeof(int));
}
    printf("Nhap ma tran 1: ");
    for(int i=0;i<m;i++){
    	for (int j=0;j<n;j++){
    		printf("A[%d][%d]= ",i+1,j+1);
    		scanf("%d",&a[i][j]);
		}
	}   
    printf("Nhap ma tran 2: ");
     for(int i=0;i<m;i++){
    	for (int j=0;j<n;j++){
    		printf("B[%d][%d]= ",i+1,j+1);
    		scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			 sum[i][j]=a[i][j]+b[i][j];
		}
	}   
	FILE *f=fopen("Cong_MT.C", "w");
	if(f==NULL) {
		printf("Khong the doc file");
		return 1;
	}
	fprintf(f,"Tong 2 ma tran la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			fprintf(f,"%d ",sum[i][j]);
		}
		fprintf(f,"\n");
	}
	fclose(f);
		printf("Tong 2 ma tran la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	 for (int i = 0; i < m; i++) {
        free(a[i]);
        free(b[i]);
        free(sum[i]);
    }
    free(a);
    free(b);
    free(sum);
	 
}