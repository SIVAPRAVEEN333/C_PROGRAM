#include<stdio.h>
#include<string.h>


typedef struct{
	char make[20];
	int model_year;
	int id_type;
	union{
		int id_num;
		char VIN[20];
	}id;
}vehicle;

int main()
{
	
	vehicle car1,car2;
	printf("Enter the car1 make:");
	scanf("%s",car1.make);
	
	printf("\nEnter the Year of model of car1:");
	scanf("%d",&car1.model_year);
	
	
	printf("Enter the car2 make:");
	scanf("%s",car2.make);
	
	printf("\nEnter the Year of model of car2:");
	scanf("%d",&car2.model_year);
	
	printf("\nEnter the id_type of car1:");
	scanf("%d",&car1.id_type);
	printf("\nEnter the id_type of car2:");
	scanf("%d",&car2.id_type);
	
	printf("\nEnter the id_num and VIN of Car 1:");
	scanf("%d%s",&car1.id.id_num,car1.id.VIN);
	
		printf("\nEnter the id_num and VIN of Car 2");
	scanf("%d%s",&car2.id.id_num,car2.id.VIN);
	
	printf("\nThe car 1 details:");
	
	printf("The car1 Make:%s,\t The Car1 model year: %d,\t ",car1.make,car1.model_year);
	if(car1.id_type==1)
	printf("\nThe car1 id num:%d",car1.id.id_num);
	else
	printf("\nThe car1 VIN is:%s",car1.id.VIN);
	
	printf("\nThe car 2 details:");
	printf("\nThe car2 Make:%s,\t The Car2 model year: %d,\t ",car2.make,car2.model_year);
	if(car2.id_type==1)
	printf("\nThe car2 id num:%d",car2.id.id_num);
	else
	printf("\nThe car2 VIN is:%s",car2.id.VIN);
}
