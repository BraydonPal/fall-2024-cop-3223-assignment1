#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) {
  calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();
return 0;
}

double calculateDistance() {
  double x1, y1, x2, y2;

//getting cordinates from the user
printf("Enter Coordinates for point #1 (x1 y1):");
x1 = askForUserInput();
y2 = askForUserInput();

printf("Enter Coordinate for point #2 (x2 y2):");
x2 = askForUserInput();
y2 = askForUserInput();

//Calulating the distance
double distance = sqrt(pow(x2 - x1, 2) + pow(y2-y1, 2));

//Output
