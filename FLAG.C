#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver = DETECT,gmode;
int x,y,i,z,b;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
       //	printf("Enter the color choice:");
       //	scanf("%d",&z);
       //	setcolor(z);
       //	printf("Enter the shape choice:");
       //	scanf("%d",&b);
	line(100,400,300,400);
	line(100,400,100,360);
	line(300,400,300,360);
	line(100,360,300,360);
	line(125,325,125,360);
	line(275,325,275,360);
	line(125,325,275,325);
	line(150,300,150,325);
	line(250,300,250,325);
	line(150,300,250,300);
	line(195,300,195,75);
	line(205,300,205,150);
	line(195,150,350,150);
	line(195,75,350,75);
	line(350,75,350,150);
	line(195,100,350,100);
	line(195,125,350,125);
	circle(272.5,112.5,12);
	line(272.5,100,272.5,125);
	line(260,112.5,285,112.5);
	line(262.25,106.25,283.75,118.75);
	line(262.25,118.75,283.75,106.25);
       //	setcolor(15);
	setfillstyle(1,1);
	floodfill(102,398,15);
	floodfill(196,101,15);
	floodfill(348,101,15);
	setfillstyle(1,2);
	floodfill(126,358,15);
	floodfill(196,149,15);
	setfillstyle(1,14);
	floodfill(151,324,15);
	floodfill(196,76,15);
	setfillstyle(1,6);
	floodfill(196,151,15);
getch();
}

