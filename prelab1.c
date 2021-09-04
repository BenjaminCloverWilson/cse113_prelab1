#include <stdio.h>
#include <math.h>

double area_circle(int r);
double area_ring(int d1, int d2);
double f_to_c(int f);
double euros(double dol);

int main(void){

    //Area of a circle input/outpute
    int a;
    double circlearea = 0;

    //Takes radius input for area of a circle for the first run
    printf("Enter value of radius to calculate circle area:\n");
    scanf("%d", &a);

    circlearea = area_circle(a);
    printf("The area of the circle is: %lf\n", circlearea);

    //Takes radius input for area of a circle for the second run
    printf("Enter value of radius to calculate another circle area:\n");
    scanf("%d", &a);

    circlearea = area_circle(a);
    printf("The area of the second circle is: %lf\n", circlearea);


    //Area of a ring input/output
    int dskr1;
    int dskr2;
    double ringarea = 0;

    printf("Enter value of outer ring radius:\n");
    scanf("%d", &dskr1);
    printf("Enter value of innner ring radius:\n");
    scanf("%d", &dskr2);

    ringarea = area_ring(dskr1, dskr2);
    printf("The area of the ring is: %lf\n", ringarea);


    //Fahrenheit to celcius
    int fah;
    double cel;

    printf("Enter the first temperature value in Fahrenheit:\n");
    scanf("%d", &fah);

    cel = f_to_c(fah);
    printf("The first temperature in Celcius is: %lf\n", cel);

    //Second Fahrenheit to Celcius conversion
    printf("Enter the second temperature value in Fahrenheit:\n");
    scanf("%d", &fah);

    cel = f_to_c(fah);
    printf("The second temperature in Celcius is: %lf\n", cel);


    //Dollars to Euros
    double usd;
    double eu;
    
    printf("Enter first amount in USD:\n");
    scanf("%lf", &usd);

    eu = euros(usd);
    printf("First amount in euros: %lf\n", eu);

    //Dollars to Euros conversion a second time
    printf("Enter another amount in USD:\n");
    scanf("%lf", &usd);

    eu = euros(usd);
    printf("Second amount in euros: %lf\n", eu);

    return 0;
}

//Function definitions
double area_circle(int r){
    return M_PI * pow(r, 2);
}

double area_ring(int d1, int d2){
    return M_PI * pow(d1, 2) - M_PI * pow(d2, 2);
}

double f_to_c(int f){
    return (f - 32.0) * 5.0 / 9.0;
}

double euros(double dol){
    return (dol * 0.76);
}