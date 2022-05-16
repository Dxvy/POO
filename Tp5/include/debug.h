//
// Created by davym on 16/05/2022.
//

#pragma once

#ifdef ISDEBUG
#include <iostream>
#define DEBUG(msg) { \
std::cerr<< " Debug(" <<__FILE__ <<", "<<__LINE__ <<") " << msg << '\n'; \
std::cerr.flush(); }
#else
#define DEBUG(msg)
#endif
