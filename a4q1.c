/*
* This program calculates the integer co-efficients of the given two polynomials
*/
#include<stdio.h>
int main(){
    //option 1 : Add, option 2 : Subtraction, option 3: Multiplication
    //(left1 * x + left2 ) option (right1 * x + right2)
    //result1: Second degree value, result2: first degree value, result3: zero degree value
    int option, left1, left2, right1, right2, result1, result2, result3;

    while(scanf("%d%d%d%d%d",&option, &left1, &left2, &right1, &right2)==5){
        if(option == 1){//Addition is done when option 1 is selected

           result1 = 0;//although there is no second degree for this equation, it must be set to zero according to question
           result2 = left1 + right1;
           result3 = left2 + right2;
           printf("%d %d %d\n",result1, result2, result3);

        }else if(option == 2){//Subtraction is done when option 2 is selected

           result1 = 0;//although there is no second degree for this equation, it must be set to zero according to question
           result2 = left1 - right1;
           result3 = left2 - right2;
           printf("%d %d %d\n",result1, result2, result3);

        }else if(option == 3){//similarly option 3 initiates multiplication

           result1 = left1 * right1;
           result2 = (left1 * right2 + left2 * right1 );
           result3 = left2 * right2;
           printf("%d %d %d\n",result1, result2, result3);

        }else
            printf("Invalid operation.\n");//this error message is shown when any numbers other than 1,2,3 is pressed
    }
    return 0;
}
