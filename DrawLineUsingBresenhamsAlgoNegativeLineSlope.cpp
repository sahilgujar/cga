#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int sign(int x)
{ if(x<0)
return(-1);
if(x>0)
return(1);
else
return(0);
}
void lineBres(int xa,int ya,int xb,int yb)
{ int sx,sy,t,length,flag;
int x=xa;
int y=ya;
int dx=abs(xa-xb),dy=abs(ya-yb);
sx=sign(xb-xa);
sy=sign(yb-ya);
if(dy>dx)
{ t=dx;
dx=dy;
dy=t;
length=dy;
flag=1;}
else
{ length=dx;
flag=0;}
int p=(2*dy)-dx;
int twoDx=2*dx,twoDy=2*dy;
putpixel(x,y,15);
delay(50);
for(int i=0;i<length;i++)
{while(p>0)
{if(flag==1)
x=x+sx;
else
y=y+sy;
p=p-twoDx;}
if(flag==1)
y=y+sy;
else
{x=x+sx;
p=p+twoDy;
putpixel(x,y,15);
delay(50);
}}}
void main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"c://tc//bgi");
int xa,ya,xb,yb;
cout<<"Enter the starting point of x :";
cin>>xa;
cout<<"Enter the starting point of y :";
cin>>ya;
cout<<"Enter the ending point of x :";
cin>>xb;
cout<<"Enter the ending point of x :";
cin>>yb;
cleardevice();
lineBres(xa,ya,xb,yb);
getch();
closegraph();
}