#ifndef _LINKLIST_HEAD_H_
#define _LINKLIST_HEAD_H_

#include <stdio.h>
#include <stdlib.h>

typedef  int  datatype_t;

typedef struct node {
	datatype_t data;
	struct node * next;
}linknode_t , *linklist;

extern linklist create_linklist(void);
extern int insert_linklist(linklist h, datatype_t x);
extern datatype_t delete_linklist(linklist h);
#endif
