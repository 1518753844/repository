#include "head.h"
#include "system_enter.h"
#include "read_write.h"
#include "system_minster.h"
#include "system_member.h"




int n = 0;    			//��¼IMA������
int n_network = 0;     	//��¼�ƶ���������������
int n_game = 0;		   	//��¼��Ϸ��������
int n_produce = 0;	   	//��¼��Ʒ��������
int n_hardware = 0;	   	//��¼Ӳ����������
int n_design = 0;   	//��¼��Ʋ�������



int main()
{
	INF*head;   
	int flag;   //����ʶ����   ���ֵ�¼���ǲ������ǲ�Ա  ����ϵͳ���� 
	
	//�������� 
	head = read_in(head);	
	//��¼ϵͳ
	flag = system_enterin(head);
	
	int arr[10];
	
	
 
	if ( flag == 0 ) 
	{
		//��������ϵͳ����
		head = system_minister(head); 
	} 
	if ( flag == 1 )
	{
		//��Ա��������
		head = system_member(head); 
	}
	write_out(head);
	return 0; 
}
