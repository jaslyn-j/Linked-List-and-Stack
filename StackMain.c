#include <stdio.h>
#include <stdlib.h>
#include "Stack.c"

int main(){
	int choice, val;
	while(1){
		printf("\nWhat function do you want to perform \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(val);

                printf("Pushed %d\n", val);
                break;
            case 2:
                pop();
                printf("Popped top element\n");
                break;

            case 3:
                displayStack();
                break;

            case 4:
                printf("Exiting\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
