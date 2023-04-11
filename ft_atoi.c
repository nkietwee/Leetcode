/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:43:45 by nkietwee          #+#    #+#             */
/*   Updated: 2022/11/14 12:51:50 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/* static void	ft_check(const char *str, int *i, int *negative)
{
	while ((str[*i] && str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		(*i)++;
	if (str[*i] && (str[*i] == '+'))
		*i += 1;
	else if (str[*i] && (str[*i] == '-'))
	{
		*negative = -1;
		*i += 1;
	}
} */
static void	ft_check(const char *str, int i, int negative)
{
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		(i)++;
	if (str[i] && (str[i] == '+'))
		i += 1;
	else if (str[i] && (str[i] == '-'))
	{
		negative = -1;
		i += 1;
	}
}

int	myAtoi(const char *str)
{
	long long	nb;
	int			negative;
	int			i;

	i = 4;
	nb = 0;
	negative = 1;
	ft_check(str, i, negative);
	// ft_check(str, &i, &negative);
    printf("i = %d\n",i);
	while (str[i] && ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i++] - '0');
        if (nb >= 2147483648 && negative == -1)
			return (-2147483648);
        if (nb >= 2147483647 && negative == 1)
            return (2147483647);
	}
	return (nb * negative);
}
int main(void)
{
    printf("%d",myAtoi("   1123"));
}