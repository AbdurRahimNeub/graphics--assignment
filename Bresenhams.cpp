#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x1,y1,x2,y2,dx,dy,dx2,dy2,di,step;
    int res;

    cout<<"\nEnter value of x1 and y1 : \n";
    cin>>x1>>y1;

    cout<< x1<<" " << y1;
    cout<<"\nEnter value of x2 and y2 : \n";
    cin>>x2>>y2;

    cout<< x2 <<" "<<y2<< "\n";

    dx = x2 - x1;
    dy = y2 - y1;

    dx2 = 2 * dx;
    dy2 = 2* dy;


    di = dy2 - dx;

    while(x1 != x2 && y1 != y2){
        if(di >= 0){
                di = di + dy2 -dx2;
                y1 += 1;
                x1 += 1;

                cout<< "P("<< x1 <<","<< y1 << ")\n";

        }
        else{
                di = di + dy2;
                y1 = y1;
                x1 += 1;

                cout<< "P("<< x1 <<","<< y1 << ")\n";
        }
    }

    return 0;
}
