#include <unistd.h>


void	print_bits(unsigned char octet){
    int i = 8;
    unsigned char c = 0;

    while(i >= 0){
        c = ((octet >> i) &1);
        c = c + '0';
        write(1, &c, 1);
        i--;
    }
}



int main (){
    print_bits(5);
}