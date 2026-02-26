#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet){
    int i = 0;
    unsigned char c = 0;

    while (i < 8)
    {
        c = ((c << 1) | (octet & 1));
        octet >>= 1;
        i++;
    }
    return c;
}


int main(){
    unsigned char res = 0;
    int i = 7;
    unsigned char c = 0;
    res = reverse_bits(5);
    while(i >= 0){
        c = ((res >> i) &1);
        c = c + '0';
        write(1, &c, 1);
        i--;
    }
}