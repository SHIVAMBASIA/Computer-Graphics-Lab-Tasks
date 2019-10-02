#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver = DETECT,gmode;
int x,y,i,z,b;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
	printf("Enter the color choice:");
	scanf("%d",&z);
	setcolor(z);
	printf("Enter the shape choice:");
	scanf("%d",&b);
	if(b==1)
	line(150,150,300,150);
       else if(b==2) circle(200,300,170);
       else if(b==3)	rectangle(100,150,200,250);
       else if(b==4) arc(100,100,0,180,20);
       else printf("wrong input");
getch();
}


