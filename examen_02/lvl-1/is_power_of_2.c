#include <stdio.h>

int	    is_power_of_2(unsigned int n){

    if (n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else
        return(is_power_of_2(n / 2));

}

int main (){
    int res;
    res = is_power_of_2(45);
    printf("%d", res);
}