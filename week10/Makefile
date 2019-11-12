.SUFFIXES: .cpp .h .o

OBJECTS = vehicle.o car.o bike.o main.o
CPP = vehicle.cpp car.cpp bike.cpp main.cpp

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) : $(CPP)
	$(CXX) -c $(CPP)

clean :
	rm -rf $(OBJECTS)

vehicle.o : vehicle.cpp

car.o : car.cpp

bike.o : bike.cpp

main.o : main.cpp
