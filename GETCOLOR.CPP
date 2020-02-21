#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm,bgcolor;
   initgraph(&gd,&gm,"c:\\tc\\BGI");
   char a[100];
    bgcolor=get	color();
   printf(a,"Current background color=%d",bgcolor);
   outtextxy(10,10,a);
    getch();
closegraph();
}
