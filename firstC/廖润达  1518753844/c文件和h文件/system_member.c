#include "head.h"
#include "info_print.h"
#include "add.h"
#include "del_byname.h"
#include "del_bystunum.h"
#include "del_byphonum.h"
#include "del_SYSTEM.h"
#include "system_member.h"
#include "change_info.h" 


INF* system_member (INF*head)
{
	int tip; //����������ʾ���� 
	do 
	{
		system("cls");
		printf("      |                        IMA��Ա����ϵͳ                          |\n");
		printf("      |_________________________________________________________________| \n");
		printf("      |                        1.��Ϣϵͳ                               |\n");
		printf("      |                        2.����������Ϣ                           |\n");
		printf("      |                        3.�˳�ϵͳ                               |\n");
		printf("      |GDUT-IMA                                                         |\n");	       
		printf("      |_________________________________________________________________|\n");
		printf("��ѡ������Ҫ�Ĳ���(��������1-3):\n");

		tip = -1;
		scanf("%d",&tip);
	
		while(tip != 1 && tip != 2 && tip != 3 )
		{	
			absorb_char();
			printf("\n���������������������֣�1-3��:");
			scanf("%d",&tip); 
		}
		
		//ϵͳ���� 
		switch (tip)
		{
			case 1 : system("cls");
					  system_info(head);
					  break;
			case 2 :  system("cls");
					  head = self_change_info(head);
					  break;
			case 3 :  tip = 3;
					  system("cls");
					  printf("�˳�ϵͳ�ɹ�...\n");
					  break;	
		}
	}while (tip != 3); 
	return head;	 
}
 	
