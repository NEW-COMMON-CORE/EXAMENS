int	ft_atoi(const char *str){
    int  res = 0;
    int signe = 1;
    int i = 0 ;

    if (str[i] == '-'){
        i++;
        signe = -1;
    }
    else if (str[i] == '+'){
        i++;
    }

    while(str[i]){
        res = res * 10 + (str[i] - '0');
        i++;
    }

    return res * signe;
}