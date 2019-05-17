//   SPIDER TASK - WEB DEV - GIT MERGING
 

// Barath Programs - Projectile motion details finder....

#include<iostream>
#include <stdio.h>
#include<windows.h> 
#include<process.h>
#include<math.h>
using namespace std;
//manually defined the function gotoxy
void gotoxy(float x, float y)
{
HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwCursorPosition = { x,y };

cout.flush();
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}
// main program
int main()
{
	cout<<"***TRAJECTORY-MAX HEIGHT-RANGE FROM CLOCK TOWER***"<<endl<<endl;
	cout<<"ENTER THE VELOCITY (m/s): ";
	float v,theta;
	cin>>v;
	cout<<"ENTER INCLINATION (In degrees) :";
	cin>>theta;
	theta=theta*3.14159/180;
	float t;
	t=(v*sin(theta)+pow((pow(v*sin(theta),2)+600),0.5))/10.0;
	float maxht=pow((v*sin(theta)),2)/20;
	system("cls");
	gotoxy(0,40);
	for(float i=0;i<=t;i=i+0.001)
	{
	 gotoxy(v*cos(theta)*i,-(v*sin(theta)*i-5*pow(i,2))-maxht);
	 cout<<".";
	}
	cout<<endl;
	for(int j=0;j<=180;j++)
	{
	 gotoxy(j,(v*sin(theta)*t-5*pow(t,2)-maxht));
	 cout<<"*";
	}
	cout<<endl;
	for(float i=0;i<=t;i=i+0.001)
	{
	 cout<<"At time T= "<<i<<" secs : X= "<<v*cos(theta)*i<<", Y= "<<30+v*sin(theta)*i-5*pow(i,2)<<"\n";
	}
	cout<<" RANGE ="<<v*cos(theta)*t<<endl;
	cout<<" MAX HEIGHT (from ground):"<<pow((v*sin(theta)),2)/20 +30; 
	cout<<"\n MAX HEIGHT (from clock tower):"<<pow((v*sin(theta)),2)/20 ;
	cout<<"\n TIME TAKEN TO REACH GROUND :"<<t;
	cout<<"\n TIME TAKEN TO REACH MAX HEIGHT :"<<v*sin(theta)/10;
	cout<<"\n VELOCITY AT THE TIME OF HITTING GROUND: "<<pow((pow((v*sin(theta)-10*t),2)+pow(v*cos(theta),2)),0.5);
}
