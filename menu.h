// C program to illustrate
// Menu-Driven program
// using Switch-case

#include "productMenu.h"
#include "supplierMenu.h"

int menu()
{
	float result;
	int choice, num;

	printf("\n\n\n\n\n\t-----\t WELCOME TO ROYAL PHARMACY \t-----\n");
	printf("\n\n\t-----\t MENU \t -----\n");

	printf("1. Products\n");
	printf("2. Supplier\n");
	
	printf("Enter your choice:");
	scanf("%d", &choice);
	//choice = input();
	
	switch (choice) {
	case 1: {
		productMenu();
		break;
	}
	case 2: {
		//call supplier menu
		supplierMenu();
		break;
	}
	default:
		printf("wrong Input\n");
	}
	return 0;
}
