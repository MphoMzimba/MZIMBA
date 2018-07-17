/*####################################################
*						     *
 File Name : batchcalculator.c
* 						     *
 Creation Date : 17-07-2018
*						     *
 Last Modified : Tue 17 Jul 2018 23:50:50 SAST
* 						     *
 Create By : MphoMzimba				     
*						     *
 https://github.com/MphoMzimba/MZIMBA.git	     
*						     *
####################################################*/

#include <stdio.h>

int	batch(int a, int b)
{
	int i = a;
	int sum;
	int tmp;

	tmp = 0;
	while (i <= b)
	{
		sum = i * (i + 1) / 2;
		printf("Sum from %d to %d : %d\n", 1, i, sum);
		tmp = sum;
		i += a;
	}
	return (0);
}
int	main()
{
	int x;
	int z;

	printf("please enter range :");
	scanf("%d", &x);
	printf("please enter batch size :");
	scanf("%d", &z);
	batch(x, z);
	return (0);
}

