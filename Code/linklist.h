#ifndef _LINKLIST_HEAD_H_
#define _LINKLIST_HEAD_H_

#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct node
{
	datatype data;
	struct node * next;
}linknode,*linklist;

extern linklist creat_linklist(void);
extern datatype insert_linklist(linklist h,datatype x);
extern datatype delete_linklist(linklist h);
#endif
