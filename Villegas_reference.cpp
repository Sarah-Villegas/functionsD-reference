// Name: Sarah Villegas 
// October 15, 2015
// Function D



#include <iostream>
#include <cassert>
using namespace std; 

void sort(int& numA, int& numB, int& numC);


void numDigits(int valA, int& n);


void computeSphere(double& a, double& v, double r);


void swap(int& A, int& B);


int main(){

    int val1 =3, val2 =8, val3 = 2;
    sort(val1,val2,val3);
    int num1 = 71, num3 = 42, num2=78;
    sort(num1,num2,num3);

    return 0; 
}

void sort(int& numA, int& numB, int& numC){

    int biggest, middle, smallest; 

    if((numC > numB) && (numC > numA)){
    
        biggest = numC; 
        
        if (numB < numA){
        
            smallest = numB;
            middle = numA;
        }
        else {
            smallest =numA;
            middle= numB;
        }
    }
    
    if((numB > numC) && (numB > numA)){
    
        biggest = numB; 
        
        if (numC < numA){
        
            smallest = numC;
            middle = numA;
        }
        else {
            smallest =numA;
            middle= numC;
        }
    }
    if((numA > numB) && (numA > numC)){
    
        biggest = numA; 
        
        if (numB < numC){
        
            smallest = numB;
            middle = numC;
        }
        else {
            smallest =numC;
            middle= numB;
        }
    }
    
     numA = smallest;
     numB = middle;
     numC = biggest;
     
     cout << numA << " " << numB << " "<< numC << endl;
        
    return ; 
}

