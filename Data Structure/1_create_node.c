#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node *START = NULL;

struct node * CreateNode() {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

void InsertAtEnd() {
    struct node *temp;
    temp = CreateNode();
    printf("Enter a number that you want to insert: ");
    scanf("%d", &temp->info);
    temp->link = NULL;  // Initialize the link to NULL

    if (START == NULL)
        START = temp;
    else {
        struct node *check;
        check = START;

        while (check->link != NULL)
            check = check->link;

        check->link = temp;
    }
}

void DeleteFromFirst() {
    struct node *d;
    if (START == NULL)
        printf("The list is empty\n");
    else {
        d = START;
        START = START->link;
        free(d);
    }
}

void ViewList() {
    struct node *trv;
    trv = START;
    if (START == NULL)
        printf("The list is empty\n");
    else {
        while (trv != NULL) {
            printf("%d ", trv->info);
            trv = trv->link;
        }
        printf("\n");
    }
}

int Menu() {
    int ch;

    printf("1. Insert at end\n");
    printf("2. Delete from first\n");
    printf("3. View list\n");
    printf("Press 0 to EXIT\n");
    scanf("%d", &ch);
    return ch;
}

int main() {
    while (1) {
        switch (Menu()) {
            case 1:
                InsertAtEnd();
                break;
            case 2:
                DeleteFromFirst();
                break;
            case 3:
                ViewList();
                break;
            case 0:
                exit(0);
            default:
                printf("Please choose a valid option\n");
        }
    }
    return 0;
}
