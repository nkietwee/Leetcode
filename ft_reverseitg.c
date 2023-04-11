/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverseitg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:01:30 by nkietwee          #+#    #+#             */
/*   Updated: 2022/11/14 10:36:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
/* int ft_countnumber(int number)
{
    int count;
    
    count = 0;
    if (number <= 0)
    {
        number = -number;
        count++;
    }
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
     return(count);
}*/
int reverse(int x)
{
    long long y;
    int symbol;
    
    y = 0;
    symbol = 1;
    if (x < 0)
    {
        symbol = -1;
        x = -x;
    }
    while (x > 0)
    {
        y = (y * 10) + (x % 10);
        x = x / 10;
    }
    return(y * symbol);
}

int main(void)
{
    printf("%d",reverse(120));
}