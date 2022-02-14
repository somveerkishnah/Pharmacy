#ifndef PRODUCT_MENU_FILE
#define PRODUCT_MENU_FILE

#include "productName.h"


void productMenu()
{
	float result;
	int choice, num;

	printf("\n\n\n\n\n\t-----\t PRODUCT MENU \t -----\n");
	//printf("\n\n\t-----\t MENU \t -----\n");

	printf("1. View Products\n");
	printf("2. Enter New Product\n");
	
	printf("Enter your choice:");
    scanf("%d", &choice);
	
	
	switch (choice) {
	case 1: {
		productName();
		break;
	}
	case 2: {
		enterProductName();
		break;
	}

	default:
		printf("wrong Input\n");
	}
	//return 0;
}



#endif