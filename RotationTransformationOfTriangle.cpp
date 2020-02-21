#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://tc//bgi");
int x1=200,y1=200,x2=180,y2=250,x3=220,y3=250;
float angle;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
cout<<"Enter the rotation angle : ";
cin>>angle;
angle=angle*3.1428/180;
x1=x1*cos(angle)-y1*sin(angle);
y1=(x1*sin(angle))+y1*cos(angle);
x2=x2*cos(angle)-y2*sin(angle);
y2=(x2*sin(angle))+y2*cos(angle);
x3=x3*cos(angle)-y3*sin(angle);
y3=(x3*sin(angle))+y3*cos(angle);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
}