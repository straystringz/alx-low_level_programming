#include	<stdlib.h>
#include	<time.h>
#include	<stdio.h>
/**
 *	main	-	this is the main function
 *
 *	Return:	this returns (0) if correct
 */
int main(void)
{
	int n;
	srand(time(0));

	n	=	rand()	-	RAND_MAX	/	2;
	if(n>0)
	{
