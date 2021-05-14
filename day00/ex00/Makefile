appname := megaphone

CXX := g++
CXXFLAGS := -Wall -Wextra -Werror

srcfiles := megaphone.cpp
objects  := $(patsubst %.C, %.o, $(srcfiles))

all: $(appname)

$(appname): $(objects)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(appname) $(objects) $(LDLIBS)


clean:
	rm -f $(objects)

fclean: clean
	rm appname
