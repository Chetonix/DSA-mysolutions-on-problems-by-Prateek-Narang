#include<iostream> 
#include<vector>
#include<string>
using namespace std; 

//Method which outputs fizzBuzz, fizz, and buzz on certain conditions, output is a vector
//of strings
vector<string> fizzbuzz(int n){
    vector<string> result;
    
    for(int i = 1; i <= n; i++)
    {
        if (i%15 == 0)     //Divisible by both 5 and 3
        {
            result.push_back("FizzBuzz");
        }

        else if (i%5 == 0)   //divisible by only 5 and not 3
        {
            result.push_back("Buzz");

        }

        else if (i%3 == 0)  //divisible by only 3 and not 5
        {
            result.push_back("Fizz");
        }

        else{               //divisible by neither 5 nor 3
            result.push_back(to_string(i));
        }
    }
    return result;   //output as a vector of strings with numbers, fizzbuzz, fizz, or buzz.

    
}
// Driver Code 
int main() 
{ 
    vector<string> output = fizzbuzz(100);

    for (string x: output){         //print individual elements of the vector
        cout << x << endl;
    }

    return 0; 
} 