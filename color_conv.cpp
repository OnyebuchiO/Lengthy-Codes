#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   double red, green, blue;
   double white;
   double cyan, magenta, yellow, black;
   double firstMax, secondMax;
    
   cin >> red >> green >> blue;
    
    firstMax = max(red , green) ;
    //cout << firstMax << endl;
    secondMax = max(firstMax ,blue );
    white = max(secondMax/255 , firstMax /255);
   // cout << "This is white" <<  white << endl;
    
   cyan = (white - red/255.0) / white ;
   magenta = (white - green/255.0) / white ;
   yellow = (white - blue/255.0 ) / white ;
   
   black = 1 - white;
    
    cout << "cyan :" << cyan << endl;
    cout << "magenta :" << magenta<< endl;
    cout << "yellow :" << yellow<< endl;
    cout << "black :" << black<< endl;
   
   
   return 0;
}
