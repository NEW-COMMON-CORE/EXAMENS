#include <stdlib.h>
#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;



int cmp(void *data, void *data_ref)
{
    int i = 0;
    char *s1 = (char *)data;
    char *s2 = (char *)data_ref;
    
    while(s1[i] && s2[i]){
        if(s1[i] != s2[i])
            return 1;
        i++;
    }
    if (s1[i] != s2[i])
            return 1;

    return 0;
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;

    while (*begin_list)
    {
        if(cmp((*begin_list)->data, data_ref) == 0){
            tmp = *begin_list;
            *begin_list = (*begin_list)->next;
            free(tmp);
        }
        else
            begin_list = &(*begin_list)->next;
    }
    
}

int main(){
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));
    a->next = b;
    b->next = c;
    c->next = NULL;

    a->data = "C";
    b->data = "B";
    c->data = "C";

    ft_list_remove_if(&a, "C", cmp);
    while (a)
    {
        printf("%s", (char *)a->data);
        a=a->next;
    }
    
}