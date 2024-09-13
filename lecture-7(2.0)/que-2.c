#include <stdio.h>

main(){
    
	int selectLanguage, selectRechargepack;
	
	printf(" press 1 for English \n press 2 for Hindi \n press 3 for Gujarati \n");
	
	printf(" please selet the language:");
	scanf("%d",&selectLanguage);
	
	switch(selectLanguage){
		
		case 1:
			printf("\n English \n");
			
			printf("\n Press 1 for Internet Recharge \n Press 2 for Top-up Recharge \n Press 3 for Special Recharge \n");
			break;
			
		case 2:
			printf("\n Hindi \n");
			
			printf(" Internet Recharge ke liye 1 dabaiye \n Top-up Recharge ke liye 2 dabaiye \n Special Recharge ke liye 3 dabaiye \n");
			break;
			
		case 3:
		    printf("\n Gujarati \n");
		    
		    printf(" Internet Recharge mate 1 dabavo \n Top-up Recharge mate 2 dabavo \n Special Recharge mate 3 dabavo \n");
		    break;
		    
		default:
		   printf("\n No language is selected");    
	}	
	
	printf(" Please select recahrge pack: ");
	scanf("%d",&selectRechargepack);
	
	switch(selectRechargepack){
		case 1:
			printf("\n Internet recharge pack");
		break;
		
		case 2:
			printf("\n Top up pack");
		break;
		
		case 3:
			printf("\n Special pack");
		break;
		
		default:
			printf(" No recahrge pack is selected");	
	}
}
