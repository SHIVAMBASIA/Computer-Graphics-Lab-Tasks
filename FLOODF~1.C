#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void floodFill(int x,int y,int oldcolor,int newcolor)
{
	if(getpixel(x,y) == oldcolor)
	{
		putpixel(x,y,newcolor);
		delay(20);
		floodFill(x+1,y,oldcolor,newcolor);
		floodFill(x,y+1,oldcolor,newcolor);
		floodFill(x-1,y,oldcolor,newcolor);
		floodFill(x,y-1,oldcolor,newcolor);
	}
}
//getpixel(x,y) gives the color of specified pixel

int main()
{
	int gm,gd=DETECT,radius;
	int x,y;

	printf("Enter x and y positions for circle\n");
	scanf("%d%d",&x,&y);
	printf("Enter radius of circle\n");
	scanf("%d",&radius);

	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	circle(x,y,radius);
	delay(1000);
	 floodFill(x,y,0,15);

	printf("HEllo I am Shivam");

	getch();
	closegraph();

	return 0;
}
