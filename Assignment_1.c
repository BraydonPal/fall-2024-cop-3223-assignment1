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