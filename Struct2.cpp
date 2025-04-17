#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Sv {
	char Ho_ten [30];
	int Tuoi;
	float Diem_TB;
	struct Sv *next;
} Sv;
Sv* HEAD=NULL;
Sv* create(char* Ho_ten,int Tuoi,float Diem_TB){
	Sv* sv = (Sv*)malloc(sizeof(Sv));
	strcpy(sv->Ho_ten,Ho_ten);
	sv->Tuoi=Tuoi;
	sv->Diem_TB=Diem_TB;
	sv->next=NULL;
	return sv;
}
void in(){
	Sv* dau=HEAD;
	int stt=1;
	printf("\n%-5s %-20s %-15s %10s\n","STT","Ho ten","Tuoi","Diem TB");
	while(dau){
		printf("\n%-5d %-20s %-15d %10f\n",stt++,dau->Ho_ten,dau->Tuoi,dau->Diem_TB);
		dau=dau->next;
	}
}
void them(char* Ho_ten, int Tuoi, float Diem_TB) {
    Sv* sv = create(Ho_ten, Tuoi, Diem_TB);
    if (HEAD == NULL) {
        HEAD = sv;
    } else {
        Sv* temp = HEAD;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = sv;
    }
}

void chen(){
	char target[30];
	char ten[30];
	int tuoi;
	float diem;
	printf("Nhap ten sinh vien muon chen truoc: ");
	scanf("%[^\n]",target);
	getchar();
	target[strcspn(target, "\n")] = 0;
	printf("Nhap ten sinh vien moi: ");
	scanf("%[^\n]",ten);
	getchar();
	printf("Nhap tuoi: ");
	scanf("%d",&tuoi);
	printf("Nhap diem TB: ");
	scanf("%f",&diem);
	Sv *sv=create(ten,tuoi,diem);
	if(HEAD && strcmp(HEAD->Ho_ten,target)==0){
		sv->next=HEAD;
		HEAD=sv;
	}
	 Sv *prev = HEAD;
    while (prev && prev->next && strcmp(prev->next->Ho_ten, target) != 0) {
        prev = prev->next;
    }

    if (prev && prev->next) {
        sv->next = prev->next;
        prev->next = sv;
    } else {
        printf("Khong tim thay sinh vien co ten '%s'\n", target);
        free(sv);
    }
}
void xoa(){
	char target[30];
	printf("Nhap ten sinh vien can xoa: ");
    scanf("%[^\n]",target);
    getchar();
	if(HEAD==NULL){
		printf("Danh sach rong");
		return;
	} 
	if(strcmp(HEAD->Ho_ten,target)==0){
		Sv*temp=HEAD;
		HEAD=HEAD->next;
		free(temp);
		printf("Da xoa sinh vien '%s'",target);
		return;
	}
	Sv *prev=HEAD;
	while (prev->next&&strcmp(prev->next->Ho_ten,target)!=0){
		prev=prev->next;
	}
	if(prev->next){
		Sv*temp=prev->next;
		prev->next=temp->next;
		free(temp);
		printf("Da xoa sinh vien '%s'.\n", target);
    } else {
        printf("Khong tim thay sinh vien'%s'\n", target);
    }
	}
int main(){
    int choise;
    char ten[50];
    int tuoi;
    float dtb;
    while (true) {
        printf("\n===== MENU =====\n");
        printf("0. Them sinh vien\n");
        printf("1. Chen sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. In danh sach\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choise);
        switch (choise) {
        	case 0:
        		printf("Nhap ten: ");
                scanf(" %[^\n]", ten); getchar();
                printf("Nhap tuoi: ");
                scanf("%d", &tuoi);
                printf("Nhap diem TB: ");
                scanf("%f", &dtb);
        		them(ten,tuoi,dtb);
        		break;
            case 1:
                chen();
                break;
            case 2:
                xoa();
                break;
            case 3:
                in();
                break;
            case 4:
                return 0;
            default:
                printf("?????");
        }
    }
}
	
