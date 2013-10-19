%module(directors="1") sample
%include "std_string.i"
%{
#include "sample.h"
%}
%feature("director") Sink;
%include "sample.h"
