#ifndef _HEAD_H_
#define _HEAD_H_

#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define LEN sizeof(INF)

extern int n; //��¼IMA������
extern int n_network;  //��¼�ƶ���������������
extern int n_game;		//��¼��Ϸ��������
extern int n_produce;	//��¼��Ʒ��������
extern int n_hardware;	//��¼Ӳ����������
extern int n_design; 	//��¼��Ʋ�������


typedef struct account    
{		

	
	//������Ϣ :���� ѧ�� �绰 ���� 
	char name[9];
	char stu_number[12];
	char phone_number[13];	
	char identity[10];
	char major_class[20]; 
	char department[20];
	

	
	//�˻���Ϣ ���˻� ���� 	 
	char number[9];
	char password[9];
	
	//��ʶ��Ϣ    
	int identity_tip;        // 0Ϊ��Ա   1Ϊ����
	int dep_tip;     // 0Ϊ�ƶ���������  1Ϊ��Ϸ��  2Ϊ��Ʒ��   3ΪӲ����  4Ϊ��Ʋ� 
	int oloff;   //    �жϲ���ϵͳ���û�  1Ϊ����ʹ�õ��û� 

	struct account *next;    
	
 }INF;
 
#endif
