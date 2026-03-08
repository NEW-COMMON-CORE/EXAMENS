#include <unistd.h>
#include <stdio.h>


int	ft_strlen(char *str){
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}



int main(){
    int res = 0;
    res = ft_strlen("abcdef");
    printf("%d", res);
    // write(1, &res, 1);
}