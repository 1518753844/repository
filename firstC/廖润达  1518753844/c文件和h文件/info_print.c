#include <stdio.h>
#include "head.h"
#include "info_print.h"

void info_print (INF *p)  //��Ϣ��ʾ   ����һ���ṹ 
{
	printf("\n����:%s\n",p->name);
	printf("ѧ��:%s\n",p->stu_number);
	printf("�绰����:%s\n",p->phone_number);
	printf("רҵ�Ͱ༶��%s\n",p->major_class);
	printf("����:%s\n",p->department);
	printf("���:%s\n",p->identity);
	
}
