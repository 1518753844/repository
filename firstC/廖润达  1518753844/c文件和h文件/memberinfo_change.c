#include "head.h"
#include "memberinfo_change.h"
#include "change_info.h"
#include "search.h" 

INF *memberinfo_change (INF*head)
{	
	int tip;
	INF* p;
	
	printf("��ӭ������Ϣ�޸�ϵͳ\n");
	printf("\n���Ȳ�ѯ������Ҫ�޸ĵĳ�Ա����Ϣ��\n");
	printf("����1ͨ���������ң�����0ͨ��ѧ�Ų���\n");
	tip = -1;
	scanf("%d",&tip);
	
	//����� 
	while(tip != 1 && tip != 0)
	{	
		absorb_char();
		printf("\n�������������֣�0��1��\n");
		scanf("%d",&tip); 
	}
	 
	if(tip == 1)
	{
	 	p = search_byname(head);
	}
	if(tip == 0)
	{
		p = search_bystunum(head);
	}
	
	if( p == NULL)
	{
		return head;
	}
	 

	  
	printf("\n     _________________________________________________________________ \n");
	printf("      |       1.�޸�����          2.�޸�ѧ��       3.�޸ĵ绰����       |\n");
	printf("      |       4.�޸�רҵ�Ͱ༶    5.�ص���ҳ��                          |\n");
	printf("      |GDUT-IMA                                                         |\n");	       
	printf("      |_________________________________________________________________|\n");
	printf("�����������Ӧ�������֣�1-5��:");
	
	int tip1;
	tip1 = -1; 
	scanf("%d",&tip1);
	
	while(tip1 != 1 && tip1 != 2 && tip1 != 3 && tip1 != 4 && tip1 != 5)
	{	
		absorb_char();
		printf("��������������������֣�1-5��");
		scanf("%d",&tip1); 
	}
				
	//ѡ����� 
	if( tip1 != 5)
	{
		p = info_change_select(p,head,tip1);
	}
	
	return head;
 } 
