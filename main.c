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

int main(int argc, char **argv)
{
		char bar[] = "\n-----------------------------\n";
		printf("%s         FT_ATOI\n",bar);
		printf("Fonction ft_atoi(%s) : %d \nFonction atoi(%s) : %d", argv[1], ft_atoi(argv[1]), argv[1], atoi(argv[1]));
		printf("%s", bar);
	return (0);
}
