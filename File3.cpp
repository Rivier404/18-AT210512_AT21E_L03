#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef	struct{
    int Don_Gia,Thanh_Tien,So_Luong;
    char Ten_Hang[100];
	} hang;
	void swap( hang *a, hang *b){
		hang temp=*a;
		*a=*b;
		*b=temp;
	}
int main (){
	int n;
	hang ds[500];
	printf("Nhap vao so luong mat hang: \n");
    scanf("%d",&n);
    for (int i=0;i<n;++i){
    	printf("Ten hang: \n");
    	scanf("%s",ds[i].Ten_Hang);
    	printf("Don gia: \n");
    	scanf("%d",&ds[i].Don_Gia);
    	printf("So luong: \n");
    	scanf("%d",&ds[i].So_Luong);
    	ds[i].Thanh_Tien=ds[i].Don_Gia*ds[i].So_Luong;
	}
	FILE *f=fopen("SO_LIEU.c","wb");
	if(f==NULL){
	printf("Khong mo duoc tep");
	return 1;
    }
    fwrite(ds,sizeof(hang),n,f);
	fclose(f);
	f = fopen("SO_LIEU.c", "rb");
    if (f == NULL) {
        printf("Khong mo duoc tep de doc");
        return 1;
    }
    fread(ds, sizeof(hang), n, f);
    fclose(f);
    printf("\n%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    int tong = 0;
    for (int i = 0; i < n; ++i) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].Ten_Hang, ds[i].Don_Gia, ds[i].So_Luong, ds[i].Thanh_Tien);
        tong += ds[i].Thanh_Tien;
    }
    printf("%-5s %-15s %-10s %-10s %-10d\n", "", "", "", "Tong cong", tong);
    return 0;
}