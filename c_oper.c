// C Program to make a Simple Calculator using 
// switch-case statements

#include <stdio.h>
void main()
{
	int num1,num2,result,r=1;
	char operation ;
	printf("Enter the value of num1:");
	scanf("%d",&num1);
	printf("Enter the value of num2:");
	scanf("%d",&num2);
	printf("Enter the required operation to be done:");
	scanf("%c",&operation);
	scanf("%c",&operation);
	switch(operation){
		case '+':
			result = num1+num2;
			break;
		case '-':
			result = num1-num2;
			break;
		case '*':
			result = num1*num2;
			break;
		case '/':
			result = num1/num2;
			break;
		default:
			printf("Invalid operator");
			r = 0;

	}
	if (r==1)
	{
	printf("Result : %d",result);	
	}
}
