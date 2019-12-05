#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

void translation()
{int x1,y1,x2,y2;
int tx,ty,xn1,xn2,yn1,yn2;
printf("\n Enter the translation\n");
scanf("%d%d",&tx,&ty);
cleardevice();
outtextxy(400,100,"TRANSLATION");
xn1=x1+tx;
yn1=y1+ty;
xn2=x2+tx;
yn2=y2+ty;
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}
 main()
{int x1,y1,x2,y2;
int ch,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
translation();}
