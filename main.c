#include<stdio.h>

int main(int argc, char const *argv[])
{
    char input;
    float kmsTomile = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundsTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("                            --Welcome--                       \n");
        printf("Enter value q to exit the program and following values to continue:\n\n 1) Kms to Miles \n 2) Inches to Foot \n 3) Cms to inches \n 4) Pounds to Kgs \n 5) Inches to Meters\n\n");
        printf("Enter your coversion number: ");
        scanf(" %c", &input);

        if (input == 'q')
        {
            printf("Quitting program");
            break;
        }
        

        else if (input == '1')
        {
            printf("Enter value: ");
            scanf("%f", &first);
            second = first * kmsTomile;
            printf("%f kms is equal to %f miles\n \n", first, second);
            
        }

        else if (input == '2')
        {
            printf("Enter value: ");
            scanf("%f", &first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot\n \n", first, second);
            
        }

        else if (input == '3')
        {
            printf("Enter value: ");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%f cms is equal to %f inches\n \n", first, second);
            
        }

        else if (input == '4')
        {
            printf("Enter value: ");
            scanf("%f", &first);
            second = first * poundsTokgs;
            printf("%f pounds is equal to %f kgs\n \n", first, second);
            
        }

        else if (input == '5')
        {
            printf("Enter value: ");
            scanf("%f", &first);
            second = first * inchesTometers;
            printf("%f inches is equal to %f meters\n \n", first, second);
            
        }
        
    }
    end:
    
    
    
    return 0;
}
