#ifndef SORT_H
#define SORT_H
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
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_node(listint_t *prev, listint_t *current, listint_t **list);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void _heapify(int *array, size_t i, size_t size, int const_size);
void quick_sort_hoare(int *array, size_t size);
void swap(int *a, int *b);
void counting_sort(int *array, size_t size);
int max_int(int *array, size_t size);
#endif
