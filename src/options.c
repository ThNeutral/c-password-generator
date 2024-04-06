#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char numbers[] = "0123456789";
char specials[] = "!#$&'()*+,-./:;<=>?@[]^_`{|}~";

void custom_generate(const char* type, int n, bool should_print) {
    srand(time(NULL)); 

    if (should_print) printf("\nSelected custom generation");
    
    int i;
    char set_of_characters_to_use[92] = "";
    for (i = 0; i < strlen(type); i++) {
        switch (type[i]) {
            case '1' /* lowercase */:
                strcat(set_of_characters_to_use, lowercase);
                break;
            case '2' /* uppercase */:
                strcat(set_of_characters_to_use, uppercase);
                break;
            case '3' /* numbers */:
                strcat(set_of_characters_to_use, numbers);
                break;
            case '4' /* specials */:
                strcat(set_of_characters_to_use, specials);
                break;
        }
    }

    int selected;
    char *password;

    while (true) {
        password = malloc((n + 1) * sizeof(char));
        int charset_size = sizeof(set_of_characters_to_use) - 1;
        for (i = 0; i < n; i++) {
            int index = rand() % charset_size;
            password[i] = set_of_characters_to_use[index];
        }

        password[n] = "\0"; 

        printf("\nPassword is %s", password);
        
        printf("\nEnter 1 to regenerate password or 2 to exit program\n");
        scanf("%i", selected);
        if (selected != 1) break;
    }

    free(password);

}

void quick_generate() {
    printf("\nSelected quick generation");
    const char* t = "1234";
    custom_generate(t, 16, false);
}

void quit_tool(int code) {
    printf("\nQuitting tool...");
    exit(code);
}