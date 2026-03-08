#include <stdio.h>


int	ft_atoi_base(const char *str, int str_base){
	int i =0 ;
	int signe = 1;
	int value = 0;
	int res =0;

	if (str[i] == '-'){
		signe = -1;
		i++;
	}

	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if(str[i] >= 'a' && str[i] <= 'z')
			value = str[i] - 'a' + 10;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			value = str[i] - 'A' + 10;
		else
			break;

		if(value >= str_base)
			break;		

		res = res * str_base + value;
		i++;
	}
	return res * signe;

}

int main(){
	int res = 0;
	res = ft_atoi_base("abcd", 16);
	printf("%d", res);
}