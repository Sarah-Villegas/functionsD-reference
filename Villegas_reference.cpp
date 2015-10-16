// Name: Sarah Villegas 
// October 15, 2015
// Function D



#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

// sorts the numbers  smaller to largest 
void sort(int& numA, int& numB, int& numC);


void numDigits(int valA, int& n);


void computeSphere(double& a, double& v, double r);


void swap(int& A, int& B);


int main(){

    int val1 =3, val2 =8, val3 = 2;
    sort(val1,val2,val3);
    int num1 = 71, num3 = 42, num2=78;
    sort(num1,num2,num3);

    int testNumber = 1789, testNumber2 = -46783, test1, test2;
    numDigits(testNumber, test1);
    cout << "should be 4" << endl;
    numDigits(testNumber2, test2);
    cout << "should be 5" << endl;

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

void numDigits(int valA, int& n){

    int numTest = abs(valA);
    int placeValue = 1;
    if (numTest / 100000 > 0){
        placeValue++;
    }
    if (numTest / 10000 > 0){
        placeValue++;
    }
    if (numTest / 1000 > 0){
        placeValue++;
    }
    if (numTest / 100 > 0){
        placeValue++;
    }
    if (numTest / 10 > 0){
        placeValue++;
    }
    n = placeValue;
    cout << n << endl;
}





