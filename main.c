/*                 _         _            _   
 *                (_)       | |          | |  
 * _ __ ___   __ _ _ _ __   | |_ ___  ___| |_ 
 * | '_ ` _ \ / _` | | '_ \  | __/ _ \/ __| __|
 * | | | | | | (_| | | | | | | ||  __/\__ \ |_ 
 * |_| |_| |_|\__,_|_|_| |_|  \__\___||___/\__|
 * llopez
 */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s1[14] = "000000000";
	char s2[] = "111";
	printf("resultat: %s \n taille : %d", ft_strcat(s1, s2), (int)ft_strlen(s1));
	return (0);
}
