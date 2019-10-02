#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gdriver = DETECT,gmode;
int x1,y1,x2,y2,x3,y3;
//clrscr();
printf(" Enter the coordinates of triangle");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
line(0,240,640,240);
x1=x1;
x2=x2;
x3=x3;
y1=480-y1;
y2=480-y2;
y3=480-y3;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
closegraph();
}