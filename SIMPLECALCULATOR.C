#include <stdio.h>
int main() {
char op;
double first, second;
printf("Enter an operator (+, -, *, /): "); 
scanf("%c", &op);
printf("Enter two operands: ");
scanf("%lf %lf", &first, &second);
      switch (op){
            case '+':
               printf("%.1lf + %.11f = %.11f", first, second,first+second);
               break;
            case '-':
               printf("%.11f - %.11f = %.1lf", first, second,first-second);
               break;
            case '*':
               printf("%.1lf * %.1lf = %.1lf", first, second,first*second);
               break;
            case '/':
               printf("%.11f / %.11f = %.1lf", first, second,first/second);
               break;
            printf("Error! operator is not correct");
return 0;
}
}
