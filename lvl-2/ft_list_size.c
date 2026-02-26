#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list){
    int i = 0;
    while(begin_list != NULL){
        i++;
        begin_list = begin_list->next;
    }
    return i;
}

int main(){
    t_list a;
    t_list b;
    t_list c;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("%d\n", ft_list_size(&a));
}