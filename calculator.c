#include <stdio.h>

int main()
{
char sign;
int first,second;
printf("Enter the Operator ( + , - , * , / ):");
scanf("%c",&sign);
printf("Enter the Numbers:");
scanf("%d %d",&first,&second);
switch(sign){
case '+':
printf("%d + %d = %d",first,second,first+second);
break;
case '-':
printf("%d - %d = %d",first,second,first-second);
break;
case '*':
printf("%d * %d = %d",first,second,first*second);
break;
case '/':
printf("%d / %d = %d",first,second,first/second);
break;
default:
printf("Operator not found");
}
    return 0;
}
