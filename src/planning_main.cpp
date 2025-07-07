#include<iostream>
#include "process.h"
#include "show_result.h"
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

    cout << "show result start" << endl;
    show_result result;
    result.drawResult();
    cout << "show result end" << endl;

}
