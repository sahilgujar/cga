#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT ,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
line(100,100,400,100);
line(100,100,50,200);
line(400,200,400,100);
line(50,200,400,200);
line(400,400,400,200);
line(150,200,150,400);
line(100,100,150,200);
rectangle(50,200,400,400);
getch();
closegraph();
}
