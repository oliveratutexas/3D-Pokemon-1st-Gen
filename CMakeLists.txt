cmake_minimum_required (VERSION 2.6)
project (PROJECTOR)

set( PROJECTOR_VERSION_MAJOR 0)
set( PROJECTOR_VERSION_MINOR 1)

set( SOURCE_FILES 
        src/Sprite.cpp
        src/Sprite.h
        src/Tile.cpp
        src/Tile.h
)

add_executable( Projector.run ${SOURCE_FILES}  )

add_subdirectory(libs)

include_directories(
 	libs/AntTweakBar-1.16/include/
    libs/glfw-3.0.3/include/GLFW/
	libs/glm-0.9.4.0/
	libs/glew-1.9.0/include/
	libs/assimp-3.0.1270/include/
	libs/bullet-2.81-rev2613/src/
	.
)

#I'm 
add_definitions(
    -DTW_STATIC
    -DTW_NO_LIB_PRAGMA
    -DTW_NO_DIRECT3D
    -DGLEW_STATIC
    -D_CRT_SECURE_NO_WARNINGS
)

# It would be smart to add in library checks in here. I'm not sure if there
# could be a script later to give the user the option to download the library
# but whatever. 

# TODO - make a script that will download the boost library according
# to the correct platform

find_package(Boost) 
include_directories(${Boost_INCLUDE_DIRS})

find_package(ImageMagick COMPONENTS Magick++)
include_directories(${ImageMagick_INCLUDE_DIRS})

# TODO - this doesn't rollback versions. It just sets a min version requirement.
#   I'd like to roll back the versions.
find_package(OpenGL)
include_directories(${OpenGL_INCLUDE_DIRS})

#find_package(GL)
#include_directories(${GL_INCLUDE_DIRS})

#find_package(GLFW)
#include_directories(${GLFW_INCLUDE_DIRS})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})

find_package(GLU)
include_directories(${GLUE_INCLUDE_DIRS})

find_package(GLEW)
include_directories(${GLEW_INCLUDE_DIRS})

#I'm not sure what this is
#but whatever

#Where do I go to see which libraries I should include?
## Go to the findboost file. There should be a findX.cmake file for 
#   most things I suppose. That's weird.

set( ALL_LIBS
        ${ImageMagick_LIBRARIES}
        ${Boost_LIBRARIES}
        ${GLU_LIBRARIES}
        ${OpenGL_LIBRARIES}
        ${GLUT_LIBRARIES}
        ${GLEW_LIBRARIES}
)

target_link_libraries(Projector.run ${ALL_LIBS})

