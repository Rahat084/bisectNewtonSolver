# Implementation bisection and newton's method in C++

g++ -c functions.cpp
g++ -c bisection.cpp
g++ -c newton.cpp

g++ -o bisect bisection.o functions.o
g++ -o newton newton.o functions.o
