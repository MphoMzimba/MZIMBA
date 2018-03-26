/*####################################################
 *						     *
 File Name : full_pyramid.c
 * 						     *
 Creation Date : 20-03-2018
 *						     *
 Last Modified : Mon 26 Mar 2018 11:26:27 SAST
 * 						     *
 Create By : MphoMzimba				     
 *						     *
https://github.com/MphoMzimba/MZIMBA.git	     
 *						     *
####################################################*/

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int i; 
	int s;
	int r;
	int k;
	int z;
	int a;

	while (z < ac)
	{
		a = atoi(av[z]);
		r = a;
		z++;
	}

	k = 0;
	i = 1;
	while (i <= r)
	{
		k = 0;
		s = 1;
		while (s <= r - i)
		{
			printf(" ");
			++s;
		}
		while (k != 2 * i - 1)
		{
			printf("$");
			++k;
		}
		printf("\n");
		++i;

	}
	return (0);
}
