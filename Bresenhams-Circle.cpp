#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,y,x1,y1,dx,dy,dx2,dy2,pi,r,n;
    int res;

    cout<<"\nEnter value of x and y : \n";
    cin>>x1>>y1;

    cout<<"\nEnter value of r : \n";
    cin>>r;
    pi = 3 - 2*r;

    cout<< "\n\n";

    x = 0;
    y = r;
    n=0;


   while(x != y){
    if(pi>=0){


        pi = pi + 4 * (x - y) + 10;
        cout<< "P("<< x <<","<< y<< ")\n";

        x += 1;
        y -= 1;


    }
    else if(pi<0){

        pi = pi + 4 * x + 6;
        cout<< "P("<< x <<","<< y<< ")\n";


        x += 1;
        y = y;
    }
    if(x==y){
        cout<< "P("<< x <<","<< y<< ")\n";
    }
   }
    return 0;
}


