#include <stdio.h>

int main() {
    int member;
    printf("Enter membership level (1-4): ");
    scanf("%d", &member);

    if (member == 1) {
        printf("Silver Member: 5%% discount\n");
    } else if (member == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (member == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (member == 4) {
        printf("Diamond Member: 20%% discount + Reward points + Birthday gift + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }

    return 0;
}