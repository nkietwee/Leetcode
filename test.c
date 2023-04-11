/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:50:13 by nkietwee          #+#    #+#             */
/*   Updated: 2022/11/21 13:15:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int reverse(long long x)
{
    int tmp;
    int result;

    tmp = x;
    result = 0;
    if (x < 0)
        return (0);
    if (x == 0)
        return (1);
    while (x > 0)
    {
        result = (result * 10 ) + (x % 10); 
        x = x / 10;
    }
    if (tmp == result)
        return (1);
    return (0);


}

int main (void)
{
    printf("1 = %d\n",reverse(123));
    printf("2 = %d\n",reverse(-123));
    printf("3 = %d",reverse(121));

}







/* int reverse(long long x)
{
    int tmp;
    int result;

    tmp = x;
    result = 0;
    if (x < 0)
        return (0);
    if (x == 0)
        return (1);
    while (x > 0)
    {
        result = (result * 10) + (x % 10);
        x = x / 10;
    }
    if (tmp == result)
        return (1);
    return(0);
} 
int main(void)
{
    printf ("1 = %d\n",reverse(-123));
    printf ("2 = %d\n",reverse(123));
    printf ("3 = %d\n",reverse(121));
    printf ("4 = %d\n",reverse(0));

} */
