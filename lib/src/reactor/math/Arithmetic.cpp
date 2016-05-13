#include <cmath>
#include "reactor/math/Arithmetic.hpp"

namespace reactor { namespace math {

template <typename T>
T Arithmetic<T>::sqrt(const T x) {
    return (T) std::sqrt(x);
}

}} // namespace reactor::math

