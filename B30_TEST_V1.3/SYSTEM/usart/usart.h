#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "sys.h" 

/////////////////////////////////////////////////////////////////////////////////////////		 
//B30 ��ȴ�������������
//�����壺SeaRobotix STM32 Test Board
//�ٷ���վ��http://searobotix.com
//�޸�����: 2020/12/21
//���̰汾��V1.3
//��ϵ���䣺info@searobotix.com
//�ر���������������Դ�����磬ʹ�������ге�һ�к����
/////////////////////////////////////////////////////////////////////////////////////////	

#define USART_REC_LEN  			200  	      //�����������ֽ��� 200
#define EN_USART1_RX 			  1		        //ʹ�ܣ�1��/��ֹ��0������1����
	  	
extern u8  USART_RX_BUF[USART_REC_LEN]; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART_RX_STA;         		    //����״̬���	
//����봮���жϽ��գ��벻Ҫע�����º궨��
void uart_init(u32 bound);
#endif



// Searobotix			
