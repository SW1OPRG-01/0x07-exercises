#ifndef TEST_UTIL_H
#define TEST_UTIL_H

#include <string>

class TestUtil {
  public:
    bool equal(std::string description, double expected, double actual); 
    bool equal(std::string description, bool expected, bool actual);
};

#endif