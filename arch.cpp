#include<graphics.h>
#include<conio.h>
void main()
{ 
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
arc(100,100,0,135,50);
getch();
closegraph();
}
