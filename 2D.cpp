#include<graphics.h>
//#include<conio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{

   int tx,ty,c,t,i,j,k, x1,x2,y1,y2;
   float sx, sy;
   float tx1;
   int gd = DETECT, gm;
   initgraph(&gd, &gm,"NULL");

   x1 = y1 = 100;
   x2 = y2 = 300;
   rectangle(x1,y1,x2,y2);

   do
   {
   cout<<"Enter Choice:\n1 :Translation \n2 :Rotation \n3 :Scaling";
   cout<<"\nChoice :";
   cin>>c;
    float xf1,xf2,yf1,yf2;
	switch(c)
	{
		case 1:
			cout<<"Enter tx & ty :";
			cin>>tx>>ty;
			xf1 = x1+tx;
			yf1 = y1+ty;
			xf2 = x2+tx;
			yf2 = y2+ty;
			rectangle(xf1,yf1,xf2,yf2);
			break;

		case 2 :
			int xx1, yy1, xx2, yy2, xx3, yy3, xx4, yy4;
			int ax1, ay1, ax2, ay2, ax3, ay3, ax4, ay4;
			int refx, refy;
			cout<<"Enter angle :";
			cin>>tx1;
			tx1=tx1*(3.14/180);

			refx = refy = 100;

			xx1 = yy1 = yy2 = xx4 = 100;
			xx2 = xx3 = yy3 = yy4 = 300;

			ax1 = refy +(xx1-refx)* cos(tx1)-(yy1-refy)*sin(tx1);
			ay1 = refy +(xx1-refx)* sin(tx1)+(yy1-refy)*cos(tx1);

			ax2 = refy +(xx2-refx)* cos(tx1)-(yy2-refy)*sin(tx1);
			ay2 = refy +(xx2-refx)* sin(tx1)+(yy2-refy)*cos(tx1);

			ax3 = refy +(xx3-refx)* cos(tx1)-(yy3-refy)*sin(tx1);
			ay3 = refy +(xx3-refx)* sin(tx1)+(yy3-refy)*cos(tx1);

			ax4 = refy +(xx4-refx)* cos(tx1)-(yy4-refy)*sin(tx1);
			ay4 = refy +(xx4-refx)* sin(tx1)+(yy4-refy)*cos(tx1);

            setcolor(YELLOW);
			line(ax1,ay1, ax2, ay2);
			line(ax2,ay2, ax3, ay3);
			line(ax3,ay3, ax4, ay4);
			line(ax4,ay4, ax1, ay1);
			break;

		case 3 :
		 //   cout<<"Enter the coordinates \n";
		   // cin>>x1>>y1>>x2>>y2;
		    //rectangle(x1,y1,x2,y2);
		   cout<<"Enter sx & sy :";
		   cin>>sx>>sy;
		   xf1 = x1*sx;
           yf1 = y1*sy;
           xf2 = x2*sx;
           yf2 = y2*sy;
           setcolor(YELLOW);
		   rectangle(xf1,yf1,xf2,yf2);
		   break;
		 }
   }while(c!=0);
   getch();
   closegraph();
   return 0;
}
