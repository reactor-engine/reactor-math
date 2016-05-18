#include "catch.hpp"
#include "reactor/common/type/types.hpp"
#include "reactor/math/Arithmetic.hpp"

using namespace reactor::common::type;
using namespace reactor::math;

TEST_CASE("Arithmetic abs-operation is correct", "[Arithmetic.abs]") {
    int attempts[][2] = {{0, 0}, {1, 1}, {-1, 1}, {-25, 25}, {-120, 120}, {1024, 1024}, {-0, 0}};

    for (auto &occur : attempts) {
        if (occur[0] >= 0) {
            if (occur[0] <= 256) {
                REQUIRE( Arithmetic<uint8>::abs(occur[0]) == occur[1] );
                REQUIRE( Arithmetic<byte>::abs(occur[0]) == occur[1] );
            }
            REQUIRE( Arithmetic<uint16>::abs(occur[0]) == occur[1] );
            REQUIRE( Arithmetic<uint32>::abs(occur[0]) == occur[1] );
            REQUIRE( Arithmetic<uint64>::abs(occur[0]) == occur[1] );
            REQUIRE( Arithmetic<uint>::abs(occur[0]) == occur[1] );
        }
        if (occur[0] <= 128) {
            REQUIRE( Arithmetic<int8>::abs(occur[0]) == occur[1] );
        }

        REQUIRE( Arithmetic<int16>::abs(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<int32>::abs(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<int64>::abs(occur[0]) == occur[1] );



        REQUIRE( Arithmetic<float32>::abs(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<float64>::abs(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<real>::abs(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<integer>::abs(occur[0]) == occur[1] );
    }

    REQUIRE( Arithmetic<float32>::abs(-2.25f) == 2.25f );
    REQUIRE( Arithmetic<float64>::abs(-2.25) == 2.25 );
}


TEST_CASE("Arithmetic sqr-operation is correct", "[Arithmetic.sqr]") {
    int attempts[][2] = {{32, 1024}, {15, 225}, {11, 121}, {2, 4}, {1, 1}, {0, 0}};

    for (auto &occur : attempts) {
        if (occur[1] <= 256) {
            if (occur[1] <= 128) {
                REQUIRE( Arithmetic<int8>::sqr(occur[0]) == occur[1] );
            }
            REQUIRE( Arithmetic<uint8>::sqr(occur[0]) == occur[1] );
            REQUIRE( Arithmetic<byte>::sqr(occur[0]) == occur[1] );
        }

        REQUIRE( Arithmetic<int16>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<int32>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<int64>::sqr(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<uint16>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<uint32>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<uint64>::sqr(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<float32>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<float64>::sqr(occur[0]) == occur[1] );

        REQUIRE( Arithmetic<real>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<uint>::sqr(occur[0]) == occur[1] );
        REQUIRE( Arithmetic<integer>::sqr(occur[0]) == occur[1] );
    }

    REQUIRE( Arithmetic<float32>::sqr(1.5f) == 2.25f );
    REQUIRE( Arithmetic<float64>::sqr(1.5) == 2.25 );
}


TEST_CASE("Arithmetic sqrt-operation is correct", "[Arithmetic.sqrt]") {
    int attempts[][2] = {{1024, 32}, {225, 15}, {121, 11}, {4, 2}, {1, 1}, {0, 0}};

    for (auto &occur : attempts) {
        if (occur[0] <= 256) {
            if (occur[0] <= 128) {
                REQUIRE( Arithmetic<int8>::sqrt(occur[0]) == occur[1] );
            }
            REQUIRE( Arithmetic<uint8>::sqrt(occur[0]) == occur[1] );
            REQUIRE( Arithmetic<byte>::sqrt(occur[0]) == occur[1] );
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


TEST_CASE("Arithmetic min-operation is correct", "[Arithmetic.min]") {
    int attempts[][3] = {{100, 32, 32}, {15, 25, 15}, {0, 11, 0}, {4, -2, -2}, {-1, 1, -1}, {-5, 0, -5}, {7, 7, 7}, {-10, -13, -13}};

    for (auto &occur : attempts) {
        if (occur[0] >= 0 && occur[1] >= 0) {
            REQUIRE( Arithmetic<uint8>::min(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint16>::min(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint32>::min(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint64>::min(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<byte>::min(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint>::min(occur[0], occur[1]) == occur[2] );
        }

        REQUIRE( Arithmetic<int8>::min(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<int16>::min(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<int32>::min(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<int64>::min(occur[0], occur[1]) == occur[2] );

        REQUIRE( Arithmetic<float32>::min(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<float64>::min(occur[0], occur[1]) == occur[2] );

        REQUIRE( Arithmetic<real>::min(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<integer>::min(occur[0], occur[1]) == occur[2] );
    }

    REQUIRE( Arithmetic<float32>::min(2.25f, 1.01f) == 1.01f );
    REQUIRE( Arithmetic<float64>::min(2.25, -0.01) == -0.01 );
}

TEST_CASE("Arithmetic max-operation is correct", "[Arithmetic.max]") {
    int attempts[][3] = {{100, 32, 100}, {15, 25, 25}, {0, 11, 11}, {4, -2, 4}, {-1, 1, 1}, {-5, 0, 0}, {7, 7, 7}, {-10, -13, -10}};

    for (auto &occur : attempts) {
        if (occur[0] >= 0 && occur[1] >= 0) {
            REQUIRE( Arithmetic<uint8>::max(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint16>::max(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint32>::max(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint64>::max(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<byte>::max(occur[0], occur[1]) == occur[2] );
            REQUIRE( Arithmetic<uint>::max(occur[0], occur[1]) == occur[2] );
        }

        REQUIRE( Arithmetic<int8>::max(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<int16>::max(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<int32>::max(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<int64>::max(occur[0], occur[1]) == occur[2] );

        REQUIRE( Arithmetic<float32>::max(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<float64>::max(occur[0], occur[1]) == occur[2] );

        REQUIRE( Arithmetic<real>::max(occur[0], occur[1]) == occur[2] );
        REQUIRE( Arithmetic<integer>::max(occur[0], occur[1]) == occur[2] );
    }

    REQUIRE( Arithmetic<float32>::max(2.25f, 1.01f) == 2.25f );
    REQUIRE( Arithmetic<float64>::max(2.25, -0.01) == 2.25 );
}