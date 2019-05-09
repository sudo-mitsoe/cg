///Triangle
#include<iostream>;
#include<conio.h>;
#include<graphics.h>
using namespace std;

void drawline(int x1,int y1 , int x2,int y2 )
{
    int dx , dy , m ,s;
    float xi , yi , x, y;
    dx = x2-x1;
    dy = y2-y1;

    if(abs(dx)> abs(dy)){
        s = abs(dx);
    }else{
    s = abs(dy);
    }

    xi = dx/(float) s;
    yi = dy/(float) s;

    x = x1;
    y = y1;

    putpixel(x1 , y1, WHITE);

    for(m = 0 ; m< s ; m++){
        x = x + xi;
        y = y + yi;
        putpixel(x,y,WHITE);
    }
}


int main(){
int gd = DETECT , gm  , x1,y1,x2,y2,xy;int tx,ty;
initgraph(&gd , &gm , "C:\\tc\\bgi");

drawline(20,100,70,30);
drawline(70,30,120,100);
drawline(20,100,120,100);

cout<<"Enter Tx and ty\n";
cin>>tx>>ty;

drawline(20+tx,100+ty,70+tx,30+ty);
drawline(70+tx,30+ty,120+ty,100+ty);
drawline(20+tx,100+ty,120+tx,100+ty);


getch();
closegraph();
return 0;
}
