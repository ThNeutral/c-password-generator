#include <stdio.h>
#include <stdlib.h>

#include "../headers/generator_data.h"

#include "./interface.c"
#include "./options.c"

int main(int argc, char** argv[]) {
    GeneratorData gen;
    GeneratorData* genptr = &gen;
    init_generator_data(genptr);
    int selection = show_interface_before_generation();

    switch (selection) {
        case 1 /*Quick generate*/:
            quick_generate();
            break;
        case 2 /*Custom generate*/:
            custom_generate("1234", 16, true);
            break;
        case 3 /*Quit*/:
            quit_tool(0);
            break;
    }

    return 0;
}