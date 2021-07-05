#include "linklist.h"

linklist creat_linklist(void)
{
	linklist h=(linklist)malloc(sizeof(linknode));
	h->next=NULL;
	return h;
}
int insert_linklist(linklist h,datatype x)
{
	linklist temp;
	temp = (linklist)malloc(sizeof(linknode));
	if(temp == NULL)
	{
		printf("error\n");
		return -1;
	}
	temp->data = x;

	temp->next=h->next;
	h->next=temp;
	return 0;
}

datatype delete_linklist(linklist h)
{
	linklist p;
	
	p=h->next;
	
    h->next=p->next;

	printf("%d\n",p->data);
	
	if(h->next==NULL) free(h);

    return p->data;
}

datatype show_linklist(linklist h)
{
	while(h->next != NULL)
	{
		printf("%d ",h->next->data);
        h=h->next;
	}

	putchar(10);

	return 0;
}
