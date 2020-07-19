#include "libmx.h"

void mx_pop_back(t_list **list){

    t_list * clone = *list;

    while(clone->next->next != NULL){
        clone = clone->next;
    }

    free(clone->next->data);
    free(clone->next);
    clone->next = NULL;
}

// int main(){
//
//    char *s1 = mx_strnew(1);
//    char *s2 = mx_strnew(1);
//    char *s3 = mx_strnew(1);
//    char *s4 = mx_strnew(1);
//
//    s1[0] = '1';
//    s2[0] = '2';
//    s3[0] = '3';
//    s4[0] = '4';
//
// 	t_list *first = mx_create_node(s1);
//
// 	mx_push_back(&first, s2);
// 	mx_push_back(&first, s3);
// 	mx_push_back(&first, s4);
//
// 	mx_pop_back(&first);
//
// 	system("leaks untitled");
//
// 	while (first) {
// 		printf("%s\n", first->data);
// 		first = first->next;
// 	}
//
// 	return 0;
// }
