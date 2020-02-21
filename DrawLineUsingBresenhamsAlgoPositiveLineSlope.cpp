#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <iostream.h>
void main(){
int x1,x2,y1,y2,i,e,x,y,dx,dy;
int gdriver = DETECT, gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
cout<<"Enter co-ordinates of point 1:";
cin>>x1>>y1;
cout<<"Enter co-ordinates of point 2:";
cin>>x2>>y2;
dx = abs(x2-x1);
dy = abs(y2-y1);
x=x1;
y=y1;
e = 2*dy-dx;
i=1;
do{
putpixel(x,y,WHITE);
while(e>=0){
y++;
e = e - 2*dx;
putpixel(x,y,WHITE);
}
x++;
e = e + 2*dy;
i++;
}while(i<=dx);
getch();
closegraph();
}