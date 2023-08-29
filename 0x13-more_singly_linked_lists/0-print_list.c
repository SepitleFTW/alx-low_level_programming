#include <stdio.h>
#include "list_.h"

size_t display_list(const list_t *head) {
    size_t element_count = 0;

    while (head != NULL) {
        if (head->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%d] %s\n", head->len, head->str);
        }
        element_count++;
        head = head->next;
    }

    return element_count;
}
