#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define ROUND(a)((int)(a+0.5))
void symDDA (int xa,int ya, int xb,int yb)
{
int dx=xb-xa,dy=yb-ya;float length;
float xinc,yinc,x=xa,y=ya;
if(abs(dx)>abs(dy))
length=abs(dx);
else
length=abs(dy);
float n=log10(length)/log10(2);
xinc=dx/(pow(2,n));
yinc=dy/(pow(2,n));
putpixel(ROUND(x),ROUND(y),15);
delay(50);
for(int i=0;i<length;i++)
{
x=x+xinc;
y=y+yinc;
putpixel(ROUND(x),ROUND(y),15);
delay(50);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
int xa, xb,ya,yb;
cout<<"enter the points";
cin>>xa>>xb>>ya>>yb;
cleardevice();
symDDA(xa,xb,ya,yb);
getch();
closegraph();
}