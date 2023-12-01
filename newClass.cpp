//
// Created by 4ndre on 23/10/2023.
//

#include "newClass.h"
#include <iostream>
using namespace std;

newClass::newClass(double &age, double &weight, double &height) : age1(age), weight1(weight), height1(height)  {
};

double newClass::hfcm2m() {
    height1 = height1*0.01;
    return height1;
};

double newClass::wflb2kg(){
    weight1 = weight1/2.205;
    return  weight1;
};

double newClass::IMC() const{
    return weight1/(height1*height1);
};


struct machine {
    char p;
    char w;
    char e;
};


//int suma(int a, int b) {
//    return a + b;
//}
//
//int resta(int a, int b) {
//    return a - b;
//}
//
//void updateValue(int &a, int &b) {
//    a = suma(a, b);
//    b = resta(a, b);
//}
//
//void idk(int *a, int *b){
//    *a = 0;
//    *b = 0;
//}
//auto generaMatriz(int n, int m){
//    int temp;
//    int a[n][m];
//    for(int i=0 ; i < n; i++){
//        for(int j=0; j < m; j++){
//            cout << "enter value at [" << i << "] [" << j  << "] : " << endl;
//            cin >> temp;
//            a[i][j] = temp;
//        }
//    }
//    return a;
//}
//
//void matriz(int n, int m ,int[n][m]){
//    int temp;
//    int a[n][m];
//    for(int i=0 ; i < n; i++){
//        for(int j=0; j < m; j++){
//            cout << "enter value at [" << i << "] [" << j  << "] : " << endl;
//            cin >> temp;
//            a[i][j] = temp;
//        }
//    }
//}
