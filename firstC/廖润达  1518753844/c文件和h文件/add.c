#include "head.h"
#include "add.h"

 // �����Ϣ����     
 //��������ͷָ��    ��������ͷָ�� 

INF *add (INF *head)    
{
	INF *add_mem;
	int tip;//���ж��Ƿ�������
	 
	add_mem = (INF*)malloc(LEN);
	
	printf("\n��ӭ������Ϣ���ϵͳ\n");

	do
	{
		
		printf("\n����������:");
		inptst(add_mem->name,9);
		
		printf("\n������ѧ��:");
		inptst(add_mem->stu_number,12);

		printf("\n������绰����:");
		inptst(add_mem->phone_number,13);
		
		printf("\n������רҵ�Ͱ༶ (��:������1���� ):");
		inptst(add_mem->major_class,20);
				
		printf("\n��ȷ�����ڲ���(����0-4����)\n");
		printf("0.�ƶ���������   1.��Ϸ��  2.��Ʒ��   3.Ӳ����  4.��Ʋ�\n");
		printf("-----------------------------------------------------------\n");
		add_mem->dep_tip; 
		scanf("%d",&add_mem->dep_tip);
		
		while (add_mem->dep_tip!=0 && add_mem->dep_tip!=1 && add_mem->dep_tip!=2 && add_mem->dep_tip!=3 && add_mem->dep_tip!=4)
		{
			absorb_char();
			printf("\n����ȷ�ϴ����������������֣�0-4����");
			scanf("%d",&add_mem->dep_tip); 
		} 
		
		//д�벿�ŵ���Ϣ 
		switch (add_mem->dep_tip)
		{
			case 0 : strcpy(add_mem->department,"�ƶ���������");
					 break;
			case 1 : strcpy(add_mem->department,"��Ϸ��");
					 break;
			case 2 : strcpy(add_mem->department,"��Ʒ��");
					 break;
			case 3 : strcpy(add_mem->department,"Ӳ����");
					 break;
			case 4 : strcpy(add_mem->department,"��Ʋ�");
					 break;
		}
	
		//��Ա�������ȷ��	
		printf("\n��Ϊ�����밴0 �� ��Ϊ��Ա�밴1\n");
		add_mem->identity_tip = -1;   
		scanf("%d",&add_mem->identity_tip);
		
		while ( add_mem->identity_tip != 0 && add_mem->identity_tip != 1)
		{
			absorb_char();
			printf("\n���ȷ�ϴ����������������֣�0-1����");
			scanf("%d",&add_mem->identity_tip); 
		}
		 		
		if (add_mem->identity_tip== 0)
		{
			strcpy(add_mem->identity,"����");	 
		}
		else
		{
			strcpy(add_mem->identity,"��Ա"); 
		}
		
		printf("����������ӵĳ�Ա��Ϣ��\n"); 
		info_print(add_mem);
		printf("\n����������ӵ���Ϣ\n");
		
		//�ж��Ƿ������Ƿ����� 
		printf("������Ϣ�����밴1��������Ϣ���������������밴0\n");
		printf("�������ֺ��밴�»س���\n");
		scanf("%d",&tip); 
		
		if (tip == 1)//�ж��˻��Ƿ�ȷ����� 
		{	
			printf("\n�˺ų�ʼ��Ϊ��123456\n");
			printf("�����ʼ��Ϊ��123456\n");
			strcpy(add_mem->number,"123456");
			strcpy(add_mem->password,"123456");
			
			printf("��Ϣ�����ϣ������κμ��ص���ҳ��....\n");
			getch(); 
			system("cls");
			
			//����Ϣ��������
			add_mem->next = head;	
			head = add_mem;
		} 
		else 
		{		
			system("cls");
			printf("��ʼ��������....\n");
		}
	}while (tip != 1);//����ɹ��ſ��˳�ѭ��	 
			
	switch (add_mem->dep_tip)  
	{
		case 0 : n_network++;
				 break;
		case 1 : n_game++; 
				 break;
		case 2 : n_produce++;
				 break;
		case 3 : n_hardware++;
				 break;
		case 4 : n_design++;
				 break;
	} 
	n++;
	
	return head; 
	 
}
