#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver = DETECT,gmode;
int x,y,i,z,b;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	circle(200,50,30);
	line(200,20,200,10);
	line(190,20,189,10);
	line(180,25,179,10);
	line(210,20,210,10);
	line(220,25,222,10);
	rectangle(185,80,215,110);
	rectangle(150,110,250,260);
	line(150,110,90,160);
	line(150,140,90,190);
	line(250,110,310,160);
	line(250,140,310,190);
	circle(85,175,14);
	circle(315,175,14);
	circle(200,140,8);
	circle(200,160,8);
	circle(200,180,8);
	circle(200,200,8);
	circle(200,220,8);
	line(165,260,165,350);
	line(185,260,185,375);
	line(235,260,235,350);
	line(215,260,215,375);
	line(165,350,135,350);
	line(185,375,135,375);
	line(215,375,265,375);
	line(235,350,265,350);
	line(135,350,135,375);
	line(265,375,265,350);
	arc(135,354,90,270,4);
	arc(135,362,90,270,4);
	arc(135,370,90,270,4);
	arc(265,354,0,90,4);
	arc(265,354,270,360,4);
	arc(265,362,0,90,4);
	arc(265,362,270,360,4);
	arc(265,370,0,90,4);
	arc(265,370,270,360,4);
	circle(185,50,5);
	circle(215,50,5);
	arc(185,40,0,180,5);
	arc(215,40,0,180,5);
	arc(200,60,180,360,10);
	getch();
	}