#include <stdio.h>

void IfCode(int num);
void IfElseCode(int num);
void SwitchCode(int num);
void TrinaryOperatorCode(int num);

int main()
{
	// printf("Hello World!\n");
	int userNum;
	printf("Please enter an integer: ");
	scanf_s("%d", &userNum);
	IfCode(userNum);
	IfElseCode(userNum);
	SwitchCode(userNum);
	TrinaryOperatorCode(userNum);

	return 0;
}

void IfCode(int num)
{
	if (num == 1)
	{
		printf("The argument is 1\n");
	}

	return;
}

void IfElseCode(int num)
{
	if (num > 1)
	{
		printf("The argument is greater than 1\n");
	}
	else
	{
		printf("The argument is not greater than 1\n");
	}

	return;
}

void SwitchCode(int num)
{
	switch (num)
	{
	case 1:
		printf("The argument is 1\n");
		break;
	case 2:
		printf("The argument is 2\n");
		break;
	default:
		printf("The argument is not 1 or 2\n");
		break;
	}

	return;
}

void TrinaryOperatorCode(int num)
{
	num == 1 ? printf("The number is 1\n") : printf("The number is not 1\n");

	return;
}
