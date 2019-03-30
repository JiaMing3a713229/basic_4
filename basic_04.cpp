//四子一丙 3a713229 
#include<stdio.h>    //載入標頭檔 
#include<stdlib.h>
int main(void){
	/*建立輸入變數TimeInput表示輸入時間(秒)
	 TimeOutput_h,TimeOutput_m,TimeOutput_s
	 表示轉換的時、分、秒*/ 
	int TimeInput,TimeOutput_h,TimeOutput_m,TimeOutput_s,num;
	printf("請輸入時間");	
	scanf("%d",&TimeInput);
	TimeOutput_h=(TimeInput/3600);   //秒除以3600等於時 
	TimeOutput_m=(TimeInput%3600)/60;//秒除以3600的餘數除以60等於分 
	TimeOutput_s=(TimeInput%3600)%60;//分除以60的餘數等於秒 
	printf("%d時%d分%d秒",TimeOutput_h,TimeOutput_m,TimeOutput_s);//顯示時間 
	system("pause");   //暫停，案任意鍵繼續   
		
		     
}
