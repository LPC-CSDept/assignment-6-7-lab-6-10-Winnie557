//
#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp; // temp is temporary variable. 
}
void swap(int &a, int &b, int &c){ 
    int min, medium, max;
    if(a > b && a > c){    
        max = a;
        medium = (b > c ? b : c);  // If b > c is true, b is the medium. If not, c is the medium.
        min = (b > c ? c : b); // conditonal operator. 
    }
    else if (b > a && b > c){ 
        max = b;
        medium = (a>c ? a : c);
        min = (a>c? c : a);
    }
    else{
        max = c;
        medium = (a>b ? a : b);
        min = (a>b ? b : a);
    }
    a = min;
    b = medium;
    c = max; 
}
void swap(int &a, int &b, int &c, int &d){
    int temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
}