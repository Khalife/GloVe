/*
 *  glove.cpp
 *  glove
 *
 *  Created by Sammy on 24/01/2017.
 *
 *
 */

#include <iostream>
#include "glove.hpp"
#include "glovePriv.hpp"

void glove::HelloWorld(const char * s)
{
    glovePriv *theObj = new glovePriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void glovePriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

