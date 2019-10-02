#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gdriver = DETECT,gmode;
int x1,x2,y1,y2,tx1,ty2;
printf(" Enter the coordinates of line");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
printf("Enter the value to be added to x and y");
scanf("%d %d",&tx1,&ty2);
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
line(x1,y1,x2,y2);
x1=x1+tx1;
x2=x2+tx1;
y1=y1+ty2;
y2=y2+ty2;
line(x1,y1,x2,y2);
getch();
closegraph();
}
