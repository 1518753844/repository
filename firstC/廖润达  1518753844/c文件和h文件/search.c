#include "head.h"
#include "info_print.h"
#include "search.h"

//����:��ѯ��Ա������Ϣ
//���룺����ͷָ�� 
INF* search_byname (INF *head)
{
	INF *p ; 
	p = head;
	char search_name[9];
	
	 
	printf("�����������ѯ�ĳ�Ա������");
	inptst(search_name,9);
	
	while (p != NULL)
	{
		if(strcmp(search_name,p->name) == 0)
		{
			printf("\n�ó�Ա��Ϣ���£�");
			info_print(p);
			break; 
		}
		
		p = p->next;
		
	}
	if(p != NULL)
	{
		printf("��ѯ���...\n\n�밴�������");
		getch();
	}
	else 
	{
		printf("\nδ��ѯ����Ӧ��Ϣ\n");
		printf("�밴��������˳�");
		getch(); 
	 } 
	return p; 
 } 
 
INF* search_bystunum (INF *head)
{
	INF *p ; 
	p = head;
	char search_stunum[12];
	 
	printf("�����������ѯ�ĳ�Աѧ�ţ�");
	inptst(search_stunum,12);
	
	while (p != NULL)
	{
		if(strcmp(search_stunum,p->stu_number) == 0)
		{
			printf("\n�ó�Ա��Ϣ���£�");
			info_print(p);
			break; 
		}
		
		p = p->next;
		
	}
	if(p != NULL)
	{
		printf("��ѯ���...\n\n�밴�������");
		getch();
	}
	else 
	{
		printf("\nδ��ѯ����Ӧ��Ϣ\n");
		printf("�밴��������˳�");
		getch(); 
	 } 
	return p; 
 } 
