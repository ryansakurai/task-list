/**
 * API for a stack
 * 
 * Authors
 * - Guilherme Bortoletto
 * - Ryan Sakurai
 * - Vinicius Castro
 */

#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdbool.h>
#include "macros.h"

typedef Modification U;


typedef struct Stack
{
    U *array;
    unsigned first_empty_index;
    unsigned array_size;
} Stack;


/**
 * 
 */
void stack_init(Stack *stack);


/**
 * 
 */
void stack_destroy(Stack *stack);


/**
 * 
 */
void stack_push(Stack *stack, U data);


/**
 * 
 */
bool stack_pop(Stack *stack, U *output);


/**
 * 
 */
bool stack_get_top(Stack *stack, U *output);


/**
 * 
 */
unsigned stack_get_size(Stack *stack);


/**
 * 
 */
bool stack_is_empty(Stack *stack);


#endif
