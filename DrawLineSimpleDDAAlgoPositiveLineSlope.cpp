#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void dda(int x1,int y1, int x2, int y2);
void main()
{
int gd = DETECT, gm; /* detect the graphics drivers automatically*/
int x1, y1,x2,y2;
initgraph(&gd, &gm,"c:\\TC\\BGI");
cleardevice();
printf("DDA Line Generation Algorithm\n");
printf("\nenter tyhe starting co-ordinates for drawing line");
scanf("%d %d",& x1, & y1);
printf("\nenter the ending co-ordinates");
scanf("%d %d",& x2,& y2);
dda(x1,y1,x2,y2);
printf("\n Thank you");
getch();
closegraph();
}
void dda(int x1, int y1, int x2, int y2)
{
int i,dx,dy,steps;
float x,y;
float xinc, yinc;
dx=(x2-y1);
dy=(y2-y1);
if(abs(dx)>=abs(dy))
{
steps= dx;
}
else
{
steps = dy;
}
xinc = (float) dx/steps;
yinc = (float) dy/steps;
x = x1;
y= y1;
putpixel(x,y,WHITE);
for(i=1;i<steps;i++)
{
x = x+xinc;
y = y+yinc;
x1 = x+0.5;
y1 = y+0.5;
putpixel(x1,y1,WHITE);
}
}