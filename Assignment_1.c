#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate the distance between two points (used as the diameter)
double calculateDistance() {
    double x1, y1, x2, y2;
    
    // Input for the coordinates of two points
    printf("Enter coordinates for Point #1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for Point #2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate distance (i.e., diameter of the circle)
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Output the points and the distance
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points (diameter) is %.2f\n", distance);
    
    return distance;
}
// Function to calculate the perimeter (circumference) of the circle
double calculatePerimeter() {
    double diameter = calculateDistance();
    double radius = diameter / 2.0;
    double circumference = 2 * PI * radius;
    
    printf("The perimeter (circumference) of the circle is %.2f\n", circumference);
    
    // Ask for difficulty rating
    double difficulty;
    printf("Rate the difficulty of calculating the perimeter (1.0 - 5.0): ");
    scanf("%lf", &difficulty);
    
    return difficulty;
}

// Function to calculate the area of the circle
double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2.0;
    double area = PI * pow(radius, 2);
    
    printf("The area of the circle is %.2f\n", area);
    
    // Ask for difficulty rating
    double difficulty;
    printf("Rate the difficulty of calculating the area (1.0 - 5.0): ");
    scanf("%lf", &difficulty);
    
    return difficulty;
}

// Function to calculate the width (diameter) of the circle
double calculateWidth() {
    double diameter = calculateDistance();
    printf("The width (diameter) of the circle is %.2f\n", diameter);
    
    // Ask for difficulty rating
    double difficulty;
    printf("Rate the difficulty of calculating the width (1.0 - 5.0): ");
    scanf("%lf", &difficulty);
    
    return difficulty;
}

// Function to calculate the height (diameter) of the circle
double calculateHeight() {
    double diameter = calculateDistance();
    printf("The height (diameter) of the circle is %.2f\n", diameter);
    
    // Ask for difficulty rating
    double difficulty;
    printf("Rate the difficulty of calculating the height (1.0 - 5.0): ");
    scanf("%lf", &difficulty);
    
    return difficulty;
}

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}