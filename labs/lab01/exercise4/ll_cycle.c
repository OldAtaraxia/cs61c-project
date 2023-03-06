#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    // EZ Game
    node *fast_ptr = head, *slow_ptr = head;
    while (fast_ptr != NULL && fast_ptr->next != NULL && fast_ptr->next->next != NULL) {
        fast_ptr = fast_ptr->next;
        fast_ptr = fast_ptr->next;
        slow_ptr = slow_ptr->next;
        if (fast_ptr == slow_ptr) {
            return 1;
        }
    }
    return 0; // 走到最后了，所以没有环
}
