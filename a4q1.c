#include<stdio.h>
int main(){
    int option, left1, left2, right1, right2, result1, result2, result3;

    while(scanf("%d%d%d%d%d",&option, &left1, &left2, &right1, &right2)==5){
        if(option == 1){

           result1 = 0;
           result2 = left1 + right1;
           result3 = left2 + right2;
           printf("%d %d %d\n",result1, result2, result3);

        }else if(option == 2){

           result1 = 0;
           result2 = left1 - right1;
           result3 = left2 - right2;
           printf("%d %d %d\n",result1, result2, result3);

        }else if(option == 3){

           result1 = left1 * right1;
           result2 = (left1 * right2 + left2 * right1 );
           result3 = left2 * right2;
           printf("%d %d %d\n",result1, result2, result3);

        }else
            printf("Invalid operation.\n");
    }
    return 0;
}
