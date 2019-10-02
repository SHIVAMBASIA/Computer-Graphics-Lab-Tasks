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
	circle(100,100,50);
	for(i=0;i<350;i=i+10){
	delay(20);
	cleardevice();
	circle(100+i,100+i,50);
	}
	for(i=0;i<350;i=i+10){
	delay(20);
	cleardevice();
	circle(450+i,450-i,50);
	}
	getch();
	}