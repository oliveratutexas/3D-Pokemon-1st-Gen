#include <cstdlib>
#include <iostream>
#include <Magick++.h>
#include <stdio.h>

using namespace std;
using namespace Magick;

int main(int num_args,char** argv){
		
	Image example_image;
	
	example_image.read("ExampleScreenShot.png");
	
	ColorRGB pixel = example_image.pixelColor(100,100);	
	
	printf("%f %s", pixel.red() * 255.0,"Hopefully this is green\n");
	printf("%d %d", example_image.width_ , example_image.height_ );
	
	
	
	return 0;
}
