#include "head.h"
#include "change_info.h"
#include "change_psw.h"



//���ܣ����޸ĵ�ѡ����в���
//����: һ���ṹ��ָ�� ��  ͷָ�� ������Ӧ������  ����:  �����ָ�� 
INF* info_change_select(INF *p,INF *head,int i) 
{	
	system("cls");
	int flag = -1;    //���Ƿ�ȷ���޸���Ϣ�ı�־ 
	
	//��Ӧ����
	switch(i)
	{	//�޸����� 
		case 1:	{
					char change_name[9];
					//���������� 
					printf("�˻�ԭ������ϢΪ:%s",p->name);
					printf("\n��������������Ϣ:");
					inptst(change_name,9);
					
					//ȷ�Ϲ��� 
					printf("\n�Ƿ�ȷ�Ͻ� %s ��Ϊ %s ",p->name,change_name);
					printf("\nȷ��������1,ȡ���밴0\n");
					scanf("%d",&flag);
					
					//ȷ�Ϲ��� 
					while( flag != 1 && flag != 0 )
					{	
						absorb_char();
						printf("ȷ��ʧ��,����������(0��1):");
						scanf("%d",&flag);
					}
					
					//ȷ����� 
					if ( flag == 1 )
					{
						strcpy(p->name,change_name);
						printf("\n�޸ĳɹ�!�밴��������ص���ҳ��\n");
						getch();
					}
					
					if ( flag == 0 )
					{
						printf("\nȡ���ɹ�!�밴��������ص���ҳ��\n");
						getch(); 
					}  
					break;
			
				}
				
		//�޸�ѧ�� 
		case 2: {
					char change_stunum[12];
					//���������� 
					printf("�˻�ԭѧ����ϢΪ:%s",p->stu_number);
					printf("\n��������ѧ����Ϣ:");
					inptst(change_stunum,12);
					
					//ȷ�Ϲ��� 
					printf("\n�Ƿ�ȷ�Ͻ� %s ��Ϊ %s ",p->stu_number,change_stunum);
					printf("\nȷ��������1,ȡ���밴0\n");
					scanf("%d",&flag);
									
					while( flag != 1 && flag != 0 )
					{	
						absorb_char();
						printf("ȷ��ʧ��,����������(0��1):");
						scanf("%d",&flag);
					}
					

					//ȷ����� 
					if ( flag == 1 )
					{
						strcpy(p->stu_number,change_stunum);
						printf("\n�޸ĳɹ�!�밴��������ص���ҳ��\n");
						getch();
					}
					
					if ( flag == 0 )
					{
						printf("\nȡ���ɹ�!�밴��������ص���ҳ��\n");
						getch(); 
					}  
					break;
				}
				
				
				
		//�޸ĵ绰���� 
		case 3:	{
					char change_phonum[13];
					//���������� 
					printf("�˻�ԭ�绰����Ϊ:%s",p->phone_number);
					printf("\n�������µ绰����:");
					inptst(change_phonum,13);
					
					//ȷ�Ϲ��� 
					printf("\n�Ƿ�ȷ�Ͻ� %s ��Ϊ %s ",p->phone_number,change_phonum);
					printf("\nȷ��������1,ȡ���밴0\n");
					scanf("%d",&flag);
					
					while( flag != 1 && flag != 0 )
					{	
						absorb_char();
						printf("ȷ��ʧ��,����������(0��1):");
						scanf("%d",&flag);
					}
					
					//ȷ����� 
					if ( flag == 1 )
					{
						strcpy(p->phone_number,change_phonum);
						printf("\n�޸ĳɹ�!�밴��������ص���ҳ��......\n");
						getch();
					}
					
					if ( flag == 0 )
					{
						printf("\nȡ���ɹ�!�밴��������ص���ҳ��......\n");
						getch(); 
					}  
					break;
				} 
				
		//�޸�רҵ�Ͱ༶
		case 4: {
					char change_majorclass[20];
					//���������� 
					printf("�˻�ԭרҵ�Ͱ༶Ϊ:%s",p->major_class);
					printf("\n��������רҵ�Ͱ༶��Ϣ:");
					inptst(change_majorclass,20);
					
					//ȷ�Ϲ��� 
					printf("\n�Ƿ�ȷ�Ͻ� %s ��Ϊ %s ",p->major_class,change_majorclass);
					printf("\nȷ��������1,ȡ���밴0\n");
					scanf("%d",&flag);
					
					while( flag != 1 && flag != 0 )
					{	
						absorb_char();
						printf("ȷ��ʧ��,����������(0��1):");
						scanf("%d",&flag);
					}
					
					//ȷ����� 
					if ( flag == 1 )
					{
						strcpy(p->major_class,change_majorclass);
						printf("\n�޸ĳɹ�!�밴��������ص���ҳ��......\n");
						getch();
					}
					
					if ( flag == 0 )
					{
						printf("\nȡ���ɹ�!�밴��������ص���ҳ��......\n");
						getch(); 
					}  
					break;
				}
				
				
		//�޸��˺� 
		case 5: {
					char change_number[9];
					//���������� 
					printf("�˻�ԭ�˺�Ϊ:%s",p->number);
					printf("\n���������˺�:");
					inptst(change_number,9);
					
					//ȷ�Ϲ��� 
					printf("\n�Ƿ�ȷ�Ͻ� %s ��Ϊ %s ",p->number,change_number);
					printf("\nȷ��������1,ȡ���밴0\n");
					scanf("%d",&flag);
					
					while( flag != 1 && flag != 0 )
					{	
						absorb_char();
						printf("ȷ��ʧ��,����������(0��1):");
						scanf("%d",&flag);
					}
					
					//ȷ����� 
					if ( flag == 1 )
					{
						strcpy(p->number,change_number);
						printf("\n�޸ĳɹ�!�밴��������ص���ҳ��......\n");
						getch();
					}
					
					if ( flag == 0 )
					{
						printf("\nȡ���ɹ�!�밴��������ص���ҳ��......\n");
						getch(); 
					}  
					break;
				}
				
		//�޸�����
		case 6 : change_psw(p,head);
				 break;			 				
	 } 
}


//����:������Ϣ�޸�
//���룺����ͷָ��   ����������ͷָ�� 
INF* self_change_info (INF *head)
{
	INF *p;  
	p = head;
	int tip ;//��ϵͳ��������ʾ
		
	system("cls");
	
	
	
	//�������� 
	while (p != NULL)
	{
		if (p->oloff == 1)
		{	
				
			system("cls");
			printf("��ӭ����������Ϣ�޸�ϵͳ.\n"); 
			printf("       _________________________________________________________________ \n");
			printf("      |       1.�޸�����          2.�޸�ѧ��       3.�޸ĵ绰����       |\n");
			printf("      |       4.�޸�רҵ�Ͱ༶    5.�޸��˺�       6.�޸�����           |\n");
			printf("      |GDUT-IMA                                                         |\n");	       
			printf("      |_________________________________________________________________|\n");
			printf("�����������Ӧ�������֣�1-7��:");
			tip = -1;
			scanf("%d",&tip);
			
			//����� 
			while(tip != 1 && tip != 2 && tip != 3 && tip != 4 && tip != 5 && tip != 6 && tip != 7 )
			{	
				absorb_char();
				printf("��������������������֣�1-7��");
				scanf("%d",&tip); 
			}
			
			//ѡ����� 
			if( tip != 7)
			{
				p = info_change_select(p,head,tip);
			}
			break;
		}
		p = p->next;
    }

		
 	return head;
} 
