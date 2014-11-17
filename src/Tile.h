#ifndef TILE_H_
#define TILE_H_

#include <Magick++.h>

using namespace Magick;

class Tile{
    
    public:
        bool operator==(const Tile& t);
        Tile(Image im);
    
    private:
        Image img;
};

#endif /* TILE_H_ */
