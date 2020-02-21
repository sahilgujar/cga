#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
circle(100,100,50);
getch();
closegraph();
}
