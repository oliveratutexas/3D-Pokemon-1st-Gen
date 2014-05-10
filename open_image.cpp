#include <cstdlib>
#include <iostream>
#include <stdio.h>

//Need this for open gl stuff
#include <GL/freeglut.h>

//Need this for the image processing
#include <Magick++.h>

using namespace std;
using namespace Magick;

static void drawStuff(){

	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();	

}

int main(int argc,char** argv){
	
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
	glutInitWindowSize(1024,768);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Tutorial 10");
	
	glutDisplayFunc(drawStuff);

	glClearColor(0.0f,0.0f,0.0f,0.0f);

	glutMainLoop();
			
	Image example_image;
	
	example_image.read("ExampleScreenShot.png");
	ColorRGB pixel = example_image.pixelColor(100,100);	
		
	printf("%f %s", pixel.red() * 255.0,"Hopefully this is green\n");
	printf("%d %d", (int)example_image.size().width() ,(int) example_image.size().height() );
	
	
	
	return 0;
}
