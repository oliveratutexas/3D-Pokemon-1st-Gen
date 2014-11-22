#use file glob or something for adding multiple files
#when going back to cmake
SRC_FILES 		=	src/open_image.cpp src/Sprite.cpp src/Tile.cpp 
HEADER_FILES 	= 	src/Tile.h src/Sprite.h 
COMPILE_FLAGS 	= 	#-c

GLFW_FLAG 	=    -lX11 -lXxf86vm -lXrandr -lpthread  -lXi 
BOOST_FLAG	=	-lboost_system
GLUT_FLAG	=	#-framework GLUT -framework OpenGL 
GL_FLAG 	=	-lglfw3 -lGL -lGLU -lglut -lGLEW 
MAGICK_FLAG =	`Magick++-config --cppflags --cxxflags --ldflags --libs`

test:
	g++ $(SRC_FILES) $(COMPILE_FLAGS) -o pokemon3D.run  $(BOOST_FLAG) $(GL_FLAG)  $(GLFW_FLAG)  $(MAGICK_FLAG) 

