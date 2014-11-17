#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "Tile.h"
#include <vector>
#include <string>

using namespace std;

class Sprite{
    
    public:
        bool hasTile(Tile t);
        int getWidth();
        int getHeight();
        Sprite(string nm,const vector< vector<Tile> >& tMap);

    private:
        string name;
        vector< vector<Tile> > tileMap;

};

#endif //_SPRITE_H_e
