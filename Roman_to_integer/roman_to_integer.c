#include <stdio.h>
int romanToInt(char* str)
{
    int res;
    int i;

    res = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == 'I')
        {
            if (str[i + 1] == 'V' && str[i + 1])
            {
                res = res + 4;
                i++;
            }
            else if (str[i + 1] == 'X' && str[i + 1])
            {
                res = res + 9;
                i++;
            }
            else 
                res = res + 1;
        }
        else if (str[i] == 'X')
        {
            if (str[i + 1] == 'L' && str[i + 1])
            {
                res = res + 40;
                i++;
            }
            else if (str[i + 1] == 'C' && str[i + 1])
            {
                res = res + 90;
                i++;
            }
            else
                res = res + 10;
        }
        else if (str[i] == 'C')
        {
            if (str[i + 1] == 'D' && str[i + 1])
            {
                res = res + 400;
                i++;
            }
            else if (str[i + 1] == 'M' && str[i + 1])
                {
                res = res + 900;
                i++;
            }
            else
                res = res + 100;
        }
        else if (str[i] == 'V')
            res = res + 5;
        else if (str[i] == 'X')
            res = res + 10;
        else if (str[i] == 'L')
            res = res + 50;
        else if (str[i] == 'D')
            res = res + 500;
        else if (str[i] == 'M')
            res = res + 1000;
        i++;
    }
    return (res) ;
}

int main(void)
{
    printf("res : %d\n" , romanToInt("LVIII"));
    printf("res : %d\n" , romanToInt("MCMXCIV"));
}