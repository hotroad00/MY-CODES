#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main(){
float sure,ucret;
printf("lutfen telefonda kac dk konustugunuzu yaziniz:");
scanf("%f",&sure);
if(sure<=3)
{
	ucret=0.25;
}
else
{
ucret=0.25+(sure-3)*0.08;	
}
printf("Fatura tutariniz:%.2f TL",ucret);
	
	return 0;
}



