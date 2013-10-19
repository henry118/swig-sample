#include "sample.h"
#include <iostream>

void Sink::sink_foo() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Sink::sink_bar(const std::string & s) {
    std::cout << s << std::endl;
}

void Sample::sample_call() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Sample::sample_foo() {
    if (_sink) {
        _sink->sink_foo();
    }
}

void Sample::sample_bar() {
    if (_sink) {
        _sink->sink_bar("Let's test sink_bar");
    }
}
