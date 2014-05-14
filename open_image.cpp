#include <cstdlib>
#include <iostream>
#include <stdio.h>

//Need this for open gl stuff
#include <GL/freeglut.h>

//Need this for the image processing
#include <Magick++.h>

using namespace std;
using namespace Magick;

// This sets the camera to a front view
static void setCamera(){

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	/*
	 * glFrustum must receive positive values for the near and far clip planes
	 * ( arguments 5 and 6 ).
	 */
	float fleft = -100;
	float fright = 100;
	float fbottom = -100;
	float ftop = 100;
	float zNear = 100;
	float zFar = -100;

	glFrustum(fleft, fright, fbottom, ftop, -zNear, -zFar);

	/* Set the drawing point at the center of the frustum */
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity( );

	/* Go to the center of the scene */
	glTranslatef(
		(fleft + fright) / 2,
		(fbottom + ftop) / 2,
		(zNear + zFar) / 2);



}

static void drawStuff(){

	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();	
	
	int width = 4;
	int height = 4;
	float cube_dimen = 0.005f;

	int pic[][4] = {
		{1,0,0,1},
		{0,0,0,0},
		{1,0,0,1},
		{1,1,1,1}
	};	

	glPushMatrix();
	glColor3f(0.2f,0.2f,0.2f);

	int i,j = 0;
	for(i = 0;i < height; i++){

		for(j = 0;j< width; j++){
			
			//shift x
			glTranslatef(cube_dimen,0.0f,0.0f);

			if(pic[i][j] == 1){

			glutSolidCube(cube_dimen);

			}
		}
		
		//gotta compensate for the shifts I just made
		glTranslatef(-width * cube_dimen,-cube_dimen,0.0f);
	}

	glPopMatrix();
	
	//Do this or the page won't change after I paint everything	
	glFlush();	/* Flush all executed OpenGL ops finish */

	glutSwapBuffers();
	
}

static void start_OPEN_GL(){
	
	//START AN OPEN_GL WINDOW	
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
	glutInitWindowSize(1024,768);
	glutInitWindowPosition(100,100);
	glutCreateWindow("It's happening!!!11!!1");
	
	glutDisplayFunc(drawStuff);
	
	//This is the background color in float
	//I'm making the background white because it makes sense
	glClearColor(1.0f,1.0f,1.0f,1.0f);

	glutMainLoop();

}

int main(int argc,char** argv){
		
	Image example_image;
	
	glutInit(&argc,argv);
	start_OPEN_GL();
		
	example_image.read("ExampleScreenShot.png");
	ColorRGB pixel = example_image.pixelColor(100,100);	
		
	printf("%f %s", pixel.red() * 255.0,"Hopefully this is green\n");
	printf("%d %d", (int)example_image.size().width() ,(int) example_image.size().height() );
	
	return 0;
}
