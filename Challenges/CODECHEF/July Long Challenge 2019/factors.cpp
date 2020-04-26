#include "bits/stdc++.h" 
using namespace std; 

void isPrime(int N) 
{ 
    bool isPrime = true; 

    int arr[8] = { 7, 11, 13, 17, 
                   19, 23, 29, 31 }; 
  
    if (N < 2) { 
        isPrime = false; 
    } 

    if (N % 2 == 0 || N % 3 == 0 
        || N % 5 == 0) { 
        isPrime = false; 
    } 
  
   
    for (int i = 0; i < sqrt(N); i += 30) { 

        for (int c : arr) { 
  
         
            if (c > sqrt(N)) { 
                break; 
            } 
  
       
            else { 
                if (N % (c + i) == 0) { 
                    isPrime = false; 
                    break; 
                } 
            } 
  
        
            if (!isPrime) 
                break; 
        } 
    } 
  
    if (isPrime) 
        cout << "Prime Number"; 
    else
        cout << "Not a Prime Number"; 
} 
  
int main() 
{ 
    int N = 121; 
  
    
    isPrime(N); 
    return 0; 
} 