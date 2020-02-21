#include<conio.h>
#include<graphics.h>
void main()
{ 
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
ellipse(100,100,0,360,50,25);
getch();
closegraph();
}
