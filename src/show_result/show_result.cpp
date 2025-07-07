#include <iostream>
#include "show_result.h"
#include <graphics.h>
using std::cout, std::endl;

void show_result::drawResult() {
    cout << "Drawing result..." << endl;
    
    initgraph(1000, 1000);  // Initialize the graphics system
    setbkcolor(WHITE);  // Set background color to white
    cleardevice();  // Clear the device (screen)

    cout << "draw circle" << endl;
    setlinecolor(BLACK);  // Set line color to black
    setlinestyle(PS_SOLID, 4);
    circle(500, 500, 200);
    circle(500, 500, 400);
    

    system("pause");
    closegraph();
}