#include <stdio.h>

main(){
	
	float basesalary, grosssalary, hrapercentage, dapercentage, tapercentage, hraamount, daamount, taamount;
	
	printf("enter the base salary:");
	scanf("%f",&basesalary);
	
	printf("enter the hra percentage:");
	scanf("%f",&hrapercentage);
	
	printf("enter the da percentage:");
	scanf("%f",&dapercentage);
	
	printf("enter the ta percentage:");
	scanf("%f",&tapercentage);
	
	hraamount = (hrapercentage/100)*basesalary;
	daamount = (dapercentage/100)*basesalary;
	taamount = (tapercentage/100)*basesalary;
	
	grosssalary = basesalary + hraamount + daamount + taamount;
	
	printf("gross salary : %.2f", grosssalary);
}
