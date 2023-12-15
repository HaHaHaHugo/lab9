#include<iostream>
#include<string>
using namespace std;

void printO(int x,int y){
    if(x>0&&y>0){
        for(int j=0; j<x; j++){
            for(int j=0; j<y; j++){
            cout << "O";
            }cout << "\n";
        }
    }else{
        cout << "Invalid input";
    }
}
