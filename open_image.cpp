#include <cstdlib>
#include <iostream>
#include <stdio.h>

//Need this for open gl stuff
#include <GL/freeglut.h>

//Need this for the image processing
#include <Magick++.h>

using namespace std;
using namespace Magick;

static void drawStuff();
static void project_img();

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

	glFrustum(fleft, fright, fbottom, ftop, zNear, zFar);

	/* Set the drawing point at the center of the frustum */
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity( );

	/* Go to the center of the scene */
	glTranslatef(
		(fleft + fright) / 2,
		(fbottom + ftop) / 2,
		(zNear + zFar) / 2);



}

static void mouseStuff(int button, int state, int x, int y){
	
	float d_x = 5.0;
		
	switch(button){
		
	case GLUT_LEFT_BUTTON	:	glRotatef(d_x, 0.0, 1.0, 0.0);	break;
	case GLUT_RIGHT_BUTTON	:	glRotatef(-d_x, 0.0, 1.0, 0.0);	break;
	default: 			break;
	
	}	
	
	project_img();
	//TODO - refresh screen here
}

float CUBE_DIMEN = 0.010f;
Image cur_img;

static void project_img(void){
	
	//TODO - this will be the bulkiest function.
	// Need to add in intelligence when I got images.
		
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
	
	glPushMatrix();
	
	int img_height = cur_img.size().height();
	int img_width = cur_img.size().width();
	int row,col = 0;
	
	
	for(col = 0; col < img_height; col++ )
	{
		for(row = 0; row < img_width; row++){
			
			ColorRGB pixel = cur_img.pixelColor(row,col);
			float r_comp = pixel.red();
			float g_comp = pixel.green();
			float b_comp = pixel.blue();
				
			glTranslatef(CUBE_DIMEN,0.0f,0.0f);
			glColor3f(r_comp,g_comp,b_comp);
			glutSolidCube(CUBE_DIMEN);
		
		}
		
		glTranslatef(-1 * img_width * CUBE_DIMEN, -CUBE_DIMEN, 0.0f);

	}	

	glPopMatrix();
	glFlush();
	glutSwapBuffers();
}

static void drawStuff(){

	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();	
	
	int width = 4;
	int height = 4;
	float cube_dimen = 0.10f;

	int pic[][4] = {
		{1,0,0,1},
		{0,2,2,0},
		{1,2,2,1},
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
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("It's happening!!!11!!1");
	
	glutDisplayFunc(project_img);
	glutMouseFunc(mouseStuff);	
	//This is the background color in float
	//I'm making the background white because it makes sense
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	printf("Hello World\n");
	glutMainLoop();

}

int main(int argc,char** argv){
		
	glutInit(&argc,argv);
		
	cur_img.read("ExampleScreenShot.png");
	ColorRGB pixel = cur_img.pixelColor(100,100);	
		
	printf("Hello World\n");
	printf("%f %s", pixel.red() * 255.0,"Hopefully this is green\n");
	printf("%d %d", (int)cur_img.size().width() ,(int)cur_img.size().height() );


	start_OPEN_GL();
	return 0;
}
