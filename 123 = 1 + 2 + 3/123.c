// 123 = 1 + 2 + 3

// 看起來是藥用函數遞迴


#include <stdio.h>

int sum (int num){
    if(num == 0){
        return 0;
    }
    else{
        return (num%10) + sum(num/10);
    }
}




int main(){

    int num;
    scanf("%d",&num);

    int result = sum(num);

    printf("The sum of digits in %d is %d",num,result);

    return 0;
}