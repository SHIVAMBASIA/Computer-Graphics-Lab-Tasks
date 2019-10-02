#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void setpixel(int x,int y,int x2,int d,int dt,int ds){
while(x<x2){
x=x+1;
if(d<0){
d=d+ds;
}
else{
y=y+1;
d=d+dt;
}
putpixel(x,y,12);
delay(100);
setpixel(floor(x),floor(y),x2,d,dt,ds);
}
}
void bresenham(int x1,int y1,int x2,int y2)
{int dx,dy,ds,dt,d;
float x,y;
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
ds=2*dy;
dt=2*(dy-dx);
d=2*dy-dx;
x=x+0.5;
y=y+0.5;
setpixel(floor(x),floor(y),x2,d,dt,ds);
}

void main()
{
int gdriver = DETECT,gmode;
int x,y,i,z,b;
	initgraph(&gdriver,&gmode,"C:\\turboc3\\BGI");
	bresenham(0,0,100,100);
       closegraph();
}
