#include "catch.hpp"
#include "reactor/type/types.hpp"
#include "reactor/math/Arithmetic.hpp"

using namespace reactor::type;
using namespace reactor::math;

TEST_CASE("Arithmetic sqrt-operation is correct", "[Arithmetic.sqrt]") {
    int attempts[][2] = {{1024, 32}, {225, 15}, {121, 11}, {4, 2}, {1, 1}, {0, 0}};

    for (auto &occur : attempts) {
        if (occur[0] <= 256) {
            if (occur[0] <= 128) {
                REQUIRE(Arithmetic<int8>::sqrt(occur[0]) == occur[1]);
            }
            REQUIRE(Arithmetic<uint8>::sqrt(occur[0]) == occur[1]);
            REQUIRE(Arithmetic<byte>::sqrt(occur[0]) == occur[1]);
        }

        REQUIRE( Arithmetic<int16>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<int32>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<int64>::sqrt(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<uint16>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<uint32>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<uint64>::sqrt(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<float32>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<float64>::sqrt(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<real>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<uint>::sqrt(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<integer>::sqrt(occur[0]) == occur[1] );
    }

    REQUIRE( Arithmetic<float32>::sqrt(2.25f) == 1.5f );
    REQUIRE( Arithmetic<float64>::sqrt(2.25) == 1.5 );
}