# 0x1B. C - Sorting algorithms & Big O

## Synopsis
This project have exercises related with:
* Sorting algorithms
* Big O notation

## Definition
Big O Notation is a relative representation of the complexity of an algorithm

## Compililation
Files are compiled using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

## Functions
```#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

## Data Structures
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Files
* 0-bubble_sort.c, 0-O
* 1-insertion_sort_list.c, 1-O
* 2-selection_sort.c, 2-O
* 100-shell_sort.c
* 101-cocktail_sort_list.c, 101-O
* 102-counting_sort.c, 102-O
* 103-merge_sort.c, 103-O
* 104-heap_sort.c, 104-O
* 105-radix_sort.c
* 106-bitonic_sort.c, 106-O
* 106-bitonic_sort.c, 106-O
* 1000-sort_deck.c, deck.h

Author: Joana Casallas