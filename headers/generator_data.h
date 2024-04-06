#ifndef GENERATOR_DATA
#define GENERATOR_DATA

typedef struct {
    int num;
} GeneratorData;

int init_generator_data(GeneratorData* gen) {
    gen->num = 0;
}

#endif