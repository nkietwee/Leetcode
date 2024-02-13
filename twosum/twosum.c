/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twosum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:51:09 by nkietwee          #+#    #+#             */
/*   Updated: 2024/02/13 16:48:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i;
	int j;
    int *ret;

	*returnSize = 2;
	ret = malloc(sizeof(int) * 2);
	i = 0;
	j = 1;
	while(i < numsSize)
	{
		if (nums[i] + nums[j] == target)
		{
			ret[0] = i;
			ret[1] = j;
			return(ret);
		}
		j++;
		if (j == numsSize)
		{
			i++;
			j = i + 1;
		}
		if(i == numsSize - 1 && j == numsSize)
			break;
	}
	return(ret);
}
/*
	other method
*/
// int* twoSum(int* nums, int numsSize, int target, int* returnSize)
// {
// 		int	*res;
// 		int	i;
// 		int	j;

// 		*returnSize = 2;
// 		res = (int *)malloc(sizeof(int) * 2);
// 		i = 0;
// 		while (i < numsSize)
// 		{
// 			j = i + 1;
// 			while (j < numsSize)
// 			{
// 				if (nums[i] + nums[j] == target)
// 				{
// 					res[0] = i;
// 					res[1] = j;
// 					return(res);
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 		return(NULL);
// }

int main(void)
{
	int nums[4] = {2, 7, 11, 15};
	int size = 2;
	int *res = twoSum(nums, 4, 9, &size);

	printf("%d\n" , res[0]);
	printf("%d\n" , res[1]);
    return(0);
}

// char *to_jaden_case (char *jaden_case, const char *string)
// {
// // write to jaden_case and return it
//   int i= 0;
//   char *tmp=0;
//   if(string[0] == '\0')
//     return(0);
//   while (string[i])
//   {
//       if (string[i] == 32 && string[i + 1] >= 'a' && string[i + 1] <= 'z')
//       {
//         *(jaden_case) = 32;
//         jaden_case++;
//         *(jaden_case) = string[++i] - 32;
//         jaden_case++;
//       }
//       else
//         *jaden_case = string[i];
//       if(i == 0)
//         *tmp = *jaden_case;
//     i++;
//   }
// 	*jaden_case = '\0';
//   *jaden_case = *tmp;
// 	return jaden_case;
// }