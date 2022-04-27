#include<stdio.h>
main()
{
   int num;
   printf("Today's menu is \n:1.Briyani \n2.Parotta \n3.Chicken fried rice \n4.Burger \n5.Pizza\n\nEnter what you want:\n");
   scanf("%d", &num);
   switch( num )
   {
   case 1:
     printf("You ordered Briyani.\n Price - Rs249");
     break;
   case 2:
     printf("You ordered Parotta.\n Price - Rs49");
     break;
   case 3:
     printf("You ordered Chicken fried rice.\n Price - Rs179");
     break;
   case 4:
     printf("You ordered Burger.\n Price - Rs129");
     break;
   case 5:
     printf("You ordered Pizza.\n Price - 239");
     break;
   default:
     printf("please select from above list");
     break;
	   }
}
