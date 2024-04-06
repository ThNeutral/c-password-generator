#include <stdio.h>

int show_interface_before_generation() {
    int selected_option = 0;

    printf("Welcome to password generator tool!\n");
    printf("Please select option:\n");
    printf("\t1. Quick generate (16 symbols password using numbers, upper and lower case latin letters and special characters)\n");
    printf("\t2. Custom generate\n");
    printf("\t3. Quit\n");
    printf("\nYour selection: ");

    scanf("%i", &selected_option);
    while (selected_option < 1 || selected_option > 3) {
        printf("Unallowed value of selection.");
        printf("\nYour selection: ");
        scanf("%i", &selected_option);
    }

    return selected_option;
}