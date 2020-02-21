#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
   int x1,x2,y1,y2,dy,dx,steps,xn,yn,i,X1,Y1;
   int gdriver = DETECT,gmode;
   clrscr();
   initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
   printf("Enter the starting points");
   scanf("%d%d",&x1,&y1);
   printf("Enter the ending points");
   scanf("%d%d",&x1,&y2);
   dx=x2-x1;
   dy=y2-y1;
   if(abs(dx)>abs(dy))
       steps=abs(dx);
   else
      steps=abs(dy);
   xn=dx/steps;
   yn =  dy/steps;
   for(i=1;i<=steps; i++);
      {
	 putpixel(x1,y1,LIGHTBLUE);
	 delay(10);
	    x1=x1+xn;
	    y1=y1+yn;
     }
	 getch();
	 closegraph();
}