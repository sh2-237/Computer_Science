// 用數字建立金字塔


// 函數名稱來自老師ppt
#include <stdio.h>

// 初始版本，思考用

/*
void print_Pyramid(int num){
    int n = 1;
    for(int i = 1; i<=num;i++){
        for(int j = num ; j >i;j-- ){
            printf(" ");
        }
        for(int k = 1; k <= i ;k++){
            printf("%d ", n);
        }
        n++;
        printf("\n");
    }
}
*/

// 雙函數版本

void print_sp(int i, int n){
    for(int sp = 0; sp < n - i; sp++){
        printf(" ");
    }
}


void print_num(int n){
    for(int i = 0; i<n;i++){
        printf("%d ", n);
    }
    printf("\n");

}

int main(){
    int row = 6;

    // print_Pyramid(row);

    for(int i = 1;i<=row;i++){
        print_sp(i,row);
        print_num(i);
    }
    return 0;
}