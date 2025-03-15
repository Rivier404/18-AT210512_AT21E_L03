#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n,i;
	printf("nhap lan luot so hang va cot cua ma tran: ");
	scanf("%d%d",&m,&n);
	int **a=(int**) malloc(m*sizeof(int*));
	for(int i=0;i<m;i++){
		a[i]=(int*)malloc(n*sizeof(int));
	}
	int h1=0,h2=m-1,c1=0,c2=n-1;
    int count =1;
    while(h1<=h2 && c1<=c2){
        for(int i=c1;i<=c2;i++){
        	a[h1][i]=count;
        	count++;
		}
		h1++;	
		for(int i=h1;i<=h2;i++){
			a[i][c2]=count;
			count++;
		}
		c2--;
	    if(h1<=h2){
			for(int i=c2;i>=c1;i--){
			a[h2][i]=count;
			count++;
		}
		h2--;
	}
			if(c1<=c2){
			for(int i=h2;i>=h1;i--){
			a[i][c1]=count;
			count++;
		}
		c1++;
		}
			
		}
		
	for (int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
for (int i=0;i<m;i++){
	free(a[i]);
}
free(a);
	
	}
    
