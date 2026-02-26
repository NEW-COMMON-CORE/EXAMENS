#include <stdlib.h>
#include <stdio.h>


int *ft_range(int start, int end)
{
    int *res;
    int size;
    int i = 0;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;

    res = malloc(sizeof(int) * size);
    if (!res)
        return NULL;

    while (i < size)
    {
        res[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }
    return res;
}


int main (){
    int *res;

    res = ft_range(0, -3);
    for (int i = 0; i < 4; i++)
        printf("%d ", res[i]);
    return 0;
}