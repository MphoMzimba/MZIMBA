/*####################################################
*						     *
 File Name : half_pyramid.c
* 						     *
 Creation Date : 16-03-2018
*						     *
 Last Modified : Mon 19 Mar 2018 23:59:19 SAST
* 						     *
 Create By : MphoMzimba				     
*						     *
 https://github.com/MphoMzimba/MZIMBA.git	     
*						     *
####################################################*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i;
	int j;
	int r;
	
	printf("Please enter a number between 0 and 50\n");
	scanf("%d", &r);
	i = 1;
	while (i <= r)
	{
		j = 1;
		while (j <= i)
		{
			printf("%d", j);
			++j;
		}
		printf("\n");
		++i;
	}
	return (0);
}
