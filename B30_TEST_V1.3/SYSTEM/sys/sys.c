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

void WFI_SET(void)
{
	__ASM volatile("wfi");		  
}
//�ر������ж�
void INTX_DISABLE(void)
{		  
	__ASM volatile("cpsid i");
}
//���������ж�
void INTX_ENABLE(void)
{
	__ASM volatile("cpsie i");		  
}
//����ջ����ַ
//addr:ջ����ַ
__asm void MSR_MSP(u32 addr) 
{
    MSR MSP, r0 			//������ջջֵ
    BX r14
}

//Searobotix
						


