#ifndef PRODUCT_NAME_FILE
#define PRODUCT_NAME_FILE

void productName()
{
   FILE * pdtptr;
   int ch;

   pdtptr = fopen("productName.txt", "r");
   //fopen("C:/productName.txt", "r");
   //fopen("productName.txt", "r");
   if  (pdtptr == NULL) 
          printf("file not present\n");
   else
       printf("file opened in read mdode\n\n");

   while((ch = fgetc(pdtptr))!= EOF)
   {
      printf ("%c", ch);
   }
}

void enterProductName()
{
   char name[50];
   int qty, i, num;

   printf("Enter number of products you want to add to the file: ");
   scanf("%d", &num);

   FILE *fptr;
   
   fptr = (fopen("productName.txt", "a"));
   
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("For Product%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter quantity: ");
      scanf("%d", &qty);

      fprintf(fptr,"\n%s \t\t%d", name, qty);
   }

   fclose(fptr);
   //return 0;
}

#endif