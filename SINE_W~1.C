#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <dos.h>
 
int main() {
    int gd = DETECT, gm;
    int angle = 0 , angle2 = 0;
    double x, y,a,b;
 
    initgraph(&gd, &gm, "C:\\turboc3\\BGI");
 
 line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
 /* generate a sine wave */
 for(x = 0; x < getmaxx(); x+=3) {
 
     /* calculate y value given x */
     y = 50*sin(angle*3.141/180);
     y = getmaxy()/2 - y;
 
     /* color a pixel at the given position */
	 
	 
	 
	 
// Create Sine Wave  ..........................................
	  line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
	  angle2=0;
 for(a = 0; a < getmaxx(); a+=3) {
 
     /* calculate y value given x */
     b = 50*sin(angle2*3.141/180);
     b = getmaxy()/2 - b;
 
     /* color a pixel at the given position */
  putpixel(a, b, 15);
 
  /* increment angle */
  angle2+=5;
 }
 // Sine Wave created............................................
 
 
 
 
 
  putpixel(x,y,15);
  circle(x,y,40);
  delay(100);
  cleardevice();
 
  /* increment angle */
  angle+=5;
 }
 
 getch();
 
 /* deallocate memory allocated for graphics screen */
 closegraph();
 
 return 0;
}