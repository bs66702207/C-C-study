#include <stdio.h>
#include <stdlib.h>
#include "1.h"

/************************************************************************
*这个结构体里定义的是链表头的信息，我们的链表操作和链表遍历都离不开链表头 
************************************************************************/
typedef struct student
{
	DLinkListNode header;
	DLinkListNode *slider; //游标 
	int length;
}TDLinkList;

/***********************************************************************************************
*函数名： DLinkList_Create
*参数：void
*返回值：DLinkList*类型，是一个void*类型，然后再由接收函数进行强制类型转换 
*功能：创建链表，并返回链表头 
***********************************************************************************************/ 
DLinkList* DLinkList_Create()
{
	/*
		为链表头获得空间，链表中其他数据节点的空间是在主函数中定义的，也就是插入链表时候由
		结构体进行定义。 
	*/
	TDLinkList* ret = (TDLinkList*)malloc(sizeof (TDLinkList));
	if (ret != NULL)
	{
		ret->length = 0;
		ret->slider = NULL;
		ret->header.next = NULL;
		ret->header.pre = NULL;
	}
	
	return ret;
}
/***********************************************************************************************
*函数名： DLinkList_Destroy
*参数：DLinkList* list 传进来的是链表头 
*返回值：void 
*功能：销毁链表头 
***********************************************************************************************/ 
void DLinkList_Destroy(DLinkList* list)
{
	free(list);
}
/***********************************************************************************************
*函数名： DLinkList_Clear
*参数：DLinkList* list 传进来的是链表头 
*返回值：void 
*功能：清空链表，并把链表头信息清空 
***********************************************************************************************/ 
void DLinkList_Clear(DLinkList* list)
{
	TDLinkList *slist = (TDLinkList*)list;
	if (slist != NULL)
	{
		slist->length = 0;
		slist->header.next = NULL;
		slist->header.pre = NULL;
		slist->slider = NULL;
	}
}
/***********************************************************************************************
*函数名： DLinkList_Length
*参数：DLinkList* list 传进来的是链表头 
*返回值：int类型的整数 
*功能：获得链表长度，并将链表的长度返回 
***********************************************************************************************/ 
int DLinkList_Length(DLinkList* list)
{
	/*首先给返回值赋初值，如果函数的返回值为-1，则证明链表并不存在*/ 
	int ret = -1;
	TDLinkList *slist = (TDLinkList*)list;
	if (slist != NULL)
	{
		ret = slist->length;
	}
	return ret;
}
/***********************************************************************************************
*函数名： DLinkList_Insert
*参数：DLinkList* list 传进来的是链表头  DLinkListNode* node 要插入的数据节点，其实是我们
*实际要插入的数据节点的指针 int pos 要插入链表中的位置（注意这个是从0开始算起的） 
*返回值：int类型的整数 
*功能：如果插入元素成功返回1，否则返回其他。 
***********************************************************************************************/ 
int DLinkList_Insert(DLinkList* list, DLinkListNode* node, int pos)
{
	TDLinkList *slist = (TDLinkList*)list;
	int ret = (slist != NULL);
	ret = ret && (pos >= 0);
	ret = ret && (node != NULL);
	int i = 0;
	if (ret)
	{
		DLinkListNode*current = (DLinkListNode*)slist;
		DLinkListNode*next = NULL;
		for (i = 0; (i < pos) && (current->next != NULL); i++)
		{
			current = current->next;
		}
		next = current->next;
		
		current->next = node;
		
		node->next = next;
		if (next != NULL)
		{
		//	node->next = next;
			next->pre = node;			
		} 
		
		node->pre = current;
		if (current == (DLinkListNode*)slist)
		{
			node->pre = NULL;
		}
		
		if (slist->length == 0)
		{
			slist->slider = node;
		} 
	
		slist->length++;
	}
	return ret;
}

/***********************************************************************************************
*函数名： DLinkList_Get
*参数：DLinkList* list 传进来的是链表头  int pos 要插入链表中的位置（注意这个是从0开始算起的） 
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的链表指针和位置，可以获得这个位置上的数据节点信息。 
***********************************************************************************************/
DLinkListNode* DLinkList_Get(DLinkList* list, int pos)
{
	TDLinkList* slist = (TDLinkList*)list;
	DLinkListNode* ret = NULL;
	int i = 0;
	if ((slist != NULL)&& (pos >= 0) && (pos < slist->length))
	{
		DLinkListNode*current = (DLinkListNode*)slist;
		//DLinkListNode*next = NULL;
		for (i = 0; i < pos; i++)
		{
			current = current->next;	
		}
		/*current永远都是我们要找的节点的前一个节点*/ 
		ret = current->next;
	}
	return ret;
}
/***********************************************************************************************
*函数名： DLinkList_Delete
*参数：DLinkList* list 传进来的是链表头  int pos 要插入链表中的位置（注意这个是从0开始算起的） 
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的链表指针和位置，可以获取删除指定位置上的元素，并对指定位置上的元素进行删除。 
***********************************************************************************************/
DLinkListNode* DLinkList_Delete(DLinkList* list, int pos)
{
	TDLinkList* slist = (TDLinkList*)list;
	DLinkListNode * ret = NULL;
	int i = 0;
	
	if ((slist != NULL) && (pos >=0) && (pos < slist->length))	
	{
		DLinkListNode* current = (DLinkListNode*)(slist);
		DLinkListNode*next = NULL;
		for (i = 0; i < pos; i++)
		{
			current = current->next;
		}
		ret = current->next;

//		next->pre = current; 
		next = ret->next;
		current->next = next;
		
		if (next != NULL)
		{
			next->pre = current;
			if (current == (DLinkListNode*)slist)
			{
//				current->next = NULL;
				next->pre = NULL;
			}
			
		}
		
		if (slist->slider == ret)
		{
			slist->slider = next;
		} 
		
		slist->length--;
			
	}
	return ret;
}
/***********************************************************************************************
*函数名： DLinkList_DeleteNode
*参数：DLinkList* list 传进来的是链表头  int pos 要插入链表中的位置（注意这个是从0开始算起的） 
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的链表指针和位置，通过游标指向我们要删除的元素，然后调用DLinkList_Delete函数
进行删除。 
***********************************************************************************************/
DLinkListNode* DLinkList_DeleteNode(DLinkList* list, DLinkListNode* node)
{
	TDLinkList* slist = (TDLinkList*)list;
	DLinkListNode * ret = NULL;
	int i = 0;
	if (slist != NULL)
	{
		DLinkListNode* current = (DLinkListNode*)(slist);
		for (i = 0; i < slist->length; i++)
		{
			if (current->next == node)
			{
				ret = current->next;
				break;
			}
			current = current->next;
		}
		
		if (current != NULL)
		{
			DLinkList_Delete (list, i);
		}
	}
	return ret;
}

/***********************************************************************************************
*函数名： DLinkList_Reset
*参数：DLinkList* list 传进来的是链表头   
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的链表指针将游标重新指向头结点所指向的下一个元素的位置，也就是所谓的游标复位。 
进行删除。 
***********************************************************************************************/
DLinkListNode* DLinkList_Reset(DLinkList* list)
{
	TDLinkList* slist = (TDLinkList*)list;
	DLinkListNode* ret = NULL;
	if (slist != NULL)
	{
		slist->slider = slist->header.next;
		ret = slist->slider; 
	} 
	return ret;
}
/***********************************************************************************************
*函数名： DLinkList_Current
*参数：DLinkList* list 传进来的是链表头   
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的指针，找到游标当前指向的元素，并将这个当前元素返回。 
***********************************************************************************************/
DLinkListNode* DLinkList_Current(DLinkList* list)
{
	TDLinkList* slist = (TDLinkList*)list;
	DLinkListNode* ret = NULL;
	if (slist != NULL)
	{
		ret = slist->slider;
	} 
	return ret;
}

/***********************************************************************************************
*函数名： DLinkList_Next
*参数：DLinkList* list 传进来的是链表头   
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的指针，找到游标指向前一个元素，并将这个前一个元素返回。 
***********************************************************************************************/
DLinkListNode* DLinkList_Next(DLinkList* list)
{
    TDLinkList* slist = (TDLinkList*)list;
    DLinkListNode* ret = NULL;
    
    if( (slist != NULL) && (slist->slider != NULL) )
    {
        ret = slist->slider;
        slist->slider = ret->next;
    }
    
    return ret;
}
/***********************************************************************************************
*函数名： DLinkList_Pre
*参数：DLinkList* list 传进来的是链表头   
*返回值：DLinkListNode*类型 也就是返回的是一个链表的节点结构体指针 
*功能：通过传进来的指针，找到游标指向前一个元素，并将这个前一个元素返回。 
***********************************************************************************************/
DLinkListNode* DLinkList_Pre(DLinkList* list)
{
	TDLinkList* slist = (TDLinkList*)list;
	DLinkListNode* ret = NULL;
	if (slist != NULL && slist->slider != NULL)
	{
		slist->slider = slist->slider->pre; 
		ret = slist->slider;
	} 
	return ret;
}
