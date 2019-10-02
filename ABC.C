#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void ellipsepoint(int a,int b)
{
//double d2;
double d2;
int x=0,y=0;
int sa=sqrt(a);
int sb=sqrt(b);
double d1=sb=sb*b+0.25*sa;
ellipsepoint(x,y);
while((sa*(y-0.5))>(sb*(x+a)))
{
if(d1<0)
{
d1=d1+sb*((x<<1)+3);
}
else
{
d1=d1+sb*((x<<1)+3)*sa+((-y<<1)+2);
y--;
}
x++;
ellipsepoint(x,y);
}
d2=sb*sqrt(x+0.5)+sa*sqrt(y-1)-sa*sb;
while(y>0)
{
if(d2<0)
{
d2=d2+sb*((x<<1)+2)+sa*(-(y<<1)+3);
x++;
}
else
{
d2=(d2*sa*(-y<<1)+3);
y--;
ellipsepoint(x,y);
}
}}
void main()
{
int gdriver = DETECT,gmode;
int x,y,i,z,b;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	ellipsepoint(212,232);
	getch();
	}
