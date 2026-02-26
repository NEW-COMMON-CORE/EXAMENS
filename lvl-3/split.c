#include <stdio.h>
#include <stdlib.h>


int count_word(char *str){
    int i =0;
    int word = 0;
    while (str[i])
    {
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
                i++;
        }
        if(str[i]){
            word++;
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                i++;
        }
    }
    return word;
}


int word_len(char *str, int i)
{
    int len = 0;

    while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
        len++;
        i++;
    }
    return len;
}

char    **ft_split(char *str){
    char **res;
    int i = 0;
    int w = 0;
    int len =0;
    int l =0;
    int word = count_word(str);
    res = malloc(sizeof(char *) * (word + 1 ));
    if(!res)
        return NULL;

    while(word > w){
        l =0;
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        len = word_len(str, i);
        res[w] = malloc(sizeof(char) * (len + 1));
        while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')){
            res[w][l] = str[i];
            i++;
            l++;
        }
        res[w][l] = '\0';

        w++;
    }
    res[w] = NULL;

    return res;
}

int main(){
    char **res;
    int i =0;
    res = ft_split("amine elhachimi");
    while(res[i]){
        printf("%s ", res[i]);
        i++;
    }
}