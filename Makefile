test:
	g++ -o -g open_image open_image.cpp `Magick++-config --cppflags --cxxflags --ldflags --libs` 
done:
	g++ open_image.cpp -lGL -lglut -lGLU -o open_image `Magick++-config --cppflags --cxxflags --ldflags --libs` 
