/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
int main()
{
int color,p,gd=DETECT,gm,
x1=10,y1=10,x2=20,y2=0,x11=80,y11=0,x22=80,y22=20;

    printf("Position : ");
    scanf("%d",&p);
    printf("color Cod :");
    scanf("%d",&color);

    clrscr();
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    setcolor(color);
    line(x1+p,y1+p,x2+p,y2+p);
    line(x1+10+p,y1-10+p,x2+10+p,y2+10+p);
    line(x1+20+p,y1+p,x2+20+p,y2+p);
    line(x1+30+p,y1-10+p,x2+30+p,y2+10+p);

    line(x11+p,y11+p,x22+p,y22+p);
    line(x22+p,y22+p,x22+p-10,y22+p);
    line(x22+p-10,y22+p,x22+p-10,y22+p-5);

    getch();
    closegraph();
    return 0;

}
