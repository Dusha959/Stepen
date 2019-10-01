#include <stdio.h>

void prov_stepen(int chislo, int base)
{
    int flag;

    flag = 0;
    if ((chislo <= 0) || (base <= 0))
        printf("%s\n", "error, wrong data");
    else if (chislo == 1)
    {
        if (base == 1)
            printf("%s\n", "yes");
        else
            printf("%s\n", "no");  
    }
    else
    {
       while (chislo != 1)
        {
            if (chislo % base == 0)
                chislo = chislo / base;
            else
            {  
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%s\n", "yes");
        else
            printf("%s\n", "no");
    }
}

int main()
{
    int i;
    int j;

    j = 2;
    i = 0;
    while (i <= 20)
    {
        prov_stepen(i, j);
        i++;
    }
    return (0);
}
