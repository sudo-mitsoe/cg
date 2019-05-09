#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
  int gd=DETECT, gm, res;
  int x1, y1, r, xk, yk, xk_1, yk_1;
  float pk;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  cout<<"Enter x coord: ";
  cin>>x1;
  cout<<"Enter y coord: ";
  cin>>y1;
  cout<<"Enter radius: ";
  cin>>r;
  pk = 1 - r;
  
  xk_1 = 0; yk_1 = r;
  while(xk_1<=yk_1){
    yk = yk_1;
    xk = xk_1;
    if(pk >= 0){
      yk_1 = yk-1;
    }
    xk_1 = xk_1 + 1;
    putpixel(x1+xk_1, y1+yk_1,RED);
    putpixel(x1+yk_1, y1+xk_1,RED);
    putpixel(x1+xk_1, y1-yk_1,RED);
    putpixel(x1+yk_1, y1-xk_1,RED);
    putpixel(x1-xk_1, y1+yk_1,RED);
    putpixel(x1-yk_1, y1+xk_1,RED);
    putpixel(x1-xk_1, y1-yk_1,RED);
    putpixel(x1-yk_1, y1-xk_1,RED);
    pk = pk + 2*(xk+1) + (yk_1*yk_1 - yk*yk) - (yk_1 - yk) +1;
  }
  getch();
  closegraph();
  return 0;
}
