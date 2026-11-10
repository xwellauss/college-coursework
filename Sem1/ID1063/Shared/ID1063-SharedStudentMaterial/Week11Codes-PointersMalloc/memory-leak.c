
#include <stdio.h>
#include <stdlib.h>

void process_data(int iteration) {
    // Allocate 1 MB of heap memory
    int *data = malloc(250000 * sizeof(int)); 
    if (data == NULL) return;

    data[0] = iteration;
    printf("Iteration %d: Allocated 1 MB at address %p\n", iteration, (void*)data);

    // BUG: Function ends without calling free(data).
    // The local variable 'data' is destroyed on function exit,
    // but the 1 MB heap allocation remains allocated with NO WAY to reference it.
}

int main(void) {
    printf("--- Memory Leak Demo ---\n");
    for (int i = 1; true; i++) {
        process_data(i);
    }
    printf("To-tal leaked: 5 MB. The pointer handles are lost forever!\n\n");
    return 0;
}