#include "head.h"
#include "inptst.h" 

void inptst (char *array,int length)
{	
	int i;
	int tip = 0;
	
	do
	{	
		for(i = 0; i < length; i++) //������� 
		{
			array[i] = '\0';
		}
		 
		for (i = 0; i < length; i++ )
		{
			char c;
			c = getchar();
	
			if( c == '\n' && i == 0 )//��ֹ��һ���ǻس��� 
			{
				break;
			}

			if ( c =='\n' && i != 0 )
			{
				tip = 1 ;
				break;
			}
		
			if ( i == length-1 )
			{
				printf("\n������������������:");
				
				//�����ַ� 
				while( c != '\n')
				{
					c = getchar();
				} 
				break; 
			}	
			array[i] = c;
		}
	}while (tip != 1);

 } 
 
void absorb_char()
{
	char c;
	while( (c = getchar())!= '\n');
} 
