#include "head.h" 
#include "all_print.h"

//������г�Ա������Ϣ  �Լ���������
//���������ͷָ�� 
void all_print (INF *head)
{
	int tip = 0;   //����ͬ��������ı�־  0Ϊ�ƶ���������  1Ϊ��Ϸ��  2Ϊ��Ʒ��   3ΪӲ����  4Ϊ��Ʋ�   

	
	//����Ҫ�õ��������� 
	system("cls");
	printf("��ӭ��������Ϣ��\n");
	boundary(43);
	printf("IMA������:%d��\n",n);
	 
	//��Ҫ�õ���������
	//zhi's 
	while(tip < 5)
	{	
		INF *p;    //������������ָ��
		p = head ;
		
		switch(tip)
		{	
			//�ƶ��������� 
			case 0 : boundary(71);
					 printf("�ƶ���������                                          ����:%d",n_network);
					 boundary(71);
					 printf("����        ѧ��           רҵ�Ͱ༶      �绰����           ���      \n");
					 break;	
			//��Ϸ�� 
			case 1 : boundary(71);
					 printf("��Ϸ��                                                ����:%d",n_game);
					 boundary(71);
					 printf("����        ѧ��           רҵ�Ͱ༶      �绰����           ���      \n");
					 break;	
			//��Ʒ��
			case 2 : boundary(71);
					 printf("��Ʒ��                                                ����:%d",n_produce);
					 boundary(71);
					 printf("����        ѧ��           רҵ�Ͱ༶      �绰����           ���      \n");
					 break;	
			//Ӳ���� 
			case 3 : boundary(71);
					 printf("Ӳ����                                                ����:%d",n_hardware);
					 boundary(71);
					 printf("����        ѧ��           רҵ�Ͱ༶      �绰����           ���      \n");
					 break;			 
			//��Ʋ� 
			case 4 : boundary(71);
					 printf("��Ʋ�                                                ����:%d",n_design);
					 boundary(71);	
					 printf("����        ѧ��           רҵ�Ͱ༶      �绰����           ���      \n");
					 break;		
		} 
		

			 
			 
		do
		{
			//��Ա��Ϣ���
			if ( p->dep_tip == tip )
			{
				printf("%-12s%-15s%-16s%-19s%-10s\n",p->name,p->stu_number,p->major_class,p->phone_number,p->identity);
					
			}
			
			
			p = p->next ;
		}while (p != NULL);
		
		printf("\n\n");
		 
		//����һ������� 
		tip++; 
		
	} 
	
	printf("\n�������������һ��"); 
	getch();
	
}

void boundary(int cnt)
{	
	int i;
	printf("\n");
	for(i = 0; i < cnt; i++ )printf("_");
	printf("\n");
}
