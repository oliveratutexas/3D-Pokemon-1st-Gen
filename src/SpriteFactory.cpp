/*
 * SpriteFactory.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: oliver
 */

#include "SpriteFactory.h"
#include "sprite.h"
#include "Tile.h"
#include <boost/filesystem.hpp>
#include <Magick++.h>

using namespace boost::filesystem;
using namespace Magick;
/*
 *
 * Takes in the source image for a particular frame. Does processing on that image.
 *
 */

SpriteFactory::SpriteFactory(Image& src_img) {

    SpriteFactory::src_img = src_img; 

}

extern map<Tile*,Sprite*> quartile_to_sprite;
extern vector<Sprite>	sprites;
extern vector<long int,Tile*> hash_to_sprite;

SpriteFactory::getSprites(){

    //open the images
    //open the sprite references
    //
}

SpriteFactory::makeSprite(){

}

SpriteFactory::~SpriteFactory() {
	// TODO Auto-generated destructor stub
}

