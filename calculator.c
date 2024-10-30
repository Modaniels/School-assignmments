#include <stdio.h>
int main(){
    char operator;
    float num1, num2;
   
    printf("Enter an expression:(eg.,2+3) ");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch(operator)
        {case'+':
            printf("%.1f + %.1f = %.1f\n",num1, num2, num1+num2);
            break;
        case'-':
            printf("%.1f - %.1f = %.1f\n",num1, num2, num1-num2);
            break;
        case'*':
            printf("%.1f * %.1f = %.1f\n",num1, num2, num1*num2);
            break;
            case'/':
        if(num2!=0){
        printf("%.1f / %.1f = %.1f\n",num1, num2, num1/num2);
        }
        else{
        printf("Error! Division by zero");
        }break;
        default:
        printf("Error! operator is not correct");
        }
    return 0;

}