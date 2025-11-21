#include <stdio.h>
#include <stdlib.h>

void nhapSoNguyen(int *x){
    printf("Nhap lua chon: ");
    scanf("%d", x);
}

int main(){
    int luaChon;

    do{
        printf("_________________ MENU _________________\n");
        printf("1. Chuc nang tim tinh nguyen cua mot so\n");
        printf("2. Chuc nang tim UCLN va BCNN\n");
        printf("3. Chuc nang tinh tien quan Karaoke\n");
        printf("4. Chuc nang khac...\n");
        printf("6. Lai suat co dinh 5%%, thoi gian tra no 12 thang...\n");
        printf("8. Chuc nang khac...\n");
        printf("0. Exit\n");

        nhapSoNguyen(&luaChon);

        switch(luaChon){
            case 1:
                printf("Ban da chon chuc nang 1\n");
                // Xử lý case 1
                break;

            case 2:
                printf("Ban da chon chuc nang 2\n");
                // Xử lý case 2
                break;

            case 3:
                printf("Ban da chon chuc nang 3\n");
                // Xử lý case 3
                break;

            case 4:
                printf("Ban da chon chuc nang 4\n");
                // Xử lý case 4
                break;

            case 6:
                printf("Ban da chon chuc nang 6\n");
                // Xử lý case 6
                break;

            case 8:
                printf("Ban da chon chuc nang 8\n");
                // Xử lý case 8
                break;

            case 0:
                printf("\nSee you again!\n");
                goto ketthuc;

            default:
                printf("\nYou chose wrong!\n");
                break;
        }

        printf("\nPress any number to Menu / Press 0 to Exit: ");
        scanf("%d", &luaChon);

        if(luaChon == 0){
            printf("\nSee you again!\n");
            goto ketthuc;
        }

    } while(luaChon != 0);

ketthuc:
    return 0;
}
