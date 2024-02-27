#include <stdio.h>

int main() {
    char name[2][50]; 

    for (int i = 0; i < 2; ++i) {
        printf("Enter name : ");
        scanf("%s", name[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < 2; ++i) {
        printf("%s ", name[i]);
    }

    return 0;
}
