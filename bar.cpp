#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
bar(100,100,200,300);
getch();
closegraph();
}
