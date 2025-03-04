#include <stdio.h>
int main (){
	int nam, thang;
	scanf("%d%d",&nam,&thang);
	if (thang <1 || thang >12) {
		printf("???");
		return 0;
	}
	  if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
		printf("Thang 2 nam %d co 29 ngay",nam);
		return 0;
	}
		else {
			printf("Thang 2 nam %d co 28 ngay",nam);
			return 0;
		}
	}
	if ((thang <= 7 && thang % 2 == 1) || (thang >= 8 && thang % 2 == 0)){
	
		printf("Thang %d nam %d co 31 ngay",thang,nam);
	}
	else {
		printf("Thang %d nam %d co 30 ngay",thang,nam);
	}
	}
