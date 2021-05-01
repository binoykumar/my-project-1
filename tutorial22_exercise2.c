#include <stdio.h>
int main(int argc, char const *argv[])
{
   int user_input, input;
   float value;
   float kms = 1, miles = 1, inches = 1, foot = 1, meters = 1;
   printf("enter a number for your base conversion unit\npress 1 for kilometers, 2 for miles, 3 for inches, 4 for foot and 5 for meters\n");
   scanf("%d", &user_input);

   switch (user_input)
   {
   case 1:
      printf("you have selected kilomters for base unit now please enter the conversion unit no\n");
      printf("enter 1 for miles, 2 for inches, 3 for foot and 4 for meters\n");
      scanf("%d", &input);
      switch (input)
      {
      case 1:
         printf("you have selected miles,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f kilometers = %.4f miles\n", value, value * miles * 0.6213);
         goto end;

      case 2:
         printf("you have selected inches,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f kilometers = %.4f inches", value, value * inches * 39370.0787);
         goto end;

      case 3:
         printf("you have selected foot,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f kilometers = %.4f foots, value, value*foots*3280.84");
         goto end;

      case 4:
         printf("you have selected meters,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f kilometers = %.4f meters", value, value * meters * 1000);
         goto end;

      default:
         printf("you have not entered any number");
         goto end;
      }

      break;
   case 2:
      printf("you have selected miles for your base conversion\n enter 1 for kilometers, 2 for inches, 3 for foot and 4 for meters\n");
      scanf("%d", &input);
      switch (input)
      {
      case 1:
         printf("you have selected kilometers,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f Miles = %.4f Kilometers\n", value, value * kms * 1.60934);
         goto end;

      case 2:
         printf("you have selected inches,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f Miles = %.4f inches", value, value * inches * 63360);
         goto end;

      case 3:
         printf("you have selected foot,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f Miles = %.4f foots", value, value * foot * 5280);
         goto end;

      case 4:
         printf("you have selected meters,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f Miles = %.4f meters", value, value * meters * 1609.344);
         goto end;

      default:
         printf("you have not entered any number");
         goto end;
      }

   case 3:
      printf("you have selected inches for your base conversion\n enter 1 for kilometers, 2 for miles, 3 for foot and 4 for meters");
      scanf("%d", &input);
      switch (input)
      {
      case 1:
         printf("you have selected kilometers,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f inches = %.4f Kilometers\n", value, value * kms * 1 / 39370);
         goto end;

      case 2:
         printf("you have selected miles,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f inches = %.4f miles", value, value * miles * 1 / 63360);
         goto end;

      case 3:
         printf("you have selected foot,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f inches = %.4f foots", value, value * foot * 0.0833);
         goto end;

      case 4:
         printf("you have selected meters,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f inches = %.4f meters", value, value * meters * 0.0254);
         goto end;

      default:
         printf("you have not entered any number");
         goto end;
      }

   case 4:
      printf("you have selected foot for your base conversion\n enter 1 for kilometers, 2 for miles, 3 for inches and 4 for meter\n");
      scanf("%d", &input);
      switch (input)
      {
      case 1:
         printf("you have selected kilometers,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f foot = %.4f kilometers", value, value * kms * 0.0003048);
         goto end;

      case 2:
         printf("you have selected miles,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f foot = %.4f miles", value, value * miles * 0.0001893);
         goto end;

      case 3:
         printf("you have selected inches,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f foot = %.4f inches", value, value * inches * 12);
         goto end;

      case 4:
         printf("you have selected meters,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f foot = %.4f meters", value, value * meters * 0.3048);
         goto end;

      default:
         printf("you have not entered any number");
         goto end;
      }

   case 5:
      printf("you have selected meter for your base conversion\n enter 1 for kilometers, 2 for miles, 3 for inches and 4 for foot\n");
      scanf("%d", &input);
      switch (input)
      {
      case 1:
         printf("you have selected kilometers,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f meters = %.4f kilometers", value, value * kms * 0.001);
         goto end;

      case 2:
         printf("you have selectetsd miles,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f meters = %.4f miles ", value, value * miles * 0.0006213);
         goto end;

      case 3:
         printf("you have selected inch,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f meters = %.4f inches", value, value * inches * 39.37);
         goto end;

      case 4:
         printf("you have selected foot,enter the value for conversion : \n");
         scanf("%f", &value);
         printf("%.2f meters = %.4f foots", value, value * foot * 3.2808);
         goto end;

      default:
         printf("you have not entered any number");
         goto end;
      }

   default:
      break;
   }
   end:
   return 0;
}
