#include<conio.h>
#include<graphics.h>
void main(
{ 
int gd=DETECT,gm;
   initgraph(&gd,gm,"c:\\tc\\BGI");
   setcolor(RED);
   circle(100,100,50);
   floodfill(100,100,RED);
   getch();
closegraph();
}
