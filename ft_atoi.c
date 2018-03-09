/*####################################################
 *						     *
 File Name : ft_atoi.c
 * 						     *
 Creation Date : 09-03-2018
 *						     *
 Last Modified : Fri 09 Mar 2018 02:48:06 SAST
 * 						     *
 Create By : MphoMzimba				     
 *						     *
 https://github.com/MphoMzimba/MZIMBA.git	     
 *						     *
####################################################*/

#include <stdlib.h>
#include <stdio.h>
int     ft_atoi(char *str)
{
	int     i;
	int     result;
	int     sign;

	i = 0;
	result = 0;
	sign = 1;
	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if(str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return(result * sign);
}
