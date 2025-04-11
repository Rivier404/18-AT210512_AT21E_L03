#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    void nhap (int **a, int *n, int **b,int *m){
    	printf("Nhap bac cua da thuc P: ");
    	scanf("%d",n);
    	 *a=(int*) malloc(*n *sizeof (int ));
    	for (int i=0;i<=*n;i++){
    		printf("He so cua x^%d la: ",i);
    		scanf("%d",&(*a)[i]);
		}
		printf("Nhap bac cua da thuc Q: ");
    	scanf("%d",m);
    	*b=(int*) malloc(*m * sizeof(int));
    	for (int i=0;i<=*m;i++){
    		printf("He so cua x^%d la: ",i);
    		scanf("%d",&(*b)[i]);
		}
	}
	int in (int *a,int n){
		for (int i=n;i>=0;i--){
			 printf("%dx^%d", a[i], i);
            if (i != 0) printf(" + ");
		}
		printf("\n");
		return 0;
	}
    void tinhdathuc(int*a,int n,int *b,int m,float x) {
    int max=(n>m) ? n : m;
    int *tong=(int*)malloc((max+1)*sizeof(int));
    for (int i=0;i<=max;i++) {
        int hs_a=(i<=n) ? a[i] : 0;
        int hs_b=(i<=m) ? b[i] : 0;
        tong[i] = hs_a + hs_b;
    }
    printf("Tong P + Q la:\n");
    in(tong, max);
    float giatri = 0;
    for (int i=0;i<=max;i++) {
        giatri+=tong[i]*pow(x, i);
    }
    printf("Tong P(x) + Q(x) tai x = %.2f la: %.2f\n", x, giatri);
    free(tong);
}
int main (){
    int *a=NULL,*b=NULL;
	int m,n;
    float x;
    nhap(&a,&n,&b,&m);
    printf("Nhap gia tri cua x: \n");
    scanf("%f",&x);
    printf("Gia tri cua x la: %.2f \n",x);
    printf("He so cua P la: \n");
    in (a,n);
    printf("He so cua Q la: \n");
    in (b,m);
	tinhdathuc(a,n,b,m,x);
	free(a);
    free(b);
}