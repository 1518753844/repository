#include "head.h"
#include "read_write.h" 
#include "change_psw.h"

//���ܣ��޸�����
//����һ���ṹָ�� ����������ָ�� 
INF* change_psw (INF*p,INF*head)
{
	char old_psw[9];//������ 
	char new_psw[9];//�״����������� 
	char new_psw1[9];//ȷ������
	int cnt = 3; 
	
	
	
	while (cnt > 0)
	{   

		printf("\n������ԭ���룺");
		inptst(old_psw,9);
		
		//���������� 
		if(strcmp(old_psw,p->password) == 0)
		{	
			printf("ԭ����������ȷ\n");
			 
			int tip = 0;
			do
			{
				printf("\n�����������룺");
				inptst(new_psw,9);
			 
				printf("\n�ٴ����������룺");
				inptst(new_psw1,9);
				
				if(strcmp(new_psw,new_psw1) == 0)
				{
					tip = 1;
					strcpy(p->password,new_psw1);
				}
				else 
				{
					printf("\n�����������벻ͬ������������\n");
				}
			}while (tip == 0);
			
			system("cls"); 
			printf("�����޸���ϣ��밴��������˳���ϵͳ�����µ�¼.....");
			write_out(head);
			getch(); 
			printf("\n\n");
			exit(0);
			
		} 
		else
		{
		 	printf("\nԭ�����������,������%d�λ�����������",cnt);
			cnt--; 
		}
		 
		 //�����Ĵ��� 
		if ( cnt == 0)
		{
			printf("\n��������,�밴��������˳�ϵͳ.");
			getch(); 
			exit(0); 
		} 
	}
	return p; 
	
}
