#include "head.h"
#include "system_enter.h"
#include "inptst.h"

//ע����������˻���Ϣ����ע��
void login() 
{	
	FILE *fp; 
	INF acc;   //�û��Ľṹ 
	char psw[7]="IMA666";  //����ϵͳ��������
	char psw1[7];
	char password1[9];
	char password2[9];
	 
	 

	
	if ((fp=fopen("inf_file","rb")) == NULL)   
		//�ж��Ƿ���������ļ������� ���ִ򿪷�ʽ 
	{
		fp=fopen("inf_file","wb+");
	}
	else fp=fopen("inf_file","ab");
	
	int tip1;   //����ʾ�Ƿ�ȷ�������˺�������� 
	
	do  
	{		
		printf("��ӭ����IMA��Աע��ϵͳ\n");
		printf("��ȷ�����ڲ���(����0-4����)\n");
		printf("-----------------------------------------------------------\n");
		printf("0.�ƶ���������   1.��Ϸ��  2.��Ʒ��   3.Ӳ����  4.��Ʋ�\n");
		printf("-----------------------------------------------------------\n");
		acc.dep_tip = -1;  //��ֹδ�ɹ���������ֵδ����ѭ�� 
		scanf("%d",&acc.dep_tip);
		
		while (acc.dep_tip!=0 && acc.dep_tip!=1 && acc.dep_tip!=2 && acc.dep_tip!=3 && acc.dep_tip!=4)
		{
			absorb_char();
			printf("\n����ȷ�ϴ����������������֣�0-4����");
			scanf("%d",&acc.dep_tip); 
		} 
		
		//д�벿�ŵ���Ϣ 
		switch (acc.dep_tip)
		{
			case 0 : strcpy(acc.department,"�ƶ���������") ;
					 break;
			case 1 : strcpy(acc.department,"��Ϸ��");
					 break;
			case 2 : strcpy(acc.department,"��Ʒ��");
					 break;
			case 3 : strcpy(acc.department,"Ӳ����");
					 break;
			case 4 : strcpy(acc.department,"��Ʋ�");
					 break;
		}

		//��Ա�������ȷ��
		printf("\n��Ϊ�����밴0 �� ��Ϊ��Ա�밴1\n");
		acc.identity_tip = -1;   
		scanf("%d",&acc.identity_tip);
		
		while (acc.identity_tip !=0 && acc.identity_tip!=1)
		{
			absorb_char();
			printf("\n���ȷ�ϴ����������������֣�0-1����");
			scanf("%d",&acc.identity_tip); 
		} 
		
		if (acc.identity_tip == 0)
		{	
	
			int cnt =2;
			while(1)
			{
				printf("\n�����벿��ע�������ע������:");
				inptst(psw1,7);
				
				if(strcmp(psw1,psw) == 0)
				{
					strcpy(acc.identity,"����");
					printf("\n�������ɺ����Ĳ���....\n");
					break;
				}
				
				else 
				{	
					if(cnt == 0)
					{
						printf("\n�밴��������˳�ϵͳ...\n");
						getch();
						exit(0); 
					}
						printf("\n������������������%d��\n",cnt--);
				}
			}		 
		}
		else
		{
			strcpy(acc.identity,"��Ա"); 
		}
		
		//�˺�����������ȷ��
   	 	//�˻�¼�� 			
		printf("\n�����������˺ţ��벻Ҫ����8λ��:");
		inptst(acc.number,9); 
		
		while(1)
		{
			printf("\n�������������루�벻Ҫ����8λ��:");
			inptst(password1,9);
			printf("���ٴ������������룺");
			inptst(password2,9);
			
			if (strcmp(password1,password2) == 0)
			{	
				strcpy(acc.password,password1);
				printf("\n����ȷ�ϳɹ�...\n");
				break;
			}
			else printf("\n�����������벻��ͬ����������\n"); 
		}
		
		 		
		//�ض�����Ϣ 
		printf("\n����Ϊ�����˻���Ϣ:\n"); 
		printf("�˺�:%s\n",acc.number);
		printf("����:%s\n",acc.password);
		printf("����:%s\n",acc.department);
		printf("���:%s\n",acc.identity);
		printf("\n���������˻���Ϣ:\n");
		printf("�˻������Ƿ񳬹�8λ\n");
		printf("�˻������Ƿ���ԭ����ͬ\n"); 
	
		
		//�˻���Ϣȷ��
	
		printf("\n������Ϣ�����밴1��������Ϣ���������������밴0\n");
		tip1 = -1;
		scanf("%d",&tip1);				
		 
		
		//�����������Ĵ���		
		while (tip1 != 1 && tip1 != 0)
		{	
			absorb_char();
			printf("�������������֣�1 �� 0��");
			scanf("%d", &tip1); 
		} 
		
		//������Ϣ 
		if(tip1 == 0)
		{
			system("cls");
			printf("��ʼ��������....\n"); 			
		} 

	}while (tip1 != 1);//����ɹ��ſ��˳�ѭ��
	
	//������Ϣ������
	system("cls"); 
	printf("�˺�ע����ϣ����ڽ�����Ϣ����....\n");
	
	int tip2;     //��Ϊ������Ϣ�����Ƿ�ȷ����ϵı�־ 
			
	do 
	{ 
		printf("\n����������:");
		inptst(acc.name,9);
		
		printf("\n������ѧ��:");
		inptst(acc.stu_number,12);

		
		printf("\n������绰����:");
		inptst(acc.phone_number,13);
		
		printf("\n������רҵ�Ͱ༶ (��:������1���� ):");
		inptst(acc.major_class,20);
		
		//�ض�����Ϣ���˲� 
		printf("\n������������Ϣ:\n");
		printf("����:%s\n",acc.name); 
		printf("ѧ��:%s\n",acc.stu_number);  
		printf("�绰����:%s\n",acc.phone_number); 
		printf("רҵ�Ͱ༶:%s\n",acc.major_class); 
		printf("\n�������ĸ�����Ϣ�Ƿ���ԭ��������ͬ\n");
		
		//�˻���Ϣȷ��
		printf("\n����1ȷ����Ϣ������ȷ\n����0����������\n");
		tip2 = -1;  
		scanf("%d",&tip2);
		
		//�����		
		while ( tip2 != 1 && tip2!= 0 )
		{	
			absorb_char();
			printf("����������1ȷ��������ȷ��������0������������:");
			scanf("%d", &tip2); 
		}
		if( tip2 == 0) 
		{	
			system("cls");
			printf("��ʼ��������....\n"); 
		}  
		
	} while (tip2 != 1);//��Ϊ�ж��Ƿ�ȷ���������
			
	printf("��Ϣ¼����ϣ������κμ����˳��������µ���....\n");
	getch(); 
	system("cls");
			
	//д���ļ� 
	fwrite(&acc,LEN,1,fp);
	fclose(fp);	
	
	//�˳�ϵͳ 
	exit(0);
	 
						// OK �������� 
	
}

//���ܣ���¼����    
//����һ�������ͷָ�� ������¼�ߵ����   ������ϵͳ���� ������ϵͳ  ��Աϵͳ����
int  enter_in(INF *p)   
{	
	char enter_number[9];
	char enter_password[9];
	int tip = 0;   //��Ϊ��ʾ��ȷ���Ƿ�����ɹ�
	int cnt = 0;   //�����������
	INF *p1 ; 
	p1 = p;  //��������ĵ�ַ
	
	printf("��ӭ����IMA��¼ϵͳ"); 
	
	do    //ѭ�����뵱����ɹ��˳�ѭ�������������   ����������������������˳�����      
	{
		//�����˺�
		printf("\n�����������˺ţ�") ; 
		inptst(enter_number,9);
		
		//��������
		printf("\n�������������룺"); 
		inptst(enter_password,9);
		 
		//��������  ȷ���˺������Ƿ���ȷ 
		
		p = p1;//ʹp1ָ��λ�ûص�ԭ����λ�� 
		
		do
		{
			if (strcmp(enter_number,p->number) == 0 && strcmp(enter_password,p->password) == 0 )
			{
				printf("��¼�ɹ�...\n");
				printf("�밴��������������ϵͳ\n");
				getch();
				tip =  1; 
				p->oloff = 1 ;  //��ʾ����״̬                                
				break;  
			 }
			 p = p->next; 
		}while( p != NULL );
		cnt ++;

		//�����Ĵ���	
		if (tip == 0 && cnt!= 3)//ֻ�����ε��������  3�������˳���½ϵͳ 
		{
			printf("�˺Ż��������,������%d�λ���\n",3-cnt); 
		 }
		if (tip == 0 && cnt == 3)
		{
			printf("��¼�����밴��������˳���½ϵͳ\n");
			getch();
			exit(1);
		}
	}while (tip == 0);
							//OK������ 
	return (p->identity_tip);     
}

//���ܣ���½ϵͳ 
//��������ͷָ��  ������½����� 
int system_enterin(INF *head)
{
	system("cls");
	
	printf("      		|                       IMA��Ա�����¼ϵͳ                       |\n");
	printf("      		|_________________________________________________________________| \n");
	printf("      		|                                                                 |\n");
	printf("      		|                                                                 |\n");
	printf("      		|          1.��¼                               2.ע��            |\n"); 	
	printf("      		|          3.�޸�����                                             |\n");
	printf("	        |GDUT-IMA                                 �������ʹ��Ч�����ѣ�|\n");	       
	printf("      		|_________________________________________________________________|\n");
	printf("��ѡ������Ҫ�Ĳ���(��������1-3):\n");
	
	//���ֵ�¼ϵͳ�Ĳ���  
	int tip;
	tip = -1; 
	scanf("%d",&tip);
	
	//�����Ĵ��� 
	while (tip != 1 && tip != 2 && tip != 3)
	{	
		absorb_char();
		printf("\n�������������֣�1-3��\n");
		scanf("%d",&tip); 
	}
	 
	//��¼���� 
	if ( tip == 1)
	{	
		//�õ���¼�ߵ����   Ϊ�����ķ�ϵͳ����׼�� 
		int id ;
		id = enter_in(head); //����head ������¼����� 
		return id; 
	}
	
	//ע����� 
	if( tip == 2)
	{	
		system("cls");
		login(); 
	}
	
	//�޸����� 
	if( tip == 3)
	{	
		system("cls"); 
		INF* p;
		p = head;
		char number1[9];
	
		printf("��ӭ���������޸�ϵͳ\n"); 
		printf("�����������˺ţ�");
		inptst(number1,9);
		
		while(p != NULL)
		{
			if(strcmp(number1,p->number) == 0)
			{
				printf("���ҵ���Ӧ�˺�");
				change_psw (p,head);  
			}
			p = p->next;
		} 
		printf("δ�ҵ���Ӧ�˺���Ϣ,����������˳�ϵͳ");
		getch(); 
		exit(0); 
		
	}	
}
