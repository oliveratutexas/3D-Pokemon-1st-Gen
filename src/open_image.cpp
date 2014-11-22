#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//Need this for open //gl stuff
//
#include <GL/glew.h>
#include <GL/glut.h>
//#include <GL/glu.h>
//#include <GL/gl.h>

//#include <//gl/free//glut.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

//Need this for the image processing
#include <Magick++.h>

//using namespace std;
//using namespace Magick;

int main(int argc,char** argv){

//    glutInit(&argc,argv);
    //glfwMakeContextCurrent("Glew Test");
//    glutCreateWindow("GLEW Test");

    //Initialise GLFW
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        return -1;
    }

    glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //We don't want the old OpenGL 

    // Open a window and create its OpenGL context 
    GLFWwindow* window; // (In the accompanying source code, this variable is global) 
    window = glfwCreateWindow( 1024, 768, "Tutorial 01", NULL, NULL); 
    if( window == NULL ){
        fprintf( stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. Try the 2.1 version of the tutorials.\n" );
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window); // Initialize GLEW 

    glewExperimental=true; // Needed in core profile 
    glutInit(&argc,argv);

    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to initialize GLEW\n");
        std::cout << glewInit() << std::endl;
        return -1;
    }

    // Ensure we can capture the escape key being pressed below     
    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);            

    // Dark blue background                                         
    glClearColor(0.0f, 0.0f, 0.4f, 0.0f);                           

    do{                                                             
        // Draw nothing, see you in tutorial 2 !                    

        // Swap buffers                                             
        glfwSwapBuffers(window);                                    
        glfwPollEvents();                                           

    } // Check if the ESC key was pressed or the window was closed  
    while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&    
            glfwWindowShouldClose(window) == 0 );                    

    // Close OpenGL window and terminate GLFW                       
    glfwTerminate();                                                

    //Sin//gle Image Sprite Test 1
    {

    }

    //Sin//gle Image Sprite Test 2
    {

    }

    //start_OPEN_//gl();
    return 0;
}
