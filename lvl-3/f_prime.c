#include <unistd.h>

int ft_atoi(char *nbr){
    int i = 0;
    int signe = 1;
    int res = 0;
    if (nbr[i] == '-'){
        signe = -1;
        i++;
    }
    else if  (nbr[i] == '+'){
        i++;
    }

    while(nbr[i]){
        res = res * 10 + (nbr[i] - '0');
        i++;
    }
    return res * signe;
}

void ft_putnbr(int nbr){
    int res = 0;
    if (nbr >= 10){
        ft_putnbr(nbr / 10);
    }
    res = nbr % 10 + '0';
    write(1, &res, 1);
}

int main (int argc, char *argv[]){
    int i = 2 ;
    int nbr = 0;
    int first = 1;

    if (argc != 2){
        write(1, "\n", 1);
        return 0;
    }
    nbr = ft_atoi(argv[1]);

    
    while (nbr > 1)
    {
        if (nbr % i == 0){
            if(!first)
                write(1, "*", 1);
            ft_putnbr(i);
            nbr = nbr / i;
            first = 0;
        }
        else {
            i++;
        }
    }
    
    return 0;
}

// int main (int argc, char *argv[]){
//     int i = 2;
    
//     if (argc != 2){
//         write(1, "\n", 1);
//         return 0;
//     }
//     int nbr = ft_atoi(argv[1]);
//     while(nbr > 1){
//         i = 2;
//         if(nbr % i == 0)
//         {
//             ft_putnbr(i);
//             nbr = nbr / i;
//         }
//         else
//             i++;

//     }
    
//     return 0;
// }