#include "head.h"
#include "search.h"
#include "system_info.h"

//���ܣ���Ϣ��ϵͳ
//���룺����ͷָ�� 
void system_info (INF *head)
{
	int tip;//����Ϣϵͳ������ʾ
	int back_tip = 0;//�˳���ʾ 
	int tip1;//��ѯ����ϵͳ(����2��Ӧ����)��ʾ 
	
	do 
	{	
		system("cls");
	 
		printf("      |                         IMA��Ϣϵͳ                             |\n");
		printf("      |_________________________________________________________________| \n");
		printf("      |         	                                                    |\n");
		printf("      |                      1.�鿴���г�Ա��Ϣ                         |\n");
		printf("      |                      2.��ѯ�����Ա��Ϣ                         |\n");
		printf("      |                      3.�˳���Ϣϵͳ                             |\n");
		printf("      |GDUT-IMA                                                         |\n");	       
		printf("      |_________________________________________________________________|\n");
		printf("��ѡ������Ҫ�Ĳ�������������1-3��:\n");
		tip = -1; 
		scanf("%d",&tip);
		
		//����� 
		while (tip != 1 && tip != 2 && tip != 3)
		{	
			absorb_char();
			printf("\n�������������֣�1-3��\n");
			scanf("%d",&tip);
		}
		
		switch (tip)
		{
			case 1: system("cls"); 
					all_print(head);
					break;
			case 2: system("cls");
					printf("      |                      IMA��Ϣ��ѯϵͳ                            |\n");
					printf("      |_________________________________________________________________|\n");
					printf("      |         	                                                    |\n");
					printf("      |                      1.ͨ��������ѯ                             |\n");
					printf("      |                      2.ͨ��ѧ�Ų�ѯ                             |\n");
					printf("      |GDUT-IMA                                                         |\n");	       
					printf("      |_________________________________________________________________|\n"); 
					printf("\n���������֣�1-2��\n");
					tip1 = -1;
					scanf("%d",&tip1);
					
					while (tip1 != 1 && tip1 != 2)
					{	
						absorb_char();
						printf("\n�������������֣�1-2��\n");
						scanf("%d",&tip1);
					}
					//������ѯ 
					if(tip1 == 1 )
					{	
						system("cls");
						search_byname(head);
					}
					//ѧ�Ų�ѯ 
					if(tip1 == 2 )
					{	
						system("cls");
						search_bystunum(head);
					}	
					break;
			case 3:back_tip = 1;
				   break;		 
		}
	
		
	}while (back_tip == 0); 
			
} 
