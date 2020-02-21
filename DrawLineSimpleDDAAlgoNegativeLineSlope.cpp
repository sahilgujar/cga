#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define round(a)((int)(a+0.5))
void dda_line(int x1,int y1,int x2,int y2)
{
int dx=(x2-x1);
int dy=(y2-y1);
int length;
if(abs(dy)>abs(dx))
length=abs(dy);
else
length=abs(dx);
float xinc,yinc,x=x1,y=y1;
xinc=dx/(float)length;
yinc=dy/(float)length;
putpixel(round(x),round(y),15);
for(int k=1;k<=length;k++)
{
x=x+xinc;
y=y+yinc;
putpixel(round(x),round(y),15);
delay(100);
}
}
void main()
{
clrscr();
int x1,x2,y1,y2;
int gd=DETECT,gm;
cout<<"Enter the x-coordinate of starting point : ";
cin>>x1;
cout<<"Enter the y-coordinate of ending point : ";
cin>>y1;
cout<<endl;
cout<<"Enter the x-coordinate of starting point : ";
cin>>x2;
cout<<"Enter the y-coordinate of ending point : ";
cin>>y2;
getch();
initgraph(&gd,&gm,"c:\\tc\\bgi");
dda_line(x1,y1,x2,y2);
setcolor(4);
getch();
closegraph();
}