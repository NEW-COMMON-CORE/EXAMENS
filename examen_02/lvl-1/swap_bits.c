#include <unistd.h>


unsigned char	swap_bits(unsigned char octet){
    return ((octet >> 4) | (octet << 4));
}



int main(){
    int i = 7;
    unsigned char res = 0;
    unsigned char tmp = 0;
    res = swap_bits(5);
    while (i >= 0)
    {
        tmp = ((res >> i) &1) + '0';
        write(1, &tmp, 1);
        i--;
    }
    

}