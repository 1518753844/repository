#include "head.h"
#include "dep_change.h"
#include "info_print.h"
#include "search.h"




INF* dep_change(INF *head)
{	
	int tip;
	INF *p;
	printf("��ӭ���������޸�ϵͳ\n");
	printf("\n���Ȳ�ѯ������Ҫ�޸ĵĳ�Ա����Ϣ��\n");
	printf("����1ͨ���������ң�����0ͨ��ѧ�Ų���\n");
	tip = -1; 
	scanf("%d",&tip);
	
	//����� 
	while(tip != 1 &&tip != 0)
	{	
		absorb_char();
		printf("\n�������������֣�0��1��\n");
		scanf("%d",&tip); 
	}
	if(tip == 1)
	{
	 	p = search_byname(head);
	}
	if(tip == 0)
	{
		p = search_bystunum(head);
	}
	
	
	if(p != NULL)
	{
		int tip2;//����ԭ�Ȳ��Ŷ�Ӧ��
		tip2 = p->dep_tip;
		int tip1; 
		
		printf("\n\n����Ҫ���ó�Ա��%s����ת�����β���\n",p->department);
		
		printf("0.�ƶ���������   1.��Ϸ��  2.��Ʒ��   3.Ӳ����  4.��Ʋ�\n");
		printf("-----------------------------------------------------------\n");	
		printf("\(����0-4����)\n"); 
		p->dep_tip = -1;
		scanf("%d",&p->dep_tip);
		
		while(p->dep_tip!=0 && p->dep_tip!=1 && p->dep_tip!=2 && p->dep_tip!=3 &&p->dep_tip!=4)
		{	
			absorb_char();
			printf("\n����ת�������������������֣�0-4��\n");
			scanf("%d",&p->dep_tip); 
		}
		
		printf("\n������1ȷ�ϲ���ת��������0ȡ��ת��\n");
		tip1 = -1;
		scanf("%d",&tip1);
		while(tip1!=0 && tip1!=1)
		{
			absorb_char();
			printf("\nȷ��ʧ�ܣ����������루1��0��\n");
			scanf("%d",&tip1); 
		}
		
		
		//������Ĳ��ż�һ 
		switch (p->dep_tip)
		{
			case 0 : strcpy(p->department,"�ƶ���������");
					 n_network++;
					 break;
			case 1 : strcpy(p->department,"��Ϸ��");
					 n_game++;
					 break;
			case 2 : strcpy(p->department,"��Ʒ��");
					 n_produce++;
					 break;
			case 3 : strcpy(p->department,"Ӳ����");
					 n_hardware++;
					 break;
			case 4 : strcpy(p->department,"��Ʋ�");
					 n_design++;
					 break;
		}
		//��ǰ����������һ 
		switch (tip2)
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
		printf("\n�밴��������˳�\n");
		getch();
	}
	return 0;
	
	 
 } 
