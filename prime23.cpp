#include <iostream>
//#include <stdio.h>
using namespace std;

int main()
{
    int userInput, count2, count3;
    bool again = false;
    int checker = 5;
    cout << "Enter a positive integer" << endl;
    cin >> userInput;
    cout << "Example : Input is " << userInput << endl;
    count2 = 0;
    count3 = 0;
    
	//keep dividing by 2 unti you can't
    //keep dividing by 3 until you can't
    //if result == 0, then true
    //else false
    
    
    
	while( ((userInput % checker == 0) ) && ((checker % 3 != 0) && (checker % 2 != 0)))
        
      //  
	{
        if((userInput % checker == 0) )
        {
		      
            again = true; 
        
        
        } 

        checker += 2; 
	}
    while(userInput % 3 == 0)
    { 
        count3++;
        userInput = userInput / 3;
    }

    while(userInput % 2 == 0)
    { count2++;
     userInput = userInput / 2;
    }    
    
    if(userInput != 1)
          again = true;
    
    
    
    
    if(again == true)
        cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;
        cout << "Twos = " << count2 << '\t';
        cout << "Threes = " << count3 << endl;
    }
    
   return 0; 
}
