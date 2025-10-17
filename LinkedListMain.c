#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.c"

int main(){
	int choice, val, pos;
	while(1){
		printf("\nWhat function do you want to perform \n");
        printf("1. Insert at start\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Remove at start\n");
        printf("5. Remove at end\n");
        printf("6. Remove at position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insertAtStart(val);

                printf("Inserted %d\n", val);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insertAtEnd(val);

                printf("Inserted %d\n", val);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &val);
				printf("Enter position to insert: ");
                scanf("%d", &pos);
                insertAtPosition(val, pos);
				printf("Inserted %d\n", val);
                break;
            case 4:
                removeAtStart();
                break;            
            case 5:
            	removeAtEnd();
            	break;            
            case 6:
            	printf("Enter position to delete: ");
                scanf("%d", &pos);
                removeAtPosition(pos);
                break;
            case 7:
            	display();
            	break;
            case 8:
            	printf("Exiting\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
