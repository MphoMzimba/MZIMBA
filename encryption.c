/*####################################################
 *						     *
 File Name : encryption.c
 * 						     *
 Creation Date : 08-03-2018
 *						     *
 Last Modified : Thu 08 Mar 2018 11:22:12 SAST
 * 						     *
 Create By : MphoMzimba				     
 *						     *
https://github.com/MphoMzimba/MZIMBA.git	     
 *						     *
####################################################*/

#include <unistd.h>

int	main(int c, char **v)
{
	int	i;
	char	b;

	if (c != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (v[1][i] != '\0')
	{
		if ((v[1][i] >= 'a' && v[1][i] <= 'z') || (v[1][i] >= 'A' && v[1][i] <= 'Z'))
		{
			if (v[1][i] >= 'a' && v[1][i] <= 'z')
			{
				if (v[1][i] >= 'a' && v[1][i] <= 'm')
					b = v[1][i] + 13;
				else
					b = v[1][i] - 13;
				write(1, &b, 1);
			}
			else
			{
				if (v[1][i] >= 'A' && v[1][i] <= 'M')
					b = v[1][i] + 13;
				else
					b = v[1][i] - 13;
				write(1, &b, 1);
			}
		}
		else
			write(1, &v[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
