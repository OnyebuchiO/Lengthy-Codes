#include <iostream>
#include <cmath>
#include "bmplib.h"

using namespace std;

// global variable. bad style but ok for this lab
unsigned char image[SIZE][SIZE];

// Fill in this function:


void draw_rectangle(int top, int left, int height, int width) {
   
            for(int i = 0; i <= width; i++)
            {
                 if((top <= 255 && top > 0 ) && (left +i <= 255 && left +i > 0))
                  {
                    //image[top][left] = 0;
                     image[top][left + i] = 0;
                 }
            }
            for(int i = 0; i <= height; i++)
            {
                if((top + i  <= 255 && top + i  > 0 ) && (left<= 255 && left > 0))
                  {
                   // image[top][left] = 0;
                     image[top+i][left] = 0;
                }

            }
            for(int i = 0; i <= width; i++)
            {
                if((top + height <= 255 && top + height > 0 ) && (left + i <= 255 && left+ i   > 0))
                {
                    //image[top + height][left] = 0;
                     image[top + height][left + i] = 0;
                }
            }
            for(int i = 0; i <= height; i++)
            {
                if((top+ i  <= 255 && top+ i  > 0 ) && (left + width <= 255 && left+ width > 0))
                  {
                   // image[top][left + width] = 0;
                     image[top+i][left + width] = 0;
                }

            } 
   
}

// Fill in this function:
void draw_ellipse(int cy, int cx, int height, int width) 
{      
        for(double theta = 0; theta <= 2*3.14; theta = theta + .01)
        {
            int x, y, xParameter, yParameter;
            x = (width / 2.0) * cos(theta);
            y = (height / 2.0) * sin(theta);
            xParameter = cx + y;
            yParameter = cy +x;
            if((xParameter <= 255 && xParameter > 0 ) && (yParameter <= 255 && yParameter > 0))
            {
                 image[cx + y][cy +x] = 0;
            }
            
        }
   
}


int main()
{
    
    // Initialization of variables
    int top,  left,  height,  width;
   // initialize the image to all white pixels
       for (int i=0; i < SIZE; i++)
       {
          for (int j=0; j < SIZE; j++) 
          {
             image[i][j] = 255;
          }
       }
   
   // Main program loop here
    
    int userInput;
    cout << "To draw a rectangle, enter: 0 top left height width" << endl;
   cout << "To draw an ellipse, enter: 1 cy cx height width" << endl;
   cout << "To save your drawing as 'output.bmp' and quit, enter: " << endl;
    //cin >> userInput;
    while(cin >> userInput)
    {
        //Allow for user input


            if(userInput == 0)
            {
            cout << "What top left coordinate do you want?" << endl;
            cout << "top: ";
            cin >> top;
            cout << endl;
            cout << "left " ;
            cin >> left;
            cout << endl;
            cout << "height: ";
            cin >> height;
            cout << endl;
            cout << "width " ;
            cin >> width;
            cout << endl; 
                draw_rectangle(top, left, height, width);
            }
            else if(userInput == 1)
            {
            cout << "What top left coordinate do you want?" << endl;
            cout << "cy: ";
            cin >> top;
            cout << endl;
            cout << "cx " ;
            cin >> left;
            cout << endl;
            cout << "height: ";
            cin >> height;
            cout << endl;
            cout << "width " ;
            cin >> width;
            cout << endl; 
                draw_ellipse(top, left, height, width);
            }
            else if(userInput == 2)
            {
               // Write the resulting image to the .bmp file
               writeGSBMP("output.bmp", image);
                break;
            }
            else
                cout << "You did not input the correct response";
        //cin >> userInput;
       cout << "To draw another rectangle, enter: 0 top left height width" << endl;
       cout << "To draw another ellipse, enter: 1 cy cx height width" << endl;
       cout << "To save your drawing as 'output.bmp' and quit, enter: " << endl;
    }
   cout << "Thank you for participating\n";
   return 0;
}
