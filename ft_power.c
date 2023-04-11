/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:48:57 by nkietwee          #+#    #+#             */
/*   Updated: 2022/11/15 10:56:23 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
double myPow(double x, int n)
{
    double ans;
    int     count;
    
    count = 0;
    while (x > 0 && n > 0 && count == n - 1)
    {
        ans = x * myPow(x, n - 1);
        count++;
    }
    return(ans);

}

int     main(void)
{
        printf("%f",myPow(2 ,3));
    
}