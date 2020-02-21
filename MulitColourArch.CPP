#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int gdriver=DETECT,gmode;
   int x,y,i;
   clrscr();
   initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
    x=getmaxx()/2;
    y=getmaxy()/2;
     for(i=40;i<200;i++)
     {
		 delay(100);
		 setcolor(i/10);
		  arc(x,y,0,100,i-10);
     }
    getch();
closegraph();
}
