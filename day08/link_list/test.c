#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "Mylinklist.h"

typedef struct _Teacher
{
	LinkListNode node;  //必须把它放在第一个元素
	char name[32];
	int age ;
}Teacher;

void main()
{
	int linklen = 0, i = 0;
	Teacher t1, t2, t3, t4, t5;
	LinkList* list = NULL;
	t1.age = 10;
	t2.age = 20;
	t3.age = 30;
	t4.age = 40;
	t5.age = 50;
	//创建链表
	list =  LinkList_Create();
	//获取链表长度
	linklen = LinkList_Length(list);

	//向链表中插入结点数据
	LinkList_Insert(list, (LinkListNode *)&t1, LinkList_Length(list));
	LinkList_Insert(list, (LinkListNode *)&t2, LinkList_Length(list));
	LinkList_Insert(list, (LinkListNode *)&t3, LinkList_Length(list));
	LinkList_Insert(list, (LinkListNode *)&t4, LinkList_Length(list));
	LinkList_Insert(list, (LinkListNode *)&t5, LinkList_Length(list));

	linklen = LinkList_Length(list);

	//遍历链表
	for (i=0; i<LinkList_Length(list); i++)
	{
		Teacher*tmp = (Teacher *)LinkList_Get(list, i);
		if (tmp != NULL)
		{
			printf("2  tmp->age:%d\n", tmp->age);
		} 
	}

	//从链表删除元素
	while(LinkList_Length(list) > 0)
	{
		Teacher*tmp = (Teacher *)LinkList_Delete(list, 0);
		if (tmp != NULL)
		{
			printf("tmp->age:%d\n", tmp->age);
		}
	}

	LinkList_Destroy(list);


	system("pause");
}