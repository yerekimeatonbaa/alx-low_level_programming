/**

 * struct dlistint_s - doubly linked list

 * @n: integer

 * @prev: points to the previous node

 * @next: points to the next node

 *

 * Description: doubly linked list node structure

 * 

 */

typedef struct dlistint_s

{

    int n;

    struct dlistint_s *prev;

    struct dlistint_s *next;

} dlistint_t;



size_t print_dlistint(const dlistint_t *h);

{

const dlistint_t *node = h;

	size_t cont = 0;



	while (node)

	{

		printf("%i\n", node->n);

		cont++;

		node = node->next;

	}



	return (cont);

}
