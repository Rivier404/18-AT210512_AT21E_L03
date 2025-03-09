#include<stdio.h>
#include<stdlib.h>
int main (){
	int n,i;
	int sum=0,am=0,duong=0;
printf("nhap vao so phan tu cua mang: ");
scanf("%d",&n);
if(n<=0){
	printf("????");
	return 0;
}
int *ptr =(int*)malloc(n*sizeof(int));
printf("nhao vao cac phan tu trong mang:");
	for ( i=0; i<n;i++){
		scanf("%d",&ptr[i]);
	    sum+=ptr[i];
	      if(ptr[i]<0){
     	am+=ptr[i];
	 }   
	 if(ptr[i]>0){
	 	duong+=ptr[i];
	 }
	}
	if (n>1){	
	printf("tong gia tri cac phan tu trong mang la: %d\n",sum);
}   else {
	printf("tong gia tri cac phan tu trong mang la: %d\n",ptr[0]);
	return 0;
}
	 printf("tong cac gia tri am trong mang la: %d\n",am);
	 printf("tong cac gia tri duong trong mang la: %d\n",duong);
	 printf("trung binh cong cac phan tu trong mang la: %.2f\n",(double)sum/n);
	 printf("trung binh cong cac phan tu am trong mang la: %.2f\n",(double)am/n);
	 printf("trung binh cong cac phan tu duong trong mang la: %.2f\n",(double)duong/n);
	 
    free(ptr);
}