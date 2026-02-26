#include <stdlib.h>
#include <stdio.h>


typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

int ascending(int a, int b)
{
    return (a <= b);
}
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int tmp = 0;
    while(lst && lst->next){
        if(cmp(lst->data, lst->next->data) == 0){
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return start;
}



int main(){
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));
    a->next = b;
    b->next = c;
    c->next = NULL;

    a->data = 1;
    b->data = 2;
    c->data = 0;
    t_list *res;
    res = sort_list(a ,ascending);
    while (res)
    {
        printf("%d", res->data);
        res=res->next;
    }
    
}