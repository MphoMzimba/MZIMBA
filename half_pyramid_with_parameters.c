/*####################################################
*						     *
 File Name : half_pyramid.c
* 						     *
 Creation Date : 16-03-2018
*						     *
 Last Modified : Tue 20 Mar 2018 14:40:50 SAST
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
	int j;
	int r;
	int z;
	int a;
	
	i = 1;
	z = 0;
	while (z < ac)
	{
		a = atoi(av[z]);
		r = a;
		z++;
	}
	while (i <= r)
	{
		j = 1;
		while (j <= i)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
