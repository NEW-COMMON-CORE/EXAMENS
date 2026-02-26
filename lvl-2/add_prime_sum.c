#include <unistd.h>
int ft_atoi(char *nbr){
    int i =0;
    int signe = 1;
    int res = 0;
    if(nbr[i] == '-'){
        i++;
        signe = -1;
    }
    else if (nbr[i] == '+'){
        i++;
    }
    while(nbr[i]){
        res = res * 10 + (nbr[i] - '0');
        i++;
    }

    return res * signe;
}

void putnbr(int nbr){
    int res = 0;
    if (nbr >=10){
        putnbr(nbr / 10);
    }
    res = nbr % 10 + '0';
    write(1, &res, 1);
}

int is_prime(int n){
    int i = 2;
    if (n < 2){
        return 0;
    }
    while(i < n){
        if(n % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main (int argc, char **argv){
    int res = 0;
    int i = 1;
    int nbr = 0;
    if(argc != 2){
        write(1, "\n", 1);
        return 0;
    }
    nbr = ft_atoi(argv[1]);
    
    if (nbr <= 0){
        write(1, "\n", 1);
        return 0;
    }

    while(nbr >= i){
        if (is_prime(i)){
            res +=  i;
        }
        i++;
    }
    putnbr(res);
    return 0;
}