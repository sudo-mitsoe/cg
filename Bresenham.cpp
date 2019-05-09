#include<iostream>
#include<graphics.h>
using namespace std;

void drawline(int xs, int ys, int xe, int ye) //less than 1
{
	int x,y,dx,dy,c1,c2,d;

	dx=xe-xs;
	dy=ye-ys;

	c1 = 2*(dy-dx);
	c2 = 2*(dy);

	d = 2*dy - dx;

	x = xs;
	y = ys;

	putpixel(x, y, WHITE);

	while(x<=xe)
	{
		x = x + 1;
		if(d<0)
			d = d + c2;

		else{
			d = d + c1;
			y = y + 1;
		}
	putpixel(x,y,WHITE);
	}
}

void drawline1(int xs,int ys,int xe,int ye) //Greater than 1
{
	int x,y,dx,dy,c1,c2,d;

	dx=xe-xs;
	dy=ye-ys;

	c1 = 2*(dx-dy);
	c2 = 2*(dx);

	d = 2*dx - dy;

	x = xs;
	y = ys;

	putpixel(x, y, YELLOW);

	while(y<=ye)
	{
		y = y + 1;
		if(d<0)
			d = d + c2;

		else{
			d = d + c1;
			x = x + 1;
		}
	putpixel(x,y,YELLOW);
	}
}

void bresenham(int xs,int ys,int xe,int ye )
{
    /*
    only used for n vertices
    int p,q,r,z;
    cout<<"\nEnter the coordinates \n";
    cin>>p>>q>>r>>z;
    xs = p;
    ys = q;
    xe = r;
    ye = z;
    */
    float m = (float)(ye-ys)/(xe-xs);
    if(m<1)
    {
        drawline( xs, ys, xe, ye);
    }
    else
    {
        drawline1(xs,ys, xe,ye);
    }
}
/*
int main()
{
    ///Rectangle
	int gd=DETECT,gm;
	initgraph(&gd, &gm, NULL);
	//drawline(200,100,300,180);
	bresenham(100,100,300,100);
	bresenham(100,100,100,200);
	bresenham(300,100,300,200);
	bresenham(100,200,300,200);

	getch();
	closegraph();
	return 0;

}
*/

int main()
{
    ///n vertices
	int gd=DETECT,gm,xs,ys,xe,ye;
	initgraph(&gd, &gm, NULL);
	//drawline(200,100,300,180);
	cout<<"\n Enter the number of vertices \n";
	int n;
	cin>>n;
	for(int j =0;j<n;j++)
    {
    bresenham(xs,ys,xe,ye);
    }
	getch();
	closegraph();
	return 0;

}

