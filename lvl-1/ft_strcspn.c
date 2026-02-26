#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject){
    size_t i=0;
    int j =0;
    while(s[i]){
        j =0;
        while(reject[j]){
            if (s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}


int main (){
    printf("%zu", ft_strcspn("amine", "z"));
}