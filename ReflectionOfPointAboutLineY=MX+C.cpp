#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
int x1,y1,x2,y2;
cout<<"Enter the coordinates of the line\n";
cin>>x1>>y1>>x2>>y2;
int m=getmaxx();
int n=getmaxy();
setcolor(6);
line(x1,y1,x2,y2);
outtextxy(x1,y1+10,"Original Object");
setcolor(4);
line((m/2),0,(m/2),n);
line(0,(n/2),m,(n/2));
setcolor(3);
int c=(n/2)-y1;
int d=(n/2)-y2;
y2=y2+(d*2);
y1=y1+(c*2);
line(x2,y2,x1,y1);
outtextxy(x1,y1+10,"Reflection along X-axis");
setcolor(9);
int a=(m/2)-x1;
int b=(m/2)-x2;
x1=x1+(a*2);
x2=x2+(b*2);
line(x1,y1,x2,y2);
outtextxy(x2-20,y2+10,"Reflection along Y-axis");
getch();
closegraph();
}