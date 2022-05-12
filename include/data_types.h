#ifndef MPM_DATA_TYPES_H_
#define MPM_DATA_TYPES_H_

#ifdef USE_MKL
#define EIGEN_USE_MKL_ALL
#endif

#include <Eigen/Dense>

namespace mpm {

//! Global index type for the node
// type de données permet d'écrire des nombres de
// -9 223 372 036 854 775 808   à   9 223 372 036 854 775 807
using Index = unsigned long long;

//! Return zero
template <typename Ttype>
Ttype zero();

//! Zero pour un vcetur de deux ligne
template <>
inline Eigen::Matrix<double, 2, 1> zero() {
  return Eigen::Matrix<double, 2, 1>::Zero();
}

//! Zero pour un vceteur de 3 ligne
template <>
inline Eigen::Matrix<double, 3, 1> zero() {
  return Eigen::Matrix<double, 3, 1>::Zero();
}

//! Zero pour un scalaire
template <>
inline double zero() {
  return 0.;
}

}  // namespace mpm

#endif  // MPM_DATA_TYPES_H_
