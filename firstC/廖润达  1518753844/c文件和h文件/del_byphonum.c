#include "head.h"
#include "del_byphonum.h"
#include "info_print.h"

 /*
ɾ������3 ��ͨ���绰����ɾ��
��������ͷָ��  ��������ͷָ��
*/ 
INF *del_byphonum (INF *head)
{	
	char del_phonum[13]; 
	INF *p1,*p2; 
	p1 = head ;
	
	printf("�����벿Ա�򲿳��ĵ绰���룺");
	inptst(del_phonum,13);
	
	 
	while (strcmp(del_phonum,p1->phone_number) != 0 && p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	
	//�ҵ������ 
	if (strcmp(del_phonum,p1->phone_number) == 0)
	{
		//�г���ע���ĳ�Ա����Ϣ 
		printf("\n���ҵ��绰����Ϊ%s�ĳ�Ա��Ϣ���£�",del_phonum);
		info_print(p1);
		
		int tip;     //����־�ж��Ƿ�ȷ��ע����Ա�˻� 
		printf("\nȷ��ע���ó�Ա�˻���Ϣ��");
		printf("\nȷ��ע���밴1,ȡ��ע���밴0\n");
		tip = -1;
		scanf("%d",&tip);
		
		//����� 
		while( tip != 0 && tip != 1)
		{	
			absorb_char();
			printf("\n������������������1����0\n");
			scanf("%d",&tip);		
		}
		
		//ȷ��ע�� 
		if( tip == 1)
		{
			//�жϸó�Ա��λ��λ������ɾ������
			if (p1 == head)
			{
				head = head->next;
			}
			else
			{
				p2->next = p1->next;
			}
			
		 	//�������� 1 
			n--; 
			
			//��ɾ����Ա�Ķ�Ӧ������������ 
			switch (p1->dep_tip)  
			{
			case 0 : n_network--;
					 break;
			case 1 : n_game--; 
					 break;
			case 2 : n_produce--;
					 break;
			case 3 : n_hardware--;
					 break;
			case 4 : n_design--;
					 break;
			} 
			
			free(p1); 
			printf("\n�˻���Ϣע����ϣ��밴��������밴�������������һ��...\n");
			getch(); 
		}
		//ȡ��ע��
		else 
		{
			printf("\n��ȡ��ע���˻���Ϣ���밴��������밴�������������һ��...\n");
			getch(); 
		}	
	
	}
	
	//û�ҵ������ 
	else
	{
		printf("\nδ�ҵ��绰����Ϊ%s�ĳ�Ա����Ϣ",del_phonum);
		printf("\n�밴�������������һ��");
		getch();
	}
	
	return (head); 	 
 }
