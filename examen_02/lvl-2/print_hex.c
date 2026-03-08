#include <unistd.h>

int ft_atoi(char *str){
    int i =0;
    int signe = 1;
    int res = 0;

    if(str[i] == '-'){
        signe = -1;
        i++;
    }

    if (str[i] == '+')
        i++;

    while (str[i])
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
    
}
void	print_hex(int n){
    char hex [] = "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex[n % 16], 1);
}


int main (int argc,  char *argv[]){
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}