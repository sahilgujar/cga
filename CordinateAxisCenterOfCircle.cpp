#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm,xcen,ycen;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TC\\BGI");
xcen=getmaxx()/2;
ycen=getmaxy()/2;
line(xcen,0,xcen,getmaxy());
line(0,ycen,getmaxy(),ycen);
getch();
closegraph();
}
