//
//  Hashbrown.hpp
//  mcd
//
//  Created by Matthew Tso on 11/15/16.
//  Copyright © 2016 Matthew Tso. All rights reserved.
//

#ifndef MCD_HASHBROWN_H
#define MCD_HASHBROWN_H

//#include <iostream> // only used for debugging
#include <string>

namespace mcd {
    
    // Returns a 40 hex-char string of the input's SHA1 hash.
    std::string hashbrown(const std::string& input);
}

#endif /* Hashbrown_hpp */
