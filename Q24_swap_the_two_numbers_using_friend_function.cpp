// 24. Write a program to swap the two numbers using friend function

#include <iostream>
using namespace std;
class swapping  
{
    
    public:
    int a, b;
        void get()
		{
            cout << "Enter two numbers for swapping " << endl;
            cin >> a >> b;
            cout << "Before swapping : " << endl;
            cout << "a = " << a << endl; 
            cout << "b = " << b << endl << endl;
        }
    friend void swap(int x , int y);
    void display()  
	{
        cout << "After swapping : " << endl;
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl;
    }
};

void swap(swapping &T)
{
    int temp = T.a;
    T.a = T.b;
    T.b = temp;
}
main() 
{
    swapping obj;
    obj.get();
    swap(obj);
    obj.display();
}
