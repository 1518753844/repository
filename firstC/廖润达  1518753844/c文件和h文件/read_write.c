//������� �����ļ����ݶ������ڳ������� 
// ����ͷָ��  �������ͷָ��

#include "head.h"
#include "read_write.h"
#define LEN sizeof(INF)
 
INF *read_in (INF *head) 
{	
	FILE *fp; 	
	INF test;//�ж�ע����Ƿ�Ϊ�յĲ��Խṹ�� 
	
   	if ((fp=fopen("inf_file","rb")) == NULL || (fread(&test,LEN,1,fp)) == 0 ) //�ж��Ƿ�����ע��� �� ע������Ƿ�������   �� �����ע��ϵͳ 
	{
		printf("ע���û��ע����Ϣ,�밴�����ǰ��ע��ϵͳ\n");
		getch();
		system("cls");
		login();
	} 
	else
	{
		INF*p1,*p2;//����������ָ����� 
		head = NULL;
				
		rewind(fp); 
	
		while ( feof(fp) == 0 )//������ �����ļ���� 
	{
		n++;
		if (n == 1)
		{
			p1 = p2 =(INF*)malloc(LEN); 
			fread(p1,LEN,1,fp);
			head = p1;
		 } 
		else
		{
			p2->next = p1;
		}
		p2 = p1 ;
		
		//ͳ��ÿ�����ŵ�����		
		switch (p1->dep_tip)  
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
		
		p1 = (INF*)malloc(LEN);
		fread(p1,LEN,1,fp); 
	}
	
	p2->next = NULL;
	
	}
	
	fclose(fp);
	return (head);
	    				//OK! 
}

//д�����������������д���ļ����� 
//   ���������ͷָ�� 
void write_out(INF *head)   
{
	FILE *fp; 		
	INF *p = head;  //д������ָ��	
	

	fp = fopen("inf_file","wb+");
	
	while (p != NULL)//д����� 
	{
		fwrite(p,LEN,1,fp);
		p = p->next;
	} 
	fclose(fp);
	   				//OK�� 
}
