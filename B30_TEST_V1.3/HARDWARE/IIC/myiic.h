#ifndef __MYIIC_H
#define __MYIIC_H
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
   	   		   
//IO��������, 
#define SDA_IN()  {GPIOC->CRH&=0XFFFF0FFF;GPIOC->CRH|=8<<12;} // PC11 = SDA ��Ϊ����ʱ 
#define SDA_OUT() {GPIOC->CRH&=0XFFFF0FFF;GPIOC->CRH|=3<<12;} // PC11 = SDA ��Ϊ���ʱ

//IO��������	 
#define IIC_SCL    PCout(10) //SCL = PC10
#define IIC_SDA    PCout(11) //SDA = PC11 ��Ϊ���ʱ
#define READ_SDA   PCin(11)  //SDA = PC11 ��Ϊ����ʱ
 
//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);								//����IIC��ʼ�ź�
void IIC_Stop(void);	  						//����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);					//IIC����һ���ֽ�
u8 IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
u8 IIC_Wait_Ack(void); 							//IIC�ȴ�ACK�ź�
void IIC_Ack(void);									//IIC����ACK�ź�
void IIC_NAck(void);								//IIC������ACK�ź�

void IIC_Write_One_Byte(u8 daddr,u8 addr,u8 data);
u8 IIC_Read_One_Byte(u8 daddr,u8 addr);	  

#endif

// Searobotix














