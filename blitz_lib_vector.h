#ifndef __BLITZ_LIB_VECTOR__H
#define __BLITZ_LIB_VECTOR__H
struct vector* create_vector();
void push_back(const int elem, struct vector* vec);
void insert(int index, struct vector* vec, const int elem);
typedef struct vector
{
    int size;
    int element_count;
    int* list;
} vector;
#endif