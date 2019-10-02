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

	line(200,100,100,200);
	line(500,100,600,200);
	line(200,100,500,100);
	line(100,200,600,200);
	line(150,150,550,150);
	line(200,200,200,400);
	line(500,200,500,400);
	line(200,400,500,400);
	line(300,400,300,250);
	line(400,400,400,250);
	line(300,250,400,250);
	line(225,300,225,250);
	line(275,300,275,250);
	line(225,250,275,250);
	line(225,300,275,300);
	line(475,250,475,300);
	line(425,300,425,250);
	line(425,300,475,300);
	line(425,250,475,250);
	line(245,300,245,250);
	line(255,300,255,250);
	line(445,300,445,250);
	line(455,300,455,250);
	arc(250,250,0,180,25);
	arc(450,250,0,180,25);
	circle(540,40,30);
	setfillstyle(1,4);
	floodfill(200,120,15);
	setfillstyle(1,2);
	floodfill(200,170,15);
	setfillstyle(1,1);
	floodfill(202,398,15);
	setfillstyle(1,6);
	floodfill(302,398,15);
	floodfill(252,298,15);
	floodfill(452,298,15);
	setfillstyle(1,14);
	floodfill(540,40,15);
	floodfill(226,299,15);
	floodfill(274,298,15);
	floodfill(426,298,15);
	floodfill(474,298,15);
	setfillstyle(1,9);
	floodfill(226,248,15);
	floodfill(426,248,15);
getch();
}

