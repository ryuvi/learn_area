#-------------------------#
CPP = g++
RM  = del /f /s /q

#-------------------------#
CPPSOURCE = $(wildcard *.cpp)
HPPSOURCE = $(wildcard include/*.hpp)

#-------------------------#
BIN_DIR = bin

#-------------------------#
INFLAGS  = -I $(HPPSOURCE)

CPPFLAGS = $(INFLAGS) \
		   -Wall

all:
	$(CPP) $(CPPSOURCE) $(CPPFLAGS) -o bin/NavyBattle

clean:
	$(RM) bin\\*