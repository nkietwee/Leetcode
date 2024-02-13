#include <stdio.h>
int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}
char* firstPalindrome(char** words, int wordsSize)
{
	int	i;
	int	j;
	int k;
	int	len;
	int	res;

	i = 0;
	res = 0;
	while (i < wordsSize)
	{
		j = 0;
		if(words[i])
		{
			len = ft_strlen(words[i]);
            if (len == 1)
                return(words[i]);
			k = len  - 1;
			j = 0;
			while (j < len / 2 )
			{
				if (words[i][j] == words[i][k])
				{
					j++;
					k--;
					if (j == len / 2)
						res = 1;
				}
				else
					break;
			}
			if (res == 1)
				return(words[i]);
		}
		i++;
		if (i == wordsSize)
			return("");
	}
	return(0);
}
int main(int ac, char **av)
{
	char *str;
	str = firstPalindrome(av, ac);
	printf("str : %s\n", str);
}