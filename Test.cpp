/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
   
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));



    
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string("")); 
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));
    CHECK(find(text, "happy") == string(""));


}
