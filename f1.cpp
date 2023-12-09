#include <stdio.h>

int main() {
 
    int age, vote;
    char name[50], gender[10];

    for (int i = 0; i < 10; ++i) {
        printf("\nVoter %d\n", i + 1);

        printf("Enter your name: ");
        scanf("%s", name);

        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 18) {
            printf("Sorry, %s, you are not eligible to vote.\n", name);
            continue; 
        }

       
        printf("Enter your gender (m/f): ");
        scanf("%s", gender);

        if (gender, "m") {
            printf("Mr. %s, ",name);
        } else if (gender,"f") {
            printf("Mrs. %s, ",name);
        }

        printf("Please vote for a party:\n");
        printf("1. BJP\n2. IND CONGRESS\n3. BSP\n4. OTHER\n");

        printf("Enter your vote (1-4): ");
        scanf("%d", &vote);

        printf("\nReceipt:\n");
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Gender: %s\n", gender);
        printf("Vote: ");

        switch (vote) {
            case 1:
                printf("BJP\n");
                break;
            case 2:
                printf("IND CONGRESS\n");
                break;
            case 3:
                printf("BSP\n");
                break;
            case 4:
                printf("OTHER\n");
                break;
            default:
                printf("Invalid vote\n");
        }

        printf("Vote Counted!\n");
    }

    return 0;
}





