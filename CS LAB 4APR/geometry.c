#include <stdio.h>
struct geometry
{
    struct rectange
    {
        int side1, side2, area;
    } r;
    struct circle
    {
        int radius;
        float area;
    } c;
    struct sqire
    {
        int side, area;
    } s;
} geo;

int main()
{
    
    struct geometry *p=&geo;
    printf("Enter sides of rectangle: \n");
    scanf("%d%d", &p->r.side1, &p->r.side2);
    p->r.area = p->r.side1 * p->r.side2;
    printf("Area of rectangle is : %d\n", p->r.area);

    printf("Enter radius of circle: \n");
    scanf("%d", &p->c.radius);
    p->c.area = 3.14 * p->c.radius * p->c.radius;
    printf("Area of rectangle is : %f\n", p->c.area);

    printf("Enter sides of squire: \n");
    scanf("%d", &p->s.side, &p->s.side);
    p->s.area = p->s.side * p->s.side;
    printf("Area of squire is : %d\n", p->s.area);
    return 0;
}