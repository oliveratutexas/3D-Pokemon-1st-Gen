/*
 * Tile.cpp
 *
 *  Created on: Jul 2, 2014
 *      Author: oliver
 */
#include <vector>
#include <Magick++.h>
#include "Tile.h"
#include <boost/filesystem.hpp>

using namespace boost::filesystem;
using namespace Magick;

Tile::Tile(Image im){

    //TODO - need to understand how this copying works
    img = im;

}

bool Tile::operator==(const Tile& t){
    
    //TODO - pass
    return false;

}
