#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,m,n,p;
	printf("nhap so hang ma tran 1: ");
	scanf("%d",&m);
	printf("nhap so cot ma tran 1 (so hang ma tran 2): ");
	scanf("%d",&n);
	printf("nhap so cot ma tran 2: ");
	scanf("%d",&p);
    int **a = (int **)malloc(m * sizeof(int *));
    int **b = (int **)malloc(n * sizeof(int *));
    int **c = (int **)malloc(m * sizeof(int *));
    for (i=0;i<m;i++) {
        a[i] = (int *)malloc(n * sizeof(int)); 
        c[i] = (int *)malloc(p * sizeof(int));  
    }
    for (i=0;i<n;i++) {
        b[i] = (int *)malloc(p * sizeof(int));  
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
	for (int i=0;i<m;i++) {  
    for (int j=0;j<p;j++) {  
        c[i][j]=0; 
        for (int k=0;k<n;k++) {  
            c[i][j]+=a[i][k]*b[k][j];  
        }
    }
}
         printf("Tich 2 ma tran la: \n");
    for (int i=0;i<m;i++) {
        for (int j=0;j<p;j++) {
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<m;i++) {
        free(a[i]); 
        free(c[i]); 
    }
    for (i=0;i<n;i++) {
        free(b[i]); 
    }
    free(a);
    free(b);
    free(c);
}
