#include <stdio.h>
void truonghop1(){
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	printf("mang co san la:\n");
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
void truonghop2(){
	 int arr[3][3];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d] = ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Mang vua nhap:\n");
    for (int i=0;i<3;i++) {
        for (int j = 0;j<3; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
	truonghop1();
	truonghop2();
}