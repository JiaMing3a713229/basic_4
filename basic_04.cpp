/* 
�D�ئW��:�@�~04: �N��J������ഫ���ɡB���B����X�A
�s�@:�f�a�� 
�ק�/�������:2019/4/7 
*/
#include<stdio.h>    //���J���Y�� 
#include<stdlib.h>
int main(void){
	/*�إ߿�J�ܼ�TimeInput��ܿ�J�ɶ�(��)
	 TimeOutput_h,TimeOutput_m,TimeOutput_s
	 ����ഫ���ɡB���B��*/ 
	int TimeInput,TimeOutput_h,TimeOutput_m,TimeOutput_s,num;
	
	printf("�п�J�ɶ�");	
	scanf("%d",&TimeInput);
	TimeOutput_h=(TimeInput/3600);   //���H3600����� 
	TimeOutput_m=(TimeInput%3600)/60;//���H3600���l�ư��H60����� 
	TimeOutput_s=(TimeInput%3600)%60;//�����H60���l�Ƶ���� 
	
	printf("%d��%d��%d��",TimeOutput_h,TimeOutput_m,TimeOutput_s);//��ܮɶ� 
	
	return 0;
	system("pause");   //�Ȱ��A�ץ��N���~��   	
		     
}
