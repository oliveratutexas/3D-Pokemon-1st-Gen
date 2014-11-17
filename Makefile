#use file glob or something for adding multiple files
#when going back to cmake
SRC_FILES 		=	src/open_image.cpp src/Sprite.cpp src/Tile.cpp 
HEADER_FILES 	= 	src/Tile.h src/Sprite.h 
COMPILE_FLAGS 	= 	#-c

GLFW_FLAG 	=	-lglfw
BOOST_FLAG	=	-lboost_system
GLUT_FLAG	=	#-framework GLUT -framework OpenGL 
GL_FLAG 	=	-lglut -lGLU 
MAGICK_FLAG =	`Magick++-config --cppflags --cxxflags --ldflags --libs`

test:
	g++ $(SRC_FILES) $(COMPILE_FLAGS) -o pokemon3D.run $(GLFW_FLAG) $(GLUT_FLAG) $(BOOST_FLAG) $(GL_FLAG) $(MAGICK_FLAG)

