#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "linklist.h"


typedef struct _Teacher
{
	char name[64];
	int age ;
	int buf;
}Teacher;

int main()
{
	int ret = 0, i = 0;
	Teacher t1, t2, t3;
	LinkList* list = NULL;

	t1.age = 10;
	t2.age = 20;
	t3.age = 30;

	list = LinkList_Create();

	
	//仔细思考：业务数据 和 链表算法（底层库）是如何分离的。。。。。。
	//业务数据结点的管理（内存的生命周期）甩给了上层应用（业务模型）
	ret = LinkList_Insert(list, (LinkListNode*) &t1, 0);
	ret = LinkList_Insert(list, (LinkListNode*) &t2, 1);
	ret = LinkList_Insert(list, (LinkListNode*) &t3, 0);

	
	//循环遍历
	for (i=0; i<LinkList_Length(list); i++)
	{
		Teacher *tmp = (Teacher *)LinkList_Get(list, i);
		printf("age:%d \n", tmp->age);
	}
	
	//循环删除
	for (i=0; i<LinkList_Length(list); i++)
	{
		LinkList_Delete(list, 0);
	}
	
	 LinkList_Destroy(list);
	return 0;
}
