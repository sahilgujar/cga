#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
bar3d(100,100,200,200,500,500);
getch();
closegraph();
}
