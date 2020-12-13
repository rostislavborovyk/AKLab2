# AKLab2

## Program code

#### Makefile
```
main: main.o calculator.o
	g++ main.o calculator.o -o main

main.o: main.cpp
	g++ -c main.cpp

calculator.o: calculator.cpp
	g++ -c calculator.cpp

clean:
	rm -rf *.o
```

#### CMakeLists.txt
```
cmake_minimum_required(VERSION 2.8)

project(hello_world)

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB calculator.cpp)

add_library(calculator STATIC ${SOURCE_LIB})
add_executable(main ${SOURCE_EXE})

target_link_libraries(main calculator)

```