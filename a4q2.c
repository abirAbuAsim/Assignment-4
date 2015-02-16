/*
* This program computes the numeric root of a given nonnegative integer x.
*/
#include<stdio.h>
/*
*this method calculates the sum of a given digit fulfilling the conditions in ques.
*@returns the sum only if the sum is less than 10
*/
int sum(int num){
     int s = 0, remainder;

     while(num != 0){

                remainder = num % 10;
                s = s + remainder;
                num = num / 10;

            }

    if(s > 10){
        sum(s);

    }
    if(s < 10 )
        return s;

}

int main(){
    int x, y ;

    while(scanf("%d",&x)==1){

        if(x < 0 )// if the number is negative outputs the following message
            printf("The input number must be nonnegative.\n");

        else if(x < 10)//if the number is less than 10 then no need to sum it just output the given number
            printf("%d\n", x);

        else{// otherwise calculate the sum of digits

            y  = sum(x);//calling the sum() method wiht given input and assigining the value to y
            printf("%d\n",y);

        }

    }

    return 0;
}
