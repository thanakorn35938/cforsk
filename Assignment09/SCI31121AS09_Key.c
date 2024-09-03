#include <stdio.h>

float circle_area(float radius){
    return 3.14159 * radius * radius;
}
float triangle_area(float base, float height){
    return 0.5 * base * height;
}
float rectangle_area(float width, float height){
    return width * height;
}

int main (){
    int choice;
    printf("1. Circle\n2. Triangle\n3. Rectangle\n");
    scanf("%d", &choice);
    if (choice == 1){
        float radius;
        printf("Enter radius: ");
        scanf("%f", &radius);
        printf("Area of circle: %.2f", circle_area(radius));
    }
    else if (choice == 2){
        float base, height;
        printf("Enter base: ");
        scanf("%f", &base);
        printf("Enter height: ");
        scanf("%f", &height);
        printf("Area of triangle: %.2f", triangle_area(base, height));
    }
    else if (choice == 3){
        float width, height;
        printf("Enter width: ");
        scanf("%f", &width);
        printf("Enter height: ");
        scanf("%f", &height);
        printf("Area of rectangle: %.2f", rectangle_area(width, height));
    }

    return 0;
}

//Written by Thanakorn Buathongtanakarn
//Sponsored by GitHub Corporation, Microsoft Corporation.