// 12. Write a program to calculate the area of circle, rectangle and triangle using Function
// Overloading
// Circles Pi ‡ Area ‡ Area
// Rectangles Area ‡ breadth
// Triangles ½ ‡ Area ‡ breadth

#include<iostream>
using namespace std;
int circle(int r)
{
	return 3.14*r*r;
}
int triangle(int b, int h)
{
	return b*h/2;
}
int ractangle(int w, int l)
{
	return w*l;
}
main()
{
	cout<<"Area of circle:- "<<circle(5);
	cout<<"\nArea of triangle:- "<<triangle(3,4);
	cout<<"\nArea of ractangle:- "<<ractangle(5,6);
}
