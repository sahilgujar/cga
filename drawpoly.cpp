#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,points[]={320,150,420,300,250,300,320,150};
initgraph(&gd,&gm,"c:\\TC\\BGI");
drawpoly(4,points);
getch();
closegraph();
}
