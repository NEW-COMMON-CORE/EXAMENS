#include <unistd.h>


int main (int argc, char **argv){
    int i = 0;
    int j;
    int l;
    int fond;
    if(argc != 3){
        write(1, "\n", 1);
        return 0;
    }

    while(argv[1][i]){
        j = 0;
        fond = 1;
        while(argv[2][j]){
            if(argv[1][i] == argv[2][j]){
                l = 0;
                while(i > l){
                    if(argv[1][i] == argv[1][l]){
                        fond = 0;
                        break;
                    }
                    l++;
                }
                if(fond == 1){
                    write(1, &argv[1][i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);

}