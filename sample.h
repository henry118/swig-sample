#ifndef __SWIG_SAMPLE__
#define __SWIG_SAMPLE__

#include <string>

class Sink {
public:
    virtual ~Sink() {}
    virtual void sink_foo();
    virtual void sink_bar(const std::string & s);
};

class Sample {
    Sink * _sink;
public:
    Sample(Sink * s) : _sink(s) {}
    void sample_call();
    void sample_foo();
    void sample_bar();
};

#endif //__SWIG_SAMPLE__
