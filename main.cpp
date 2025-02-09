#include<iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#define N 5
using namespace std;
int main()
{
 initwindow(600,600);
 float xl1=300, yl1=200, xl2=150, yl2=280, xl3=220, yl3=350, xl4=350, yl4=350,
xl5=400, yl5=260;
 float temp;
 float angle;
 float arrl[2][N]={{xl1, xl2, xl3, xl4, xl5},{yl1, yl2, yl3, yl4, yl5}};
 float maxX=arrl[0][0], minX=arrl[0][0];
 float maxY=arrl[1][0], minY=arrl[1][0];
 for(int i=0; i<N; i++)
 {
 int j=i+1;
if(j==N)
 j=0;
 line(arrl[0][i],arrl[1][i],arrl[0][j],arrl[1][j]);
 }
 int ch;
 float centerX=0, centerY=0;
 float sx=2, sy=2;
 while (ch!=27)
 {
 ch=getch();
 if (ch==0)
 {
 ch=getch();
 if (ch==80)
 {
 for(int i=0; i<N; i++)
 {
 arrl[1][i]+=5;
 }
 }
 if (ch==72)
 {
 for(int i=0; i<N; i++)
 {
 arrl[1][i]-=5;
 }
 }
 if (ch==75)
 {
 for(int i=0; i<N; i++)
 {
 arrl[0][i]-=5;
 }
 }
 if (ch==77)
 {
 for(int i=0; i<N; i++)
 {
 arrl[0][i]+=5;
 }
 }
 }
 if (ch==61)
 {
 maxX=arrl[0][0],minX=arrl[0][0];
 maxY=arrl[1][0],minY=arrl[1][0];
 for(int i=0; i<N; i++)
 {
 if(arrl[0][i]>maxX)
 maxX=arrl[0][i];
 if(arrl[0][i]<minX)
 minX=arrl[0][i];
 if(arrl[1][i]>maxY)
 maxY=arrl[1][i];
 if(arrl[1][i]<minY)
 minY=arrl[1][i];
 }
 centerX=(maxX+minX)/2;
 centerY=(maxY+minY)/2;
 for(int i=0; i<N; i++)
 {
 arrl[0][i]=centerX+sx*(arrl[0][i]-centerX);
 arrl[1][i]=centerY+sy*(arrl[1][i]-centerY);
 }
 }
 if (ch==45)
 {
 maxX=arrl[0][0],minX=arrl[0][0];
 maxY=arrl[1][0],minY=arrl[1][0];
 for(int i=0; i<N; i++)
 {
 if(arrl[0][i]>maxX)
 maxX=arrl[0][i];
 if(arrl[0][i]<minX)
 minX=arrl[0][i];
 if(arrl[1][i]>maxY)
 maxY=arrl[1][i];
 if(arrl[1][i]<minY)
 minY=arrl[1][i];
 }
 centerX=(maxX+minX)/2;
 centerY=(maxY+minY)/2;
 for(int i=0; i<N; i++)
 {
 arrl[0][i]=centerX+(arrl[0][i]-centerX)/sx;
 arrl[1][i]=centerY+(arrl[1][i]-centerY)/sy;
 }
 }
 if (ch==44)
 {
 maxX=arrl[0][0],minX=arrl[0][0];
 maxY=arrl[1][0],minY=arrl[1][0];
 for(int i=0; i<N; i++)
 {
 if(arrl[0][i]>maxX)
 maxX=arrl[0][i];
 if(arrl[0][i]<minX)
 minX=arrl[0][i];
 if(arrl[1][i]>maxY)
 maxY=arrl[1][i];
 if(arrl[1][i]<minY)
 minY=arrl[1][i];
 }
 centerX=(maxX+minX)/2;
 centerY=(maxY+minY)/2;
 angle=3.14/36;
 for(int i=0; i<N; i++)
 {
 temp=arrl[0][i];
 arrl[0][i]=(arrl[0][i]-centerX)*cos(angle)+(arrl[1][i]-
centerY)*sin(angle)+centerX;
 arrl[1][i]=-(temp-centerX)*sin(angle)+(arrl[1][i]-centerY)*cos(angle)+centerY;
 }
 }
 if (ch==46)
 {
 maxX=arrl[0][0],minX=arrl[0][0];
 maxY=arrl[1][0],minY=arrl[1][0];
 for(int i=0; i<N; i++)
 {
 if(arrl[0][i]>maxX)
 maxX=arrl[0][i];
 if(arrl[0][i]<minX)
 minX=arrl[0][i];
 if(arrl[1][i]>maxY)
 maxY=arrl[1][i];
 if(arrl[1][i]<minY)
 minY=arrl[1][i];
 }
 centerX=(maxX+minX)/2;
 centerY=(maxY+minY)/2;
 angle=3.14/36;
 for(int i=0; i<N; i++)
 {
 temp=arrl[0][i];
 arrl[0][i]=(arrl[0][i]-centerX)*cos(angle)-(arrl[1][i]-
centerY)*sin(angle)+centerX;
 arrl[1][i]=(temp-centerX)*sin(angle)+(arrl[1][i]-centerY)*cos(angle)+centerY;
 }
 }
 cleardevice();
 for(int i=0; i<N; i++)
 {
 int j=i+1;
 if(j==N)
 j=0;
 line(arrl[0][i],arrl[1][i],arrl[0][j],arrl[1][j]);
 }
 }
 closegraph();
 return 0;
}
