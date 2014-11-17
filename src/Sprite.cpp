#include "Sprite.h"

Sprite::Sprite(string nm, const vector < vector<Tile> >& tMap):
name(nm),
tileMap(tMap)
{
    
}

int Sprite::getWidth(){
    
    return tileMap[0].size();

}

int Sprite::getHeight(){

    return tileMap.size();

}


bool Sprite::hasTile(Tile t){
    
    //not sure what the cost of
    //calling that stuff is..
    //so I'm just going w/ this
    //TODO - figure out efficieny
    int width = getWidth();
    int height = getHeight();

    for(int row = 0; row < height; row++){

        for(int col = 0; col < width; col++){

            if(tileMap[row][col] == t)
                return true;
        }
    }

    return false;

}

