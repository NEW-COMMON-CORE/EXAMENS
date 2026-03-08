#include <stdlib.h>
#include <stdio.h>


char	*ft_itoa(int nbr){
    char *res;
    int signe = 1;
    int i = 0;
    int l = 0;
    int n = nbr;
    if (nbr <= 0){
        l++;
    }
    while(n != 0){
        n = n / 10;
        l++;
    }
    
    res = malloc(l + 1);
    if (!res){
        return NULL;
    }
    res[l] = '\0';

    if (nbr == 0){
        res[0] = '0';
        return res;
    }
    
    if(nbr < 0){
        res[0] = '-';
        nbr =-nbr;
    }

    while (nbr > 0)
    {
        l--;
        n = nbr % 10;
        nbr = nbr / 10;
        res[l] = n + '0';
    }

    return res;
}



int main (){
    char *res;
    res = ft_itoa(55);
    printf("%s", res);
    return 0;
}