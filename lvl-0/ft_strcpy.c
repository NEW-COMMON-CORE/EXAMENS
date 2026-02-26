#include <unistd.h>
#include <stdio.h>


char    *ft_strcpy(char *s1, char *s2){
    int i = 0;
    while(s2[i]){
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}


int main (){
    char s1[7];
    char *s2 = "abcdef";
    char *res;

    res = ft_strcpy(s1, s2);
    printf("%s", res);
    // write(1, &res, 6);
}