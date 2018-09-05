// example.cpp
#include <emscripten/bind.h>
#include <iostream>
#include <sstream>

using namespace emscripten;

float lerp(float a, float b, float t) {
    return (1 - t) * a + t * b;
}

void echo(std::string s) {
    std::cout << s << std::endl;
}

std::string greeting(std::string name) {
    std::ostringstream os;
    os << "Hello " << name;
    return os.str();
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("lerp", &lerp);
    function("echo", &echo);
    function("greeting", &greeting);
}