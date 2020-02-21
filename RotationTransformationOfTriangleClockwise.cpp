#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{ clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
int x1,y1,x2,y2,x3,y3;
cout<<"Enter (x1,y1),(x2,y2),(x3,y3) for triangle : ";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
int a[]={x1,y1,x2,y2,x3,y3,x1,y1};
drawpoly(4,a);
int xf=(x1+x2+x3)/3;
int yf=(y1+y2+y3)/3;
float ang;
cout<<"Enter the rotation angle :";
cin>>ang;
float rad=ang*3.1428/180;
int X1=(x1-xf)*cos(rad)-(y1-yf)*sin(rad)+xf;
int Y1=(x1-xf)*sin(rad)+(y1-yf)*cos(rad)+yf;
int X2=(x2-xf)*cos(rad)-(y2-yf)*sin(rad)+xf;
int Y2=(x2-xf)*sin(rad)+(y2-yf)*cos(rad)+yf;
int X3=(x3-xf)*cos(rad)-(y3-yf)*sin(rad)+xf;
int Y3=(x3-xf)*sin(rad)+(y3-yf)*cos(rad)+yf;
int b[]={X1,Y1,X2,Y2,X3,Y3,X1,Y1};
drawpoly(4,b);
getch();
}