#include<iostream>
#include "process.h"
using std::cout, std::endl;

int main(){
    cout << "planing start" << endl;
    Process pro;
    pro.planProcess();
#ifdef DEBUG
    cout << ">>>------------Debug mode is ON------------<<<" << endl;
#else  
    cout << ">>>------------Debug mode is OFF------------<<<" << endl;
#endif

    cout << "planing end" << endl;
}
