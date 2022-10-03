#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *@argc: length of argv
 *@argv: number of argument
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
/*Declaring variables*/
int dY, total, change, aux;
int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

dY = total = change = aux = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

total = atoi(argv[1]); /*Covert str to int*/

if (total <= 0)
{
printf("0\n");
return (0);
}

/*Declaring While*/

while (coins[dY] != '\0')
{
if (total >= coins[dY])
{
aux = (total / coins[dY]);
change += aux;
total -= coins[dY] * aux;
}

dY++;

}

printf("%d\n", change);
return (0);
}
