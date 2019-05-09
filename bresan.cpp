#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;

void bresan(float x1,float y1,float x2,float y2)
{
    float x,y,pk,m,xk,yk;
    m=(y1-y2)/(x1-x2);
    x=x1;
    y=y1;
    if(m<1)
    {   x=x1;
        y=y1;
        putpixel(x,y,GREEN);
        pk=2*(y2-y1)-(x2-x1);
        while(x<=x2){
                x=x+1;
                yk=y;
        if(pk>=0)
        {
            y=yk+1;

        }

        putpixel(x,y,GREEN);
        pk=pk+2*(y2-y1)-2*(x2-x1)*(y-yk);
    }
    }
    else if(m>=1)
    {   x=x1;
        y=y1;
        putpixel(x,y,GREEN);
        pk=2*(x2-x1)-(y2-y1);
        while(y<=y2)
        { y=y+1;
          xk=x;
            if(pk>=0)
            {
                x=xk+1;


            }
             putpixel(x,y,GREEN);

             pk=pk+2*(x2-x1)-2*(y2-y1)*(x-xk);

        }


    }

}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"NULL");
    float x1,x2,y1,y2;
    cout<<"enter x1 and y1::";
    cin>>x1>>y1;
    cout<<"enter x2 and y2::";
    cin>>x2>>y2;
    bresan(x1,y1,x2,y2);

    getch();
    closegraph();
    return 0;


    }
