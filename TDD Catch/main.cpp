#include <catch2/catch_test_macros.hpp>
#include <string.h>

std::string FirstLetterUpperCase( std::string txt ) {
    txt[0] = toupper(txt[0]);
    return txt;
}

TEST_CASE( "FirstLetterUpperCase", "[FirstLetterUpperCase]" ) {
    REQUIRE( FirstLetterUpperCase("testing1") == "Testing1" );
    REQUIRE( FirstLetterUpperCase("Testing2") == "Testing2" );
    REQUIRE( FirstLetterUpperCase("probando codigo") == "Probando codigo" );
    REQUIRE( FirstLetterUpperCase("Prueba final") == "Prueba final" );
}