#include <stdio.h>

int main() {
    int level;

    printf("Enter level: ");
    scanf("%d", &level);

    if (level <= 0) {
        printf("Level below 1 is not allowed\n");
    } else if (level > 4) {
        printf("Level above 4 is not allowed\n");
    } else {
        
        switch (level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
            default:
                printf("Invalid level\n");
        }
    }

    return 0;
}
