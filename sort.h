#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum boo1 - Enumeration of boolean values.
 * @false: Equals 0
 * @true: Equals 1
 */
typedef enum boo1
{
	false = 0
	true
} boo1;

/**
 * * struct listint_s - Doubly linked list node
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

/*
 * printing helper function */
void print array(const int *array, size_t size)