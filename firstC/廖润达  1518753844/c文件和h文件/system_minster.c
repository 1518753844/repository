#include "head.h"
#include "info_print.h"
#include "add.h"
#include "del_byname.h"
#include "del_bystunum.h"
#include "del_byphonum.h"
#include "del_SYSTEM.h"
#include "system_minster.h"
#include "system_info.h"
#include "change_info.h"
#include "memberinfo_change.h" 



INF* system_minister (INF*head)
{
	int tip; //����������ʾ���� 

	do 
	{
		system("cls");	
		printf("      |                        IMA��������ϵͳ                          |\n");
		printf("      |_________________________________________________________________| \n");
		printf("      |                        1.��Ϣϵͳ                               |\n");
		printf("      |                        2.���Ĳ�Ա��Ϣ                           |\n");
		printf("      |                        3.����������Ϣ                           |\n");
		printf("      |                        4.���Ӳ�Ա                               |\n");
		printf("      |                        5.ɾ����Ա                               |\n");
		printf("      |                        6.��Ա����ת������                       |\n");
		printf("      |                        7.�˳�ϵͳ     	                        |\n");	
		printf("      |GDUT-IMA                                                         |\n");	       
		printf("      |_________________________________________________________________|\n");
		printf("��ѡ������Ҫ�Ĳ�������������1-7��:\n"); 
		 
		tip = -1;
		scanf("%d",&tip);
		while(tip <1 && tip >8)
		{	
			absorb_char();
			printf("\n���������������������֣�1-8��\n");
			scanf("%d",&tip); 
		}
		
		//ϵͳ���� 
		switch (tip)
		{
			case 1 : system("cls");
					 system_info(head);
					 break;
			case 2 : system("cls");
					 head = memberinfo_change (head);
					 break;
			case 3 : system("cls");
					 head = self_change_info(head);
					 break;
			case 4 : system("cls");
					 head = add (head);
					 break;
			case 5 : system("cls");
					 head = del_SYSTEM (head);
					 break;
			case 6 : system("cls");
					 dep_change(head);
					 break;
			case 7 : tip = 8;
					 system("cls");
					 printf("�˳�ϵͳ�ɹ�...\n");
					 break;	
		}
	}while (tip != 8); 
	return head;	 
}
 	
