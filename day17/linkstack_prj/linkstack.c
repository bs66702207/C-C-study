
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "linkstack.h"
#include "linklist.h"

typedef struct _Teacher
{
	LinkListNode nodeddddddddd;
	void *item;
}Teacher;

typedef struct _tag_linkStackNode
{
	LinkListNode node;
	void *item;
}TlinkStackNode;


LinkStack* LinkStack_Create()
{
	return LinkList_Create();;
}

void LinkStack_Destroy(LinkStack* stack)
{
	return ;
}

void LinkStack_Clear(LinkStack* stack)
{
	return ;
}

//向stack中push数据，相当于向linklist中插入数据
int LinkStack_Push(LinkStack* stack, void* item)
{
	int ret = 0;
	TlinkStackNode *t1 =(TlinkStackNode *) malloc(sizeof(TlinkStackNode));
	t1->item = item;
	ret = LinkList_Insert(stack, (LinkListNode*)t1, 0);
	if (ret != 0)
	{
		free(t1); //注意内存泄露
	}
	return ret;
}

void* LinkStack_Pop(LinkStack* stack)
{	
	void *myItem = NULL;
	TlinkStackNode *node = NULL;
	if (stack == NULL)
	{
		return NULL;
	}

	node = (TlinkStackNode *)LinkList_Delete(stack, 0);
	if (node == NULL)
	{
		return NULL;
	}
	myItem = node->item;
	free(node); //注意释放内存不要忘记
	return myItem;
}

void* LinkStack_Top(LinkStack* stack)
{
	return NULL;
}

int LinkStack_Size(LinkStack* stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	return LinkList_Length(stack);
}

