#include<stdio.h>

int sum();
int square();
int difference();
unsigned long int The_sum_of_the_squares = 0, The_square_of_the_sum = 0, The_difference = 0;
unsigned long preSUM[1001], preSQUARE[1001];


int main()
{
	sum();
	printf("The sum of the squares is %d", The_sum_of_the_squares);
	square();
	printf("\nThe square of the sum is %d", The_square_of_the_sum);
	difference();
	printf("\nThe difference between the sum of the squares and the square of the sum is %d", The_difference);
	return 0;
}

int sum()
{
	for (int i = 1; i <= 100; i++)
	{
		preSUM[i] = i;
		The_sum_of_the_squares += (preSUM[i] * preSUM[i]);
	}
	return 0;
}

int square()
{
	for (int i = 1; i <= 100; i++)
	{
		preSQUARE[i] = i;
		The_square_of_the_sum += preSQUARE[i];
	}
	The_square_of_the_sum = (The_square_of_the_sum * The_square_of_the_sum);
	return 0;
}

int difference()
{
	The_difference = The_square_of_the_sum - The_sum_of_the_squares;
	return 0;
}