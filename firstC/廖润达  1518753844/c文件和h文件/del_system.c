#include "head.h"
#include "del_byname.h"
#include "del_bystunum.h"
#include "del_byphonum.h"
#include "del_SYSTEM.h"
#include "info_print.h"

INF *del_SYSTEM (INF *head)
{
	int back_tip = 0;//��Ϊ�Ƿ񷵻���һ��ı�־  
	
	//ɾ������ϵͳ���� 
	do  
	{	
		system("cls");
		 
		int operation_tip;  //��Ϊ�ж���Ҫ�������ֲ��� 
		
		printf("      |                        IMA��Աɾ��ϵͳ                          |\n");
		printf("      |_________________________________________________________________| \n");
		printf("      |ɾ����ʽ 	                                                    |\n");
		printf("      |                        1.ͨ������ɾ��                           |\n");
		printf("      |                        2.ͨ��ѧ��ɾ��                           |\n");
		printf("      |                        3.ͨ���绰����ɾ��                       |\n");
		printf("      |                        4.����������ϵͳ                         |\n");
		printf("      |GDUT-IMA                                                         |\n");	       
		printf("      |_________________________________________________________________|\n");			
		printf("\n���������֣�1-4����");
		
		operation_tip = -1; 
		scanf("%d",&operation_tip); 
		
		//����� 
		while (operation_tip != 1 && operation_tip != 2 
				&& operation_tip != 3 && operation_tip != 4 )
		{	
			absorb_char();
			printf("���������������������֣�1-4��:");
			scanf("%d",&operation_tip); 
		} 
		
		switch (operation_tip)
		{
			case 1 : system("cls");//ͨ������ɾ�� 
					 head = del_byname(head);
					 break;
			case 2 : system("cls");//ͨ��ѧ��ɾ�� 
					 head = del_bystunum(head);
					 break;
			case 3 : system("cls");//ͨ���绰����ɾ�� 
					 head = del_byphonum(head);
					 break;
			case 4 : back_tip = 1;//������һ�� 
					 break; 
	
		}  
		

	}while (back_tip == 0);
	
	return head;
	
}
