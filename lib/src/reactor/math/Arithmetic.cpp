#include <cmath>
#include "reactor/math/Arithmetic.hpp"

namespace reactor { namespace math {

template <typename T>
T Arithmetic<T>::abs(const T x) {
    return (T) std::fabs(x);
}

template <typename T>
T Arithmetic<T>::sqr(const T x) {
    return x * x;
}

template <typename T>
T Arithmetic<T>::sqrt(const T x) {
    return (T) std::sqrt(x);
}


template <typename T>
T Arithmetic<T>::min(const T a, const T b) {
    return a < b ? a : b;
}

template <typename T>
T Arithmetic<T>::max(const T a, const T b) {
    return a > b ? a : b;
}

}} // namespace reactor::math

