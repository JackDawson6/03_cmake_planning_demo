#include <iostream>
#include "pnc_map.h"

void mapTest() {
    std::cout << "Testing PNC Map..." << std::endl;
    
    // Create a PNC Map object
    PNC_Map my_map;

    // Call the mapInfo method to display map information
    my_map.mapInfo();
    
    std::cout << "PNC Map test completed." << std::endl;
}

int main() {
    std::cout << "Starting map test..." << std::endl;
    
    // Run the map test
    mapTest();
    
    std::cout << "Map test finished." << std::endl;
    return 0;
}