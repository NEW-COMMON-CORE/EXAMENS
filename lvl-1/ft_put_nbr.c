int ft_atoi(char *str){
    int singne = 1;
    int i =0;
    int res = 0;
    if(str[i] == '-'){
        i++;
        singne = -1;
    }
    else if (str[i] == '+'){
        i++;
    }

    while(str[i]){
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * singne;
}
#include <unistd.h>


void ft_put_nbr(int nbr){
    int res = 0;

    if (nbr ==-2147483648){
        write(1, "-2147483648", 11);
    }

    if (nbr < 0){
        write(1, "-", 1);
        nbr = -nbr;
    }

    if (nbr >= 10){
        ft_put_nbr(nbr / 10);
    }

    res = nbr % 10 + '0';
    write(1, &res, 1);

}