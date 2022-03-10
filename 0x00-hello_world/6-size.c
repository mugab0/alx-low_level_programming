#include<stdio.h>
/**
 *main -print the different size of data types result with printf function
 * Return: 0
 */
int main(void)
{
printf("Size of a char:%d byte(s)", sizeof(char));
printf("Size of int:%d byte", sizeof(int));
printf("Size of a long int:%d byte", sizeof(long int));
printf("Size of a long long int:%d byte", sizeof(long long int));
printf("Size of a float:%d byte", sizeof(float));
return (0);
}
