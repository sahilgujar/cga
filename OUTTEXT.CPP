#include<conio.h>
#include<graphics.h>
Void main()
{ 
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
outtext("press any key to clear the screen")
getch();
cleardevice();
outtextxy(50,50,"press any key to exit")
getch();
closegraph();
}
