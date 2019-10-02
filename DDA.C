#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void dda(float x1,float y1,float x2,float y2){
float length,dx,dy,x,y;
if(abs(x2-x1)>=abs(y2-y1)) length=abs(x2-x1);
else length=abs(y2-y1);
dx=(x2-x1)/length;
dy=(y2-y1)/length;
x=x1+0.5;
y=y1+0.5;
setpixel(floor(x),floor(y),dx,dy,length);
}
void setpixel(int x,int y,float dx,float dy,float length){
float i;
for(i=0;i<length;i++)
{
x=x+dx;
y=y+dy;
putpixel(x,y,12);
delay(100);
setpixel(floor(x),floor(y),dx,dy,length);
}}


void main()
{
int gdriver = DETECT,gmode;
int x,y,i,z,b;
	initgraph(&gdriver,&gmode,"C:\\turboc3\\BGI");
	dda(0,0,100,100);
       closegraph();
}
