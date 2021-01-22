#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "blitz_lib_vector.h"

struct vector* create_vector()
{
    struct vector* vec = malloc(sizeof(vector));
    vec->size = 1;
    vec->list = malloc(sizeof(int) * 1);
    return vec;
}

void expand(struct vector* vec)
{
    realloc(vec->list, vec->size * 2);
    vec->size *= 2;
}

void push_back(const int elem, vector* vec)
{
    if (vec->element_count == vec->size - 1) expand(vec);
    vec->list[vec->element_count] = elem;
    vec->element_count++;
}

void insert(int index, struct vector* restrict vec, const int elem)
{
    if (vec->element_count == vec->size - 1) expand(vec);
    vec->element_count++;
    vec->list[vec->element_count] = vec->list[vec->element_count - 1];
    for (int i = vec->element_count - 1; i > index - 1; i--)
        vec->list[i] = vec->list[i-1];
    vec->list[index] = elem; 
}