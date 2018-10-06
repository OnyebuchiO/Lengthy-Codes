#include <iostream>
#include <cmath>

using namespace std;

int main()   
{
    int angle;
     double xAxis;
   // double const YAXIS = 30;
    cout << "Enter a number  between 15 through 75";
    cin >> angle;
    
    
   for(int i = 0; i < 31; i++)
   {
       xAxis = tan(angle * (M_PI/180)) * i; 
       if(xAxis >= 20 && xAxis <=30)
           xAxis = 20;
        for(int j = 0; ( j < xAxis); j++)
        {
          cout << "*";
        }
       
   cout << endl;
   }
}
