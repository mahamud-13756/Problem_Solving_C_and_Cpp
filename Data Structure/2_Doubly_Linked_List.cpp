#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next, *prev;
};

struct node *start = NULL;

struct node* CreateNewNode() {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL) { // Added check for successful memory allocation
        printf("Memory allocation failed\n");
        exit(1);
    }
    return n;
}

// Changed the function signature to include void return type
void InsertNodeAsFirst() {
    struct node *store;
    store = CreateNewNode();
    
    // Moved the input prompt before assigning the node to start
    printf("Please enter a number: ");
    scanf("%d", &store->info);

    if (start == NULL) {
        start = store;
        store->prev = NULL;
        store->next = NULL;
    } else {
        struct node *newptr = start;
        start = store;
        start->prev = NULL;
        start->next = newptr;
        newptr->prev = store;
    }
}

// Changed the function signature to include void return type
void PrintListFirstToLast() {
    struct node *trv;
    trv = start;

    if (start == NULL)
        printf("The list is empty\n");
    else {
        // Changed loop condition to while (trv != NULL) to print the last node as well
        while (trv != NULL) {
            printf(" %d", trv->info);
            trv = trv->next;
        }
        printf("\n"); // Added newline for proper formatting after the list is printed
    }
}

int Menu() {
    int ch;

    printf("1. Insert at First\n");
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
                InsertNodeAsFirst();
                break;
            case 2:
                // DeleteFromFirst();
                break;
            case 3:
                PrintListFirstToLast();
                break;
            case 0:
                exit(0);
            default:
                printf("Please choose a valid option\n");
        }
    }
    return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>


struct node
{
    int info;
    struct node *next, *prev;

};

struct node *start=NULL;

struct node * CreateNewNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}

InsertNodeAsFirst()
{
    struct node *store;
    store=CreateNewNode();

    if(start==NULL)
    {
        start=store;

    }
    else
    {
        struct node *newptr;
        newptr=start;

        printf("Plase enter a number: ");
        scanf("%d",&store->info);
        start=store;
        start->prev=NULL;
        start->next=newptr;
        newptr->prev=store;


    }
}


PrintListFirstToLast()
{
    struct node *trv;
    trv=start;

    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        while(trv->next!=NULL)
        {
            printf(" %d", trv->info);
            trv=trv->next;
        }
    }


}


int Menu() {
    int ch;

    printf("1. Insert at First\n");
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
                InsertNodeAsFirst();
                break;
            case 2:
                //DeleteFromFirst();
                break;
            case 3:
                PrintListFirstToLast();
                break;
            case 0:
                exit(0);
            default:
                printf("Please choose a valid option\n");
        }
    }
    return 0;
}


*/