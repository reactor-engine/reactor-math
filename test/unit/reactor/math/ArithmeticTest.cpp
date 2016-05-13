#include "catch.hpp"
#include "reactor/type/types.hpp"
#include "reactor/math/Arithmetic.hpp"

using namespace reactor::type;
using namespace reactor::math;

TEST_CASE("Arithmetic sqrt-operation is correct", "[Arithmetic.sqrt]") {
    REQUIRE( Arithmetic<float32>::sqrt(1024) == 32 );
    REQUIRE( Arithmetic<float32>::sqrt(4) == 2 );
    REQUIRE( Arithmetic<float32>::sqrt(1) == 1 );
    REQUIRE( Arithmetic<float32>::sqrt(0) == 0 );

    REQUIRE( Arithmetic<float64>::sqrt(1024) == 32 );
    REQUIRE( Arithmetic<float64>::sqrt(4) == 2 );
    REQUIRE( Arithmetic<float64>::sqrt(1) == 1 );
    REQUIRE( Arithmetic<float64>::sqrt(0) == 0 );

    REQUIRE( Arithmetic<int32>::sqrt(1024) == 32 );
    REQUIRE( Arithmetic<int32>::sqrt(4) == 2 );
    REQUIRE( Arithmetic<int32>::sqrt(1) == 1 );
    REQUIRE( Arithmetic<int32>::sqrt(0) == 0 );
}