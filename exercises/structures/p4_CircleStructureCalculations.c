#include <stdio.h>

typedef struct Circle {
    double radius;
} Circle;

int main () {

    struct Circle c1, c2;
    char line[255];

    printf("Enter radius of Circle 1: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &c1.radius);

    printf("Enter radius of Circle 2: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &c2.radius);

    //area calculation

    double c1Area = 3.14 * (c1.radius * c1.radius);
    double c2Area = 3.14 * (c2.radius * c2.radius);

    printf("\nArea of Circle 1: %.2lf\n", c1Area);
    printf("Area of Circle 2: %.2lf\n", c2Area);

    //perimeter calculation

    double c1Perim = 2 * 3.14 * c1.radius;
    double c2Perim = 2 * 3.14 * c2.radius;

    printf("\nPerimeter of Circle 1: %.2lf\n", c1Perim);
    printf("Perimeter of Circle 2: %.2lf\n", c2Perim);

    return 0;
}
