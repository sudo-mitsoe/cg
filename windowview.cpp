#include<iostream>
#include<graphics.h>
using namespace std;
class window_viewport
{
public:
float wxmin,wxmax,wymin,wymax,vxmin,vxmax,vymin,vymax;
float x,y,x1,y1,x2,y2,x3,y3;
float sx,sy;
void creating_window()
{
cout<<"Enter the window coordinates"<<endl;
cout<<"xmin"<<endl;
cin>>wxmin;
cout<<"xmax"<<endl;
cin>>wxmax;
cout<<"ymin"<<endl;
cin>>wymin;
cout<<"ymax"<<endl;
cin>>wymax;
cout<<"enter the line co-odrinates"<<endl;
cin>>x>>y>>x1>>y1;
/*rectangle(wxmin,wymin,wxmax,wymax);
line(x,y,x1,y1);*/
}
void creating_viewport()
{
cout<<"Enter the viewport coordinates"<<endl;
cout<<"xmin"<<endl;
cin>>vxmin;
cout<<"xmax"<<endl;
cin>>vxmax;
cout<<"ymin"<<endl;
cin>>vymin;
cout<<"ymax"<<endl;
cin>>vymax;
}
void calculation()
{
int gd,gm;
initgraph(&gd,&gm,"C:\\Program Files(x86)\\CodeBlocks\\MinGW\\include");
sx=(vxmax-vxmin)/(wxmax-wxmin);
sy=(vymax-vymin)/(wymax-wymin);
cout<<sx<<" "<<sy;
x2=vxmin+(x-wxmin)*sx;
y2=vymin+(y-wymin)*sy;
x3=vxmin+(x1-wxmin)*sx;
y3=vymin+(y1-wymin)*sy;
cout<<x2<<" "<<y2<<endl;
cout<<x3<<" "<<y3<<endl;
rectangle(vxmin+100,vymin+100,vxmax+100,vymax+100);
line(x2+100,y2+100,x3+100,y3+100);
delay(100000);
getch();
closegraph();
}



};
int main()
{
window_viewport obj;
obj.creating_window();
obj.creating_viewport();
obj.calculation();
return 0;

}










