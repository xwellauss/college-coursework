#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int a[100];
    int i;
    bool found = false;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d\n", a[i]);
            found = true;
            break;
        }
    }

    if (!found) {
        printf("No odd number\n");
    }

    return 0;
}