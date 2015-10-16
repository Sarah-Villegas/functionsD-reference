// Name: Sarah Villegas 
// October 15, 2015
// Function D



#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

// ********************************************************
void sort(int& numA, int& numB, int& numC);
// Summary: it sorts out the numbers and displays them least to greates.
// Precondition: 
// .
// Postcondition: checks the smallest versus the greatest and defaluts which one is the middle valuse 
//
// ********************************************************
//


// ********************************************************
void numDigits(int valA, int& n);
// Summary: counts how many place valuse the number has 
// Precondition: count how mant place value the number has 
// 
// Postcondition: caluclates the number of digits the number has 
//
// ********************************************************
//


// ********************************************************
void computeSphere(double& a, double& v, double r);
// Summary:  computes the valuse of area and volume .
// Precondition:  calculates the area and volume of a sphere 
// 
// Postcondition: returns the area and volume of the sphere 
//
// ********************************************************
//

// ********************************************************
void swap(int& A, int& B);
// Summary: swaps the valuse of the numbers 
// Precondition: gets to valuse and switches the values 
//
// Postcondition: returns the values swicthed 
//
// ********************************************************
//




int main(){

    double ESP = .0001;

    int val1 =3, val2 =8, val3 = 2;
    sort(val1,val2,val3);
    int num1 = 71, num3 = 42, num2=78;
    sort(num1,num2,num3);

    int testNumber = 1789, testNumber2 = -46783, test1, test2;
    numDigits(testNumber, test1);
    cout << "should be 4" << endl;
    numDigits(testNumber2, test2);
    cout << "should be 5" << endl;
    
    double raduis1 = 4.7 , raduis2 = 2.3, volume1, volume2, area1, area2;
    computeSphere(area1, volume1, raduis1); 
    cout << "should be 277.972, 434.489" << endl;
    computeSphere(area2, volume2, raduis2);
    cout << "should be 66.5672,  501.0349" << endl;
    
    
    int value1= 12, value2=47, value3= 9, value4 =68;
    swap(value1, value2);
    cout << "47, 12 " << endl;
    swap(value3, value4);
    cout << "68, 9" << endl;
    
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

void computeSphere(double& a, double& v, double r){

    double PI = 3.1459;
    a = 4 * PI *pow(r,2);
    v = (4.0/3.0)  * PI * pow(r,3);
    cout << a << "area" << v << "volume"<< endl; 

}
void swap(int& A, int& B){
    // needed a varibale to hold a value so it can be switched 
    int temp = A;
    A = B;
    B = temp; 
}


