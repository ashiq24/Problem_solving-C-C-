#include<stdio.h>
//#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int i ,j=0;
initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
getch();
i=0;
while(i<=420)
{
rectangle(150+i,350,200+i,400);
rectangle(50+i,275,150+i,400);
circle(175+i,410,10);
circle(75+i,410,10);
setcolor(j++);
delay(100);
i=i+10;
cleardevice();
}
getch();
closegraph();
}

