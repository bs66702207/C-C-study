#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct Node
{
	int data;
	struct Node *next;
}SLIST;

SLIST *Creat_SList();
int SList_Print(SLIST *pHead);
//在结点数值为x的前面插入y
int SList_NodeInsert(SLIST *pHead, int x, int y);
//删除结点为y的链表结点
int SList_NodeDel(SLIST *pHead, int y);
int SList_Destory(SLIST *pHead);

SLIST *Creat_SList()
{
	//1 创建头结点并初始化 
	int data = 0;
	SLIST *pHead = NULL, *pM = NULL, *pCur;
	pHead = (SLIST *)malloc(sizeof(SLIST));
	pHead->data = 0;
	pHead->next = NULL;

	//2循环创建结点，结点数据域中的数值从键盘输入，
	//以-1作为输入结束标志
	printf("\nPlease enter the data of node(-1:quit) ");
	scanf("%d", &data);

	//准备环境 让pCur指向pHead
	pCur = pHead;
	while(data != -1)
	{
		//不断的malloc新节点 并且数据域 赋值
		pM = (SLIST *)malloc(sizeof(SLIST));
		pM->data = data;
		pM->next = NULL;

		//1新节点入链表
		pCur->next = pM;

		//2 当前结点下移（新结点变成当前结点）
		pCur = pM; // (pCur = pCur->next)

		printf("\nPlease enter the data of node(-1:quit) ");
		scanf("%d", &data);
	}
	return pHead;
}


int SList_Print(SLIST *pHead)
{
	SLIST *p = NULL;

	if (pHead == NULL)
	{
		return -1;
	}
	//准备环境
	p = pHead->next;
	printf("\nBegin ");
	while(p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\nEnd.\n");
}

//在结点数值为x的前面插入y
int SList_NodeInsert(SLIST *pHead, int x, int y)
{
	SLIST *pCur = NULL, *pPre = NULL, *pM= NULL;
	if (pHead == NULL)
	{
		return -1;
	}
	//环境准备
	pPre = pHead;
	pCur = pHead->next;

	//不断的malloc新节点 并且数据域 赋值
	pM = (SLIST *)malloc(sizeof(SLIST));
	pM->data = y;
	pM->next = NULL;

	while(pCur)
	{
		if (pCur->data == x)
		{
			break;
		}
		//让pPre下移
		pPre = pCur;
		//让当前节点下移
		pCur = pCur->next;
	}

	//让新节点链接后继结点
	pM->next = pPre->next; //(pCur)
	//让前驱结点连接pM
	pPre->next = pM;

	return 0;
}

//删除结点为y的链表结点
int SList_NodeDel(SLIST *pHead, int y)
{
	SLIST *pCur = NULL, *pPre = NULL;
	if (pHead == NULL)
	{
		return -1;
	}
	//环境准备
	pPre = pHead;
	pCur = pHead->next;

	while(pCur)
	{
		if (pCur->data == y)
		{
			break;
		}
		//让pPre下移
		pPre = pCur;
		//让当前节点下移
		pCur = pCur->next;
	}
	if (pCur == NULL)
	{
		printf("没有找到节点 y:%d", y);
		return -2;
	}
	//执行操作
	pPre->next = pCur->next;
	free(pCur);
	return 0;
}


int SList_Destory(SLIST *pHead)
{
	//1、删除当前结点前，需要把后继结点位置缓存
		
	SLIST *pTmp = NULL;
	SLIST *pCur = pHead;
	if (pHead == NULL)
	{
		return -1;
	}

	while(pCur)
	{
		//缓存后继结点位置
		pTmp = pCur->next;
		//删除当前结点
		free(pCur);
		//当前结点下移
		pCur = pTmp;
	}
	return 0;
}

int SList_Destory2(SLIST **pHead)
{
    //1、删除当前结点前，需要把后继结点位置缓存
        
    SLIST *pTmp = NULL;
    SLIST *pCur = *pHead;
    if (pHead == NULL)
    {
        return -1;
    }

    while(pCur)
    {
        //缓存后继结点位置
        pTmp = pCur->next;
        //删除当前结点
        free(pCur);
        //当前结点下移
        pCur = pTmp;
    }
	
	free(*pHead);
	*pHead=NULL;
    return 0;
}

int main()
{
	int ret = 0;
	SLIST *pHead = NULL;
	pHead = Creat_SList();

	printf("pHead:pHead->data=%d\n", pHead->data);

	SList_Print(pHead);

	//插入操作
	ret = SList_NodeInsert(pHead, 4, 6);
	ret = SList_Print(pHead);

	ret = SList_NodeDel(pHead, 6);
	ret = SList_Print(pHead);

//	ret = SList_Destory(pHead);	
	ret = SList_Destory2(&pHead);	
	printf("pHead=%p\n",pHead);
	return 0;
}

