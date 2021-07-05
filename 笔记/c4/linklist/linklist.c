#include "linklist.h"

linklist create_linklist(void)
{
	linklist h = (linklist)malloc(sizeof(linknode_t));

	h->next = NULL;

	return h;
}

int insert_linklist(linklist h, datatype_t x)
{
	linklist temp;
	temp = (linklist)malloc(sizeof(linknode_t));
	if(temp == NULL)
	{
		printf("No memory.\n");
		return -1;
	}
	temp->data = x;

	temp->next = h->next;
	h->next = temp;
		
	return 0;
}


datatype_t delete_linklist(linklist h)
{
	if(h->next == NULL)
	{
		perror("delete_linklist");
		return -1;
	}
	linklist temp;

	temp = h->next;
	h->next = temp->next;

	free(temp);
	temp = NULL;

	return ;
}


int show_linklist(linklist h)
{
	while(h->next != NULL)
	{
		printf("%d ", h->next->data);
		h = h->next;
	}
	putchar(10);

	return 0;
}
