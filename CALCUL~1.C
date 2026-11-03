#include <stdio.h>
#include <stdlib.h>
int main(void)
{
float num1, num2;
char op;
printf("Calculator\n");
printf("Enter num1: ");
scanf("%f", &num1);
printf("Enter num2: ");
scanf("%f", &num2);
printf("Enter operation +, -, *, /:");
scanf(" %c", &op);

switch (op)

{
case '+':
printf("%f\n", num1 + num2);
break;

case '-':
printf("%f\n", num1 - num2);
break;

case '*':
printf("%f\n", num1 * num2);
break;

case '/':
if (num2 == 0)
printf("Error: division by zero\n");
else
printf("%f\n", num1 / num2);
break;
}
getch();
return 0;
}