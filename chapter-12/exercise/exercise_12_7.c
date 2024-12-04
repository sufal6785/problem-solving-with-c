#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

int isInsideOrOnCircle(Point p, float radius) {
    return (p.x * p.x + p.y * p.y) <= (radius * radius);
}

int main() {
    Point points[10];
    float radius = 1.0;

    printf("Enter the coordinates (x, y) of 10 points:\n");
    for (int i = 0; i < 10; i++) {
        printf("Point %d: ", i + 1);
        scanf("%d%d", &points[i].x, &points[i].y);
    }

    printf("\nPoints inside or on the circle with radius %.2f and center (0, 0):\n", radius);
    for (int i = 0; i < 10; i++) {
        if (isInsideOrOnCircle(points[i], radius)) {
            printf("(%d, %d)\n", points[i].x, points[i].y);
        }
    }

    return 0;
}
