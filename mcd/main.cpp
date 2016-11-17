//
//  main.cpp
//  mcd
//
//  Created by Matthew Tso on 11/15/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#include <iostream>
#include "Hashbrown.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hash of \"A Test\":\n"<< mcd::hashbrown("A Test") << std::endl;
    
    std::string input = "F12345678901234567890123456789012345678901234567890thequickbrownfox";
    std::cout << mcd::hashbrown(input) << std::endl;
    return 0;
}
