#include <iostream>
#include <cstdlib>


using namespace std;

int getRandom();
int addToArray(int arr [],int x1);
void printHistogram(int arr []);
    

int main()
{
    //int const MAX_NUMBER = 10000;
     int myArray[21] = {0};
     //int randomNumber;
    int randomSumCalculated, vauluesFromArray;

    srand(time(0));
     //cout << addToArray(randomNumber);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
       randomSumCalculated = getRandom();
       vauluesFromArray = addToArray(myArray, randomSumCalculated);
    }
    printHistogram(myArray);
     
 return 0;   
}

int getRandom()
{
   int x1,x2, x3, x4;
   int randomNumber;
    x1 = rand()%6 + 1;
    x2 = rand()%6 + 1;
    x3 = rand()%6 + 1;
    x4 = rand()%6 + 1;
    randomNumber = x1 + x2 + x3 + x4;
    //cout << "This : " << randomNumber << endl;
    return randomNumber;
    
}
int addToArray(int myArray [], int randomNumber)
{ 
       myArray[randomNumber - 4]  = myArray[randomNumber - 4] + 1;
    return 0;
}

void printHistogram(int addToArray[])
{
    for(int i = 4; i < 25; i++)
    {
        cout << i << ": ";// << addToArray[i-4]; 
            for( int j = 0; j < addToArray[i-4]; j++)
            {
               cout << "X"; 
            }
        cout << endl;
    }
    
}
