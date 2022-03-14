#include<stdio.h>
struct _point {
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{   
  Point p;
  printf("Enter the x coordinate and y coordinate of the 
   point \n");
  scanf("%f %f ",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  scanf("%f %f ",l.p1,l.p2);
  return l;
  
}
void find_length(Line *l);
{
  *l->distance=sqrt(l->p.x)
}
