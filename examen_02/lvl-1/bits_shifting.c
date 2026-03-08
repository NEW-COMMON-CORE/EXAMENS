#include <unistd.h>

unsigned char	swap_bits(unsigned char octet){
    return ((octet >> 4) | (octet << 4));
}

unsigned char	reverse_bits(unsigned char octet){
    int i = 7;
    unsigned char c =0;

    while(i >= 0){
        c = ((c << 1) | (octet &1));
        octet >>= 1;
        i--;
    }
    return c;
}

void	print_bits(unsigned char octet){
    int i = 7;
    unsigned char c =0;
    while(i >= 0){
        c = ((octet >> i) &1);
        c = c + '0';
        write(1, &c, 1);
        i--;
    }
}

int main (){
    unsigned char c= 0;

    c = reverse_bits(5);
    print_bits(c);
}