/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.11 and Signal Processing Toolbox 8.7.
 * Generated on: 18-Apr-2023 13:16:06
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II
 * Numerator Length    : 7
 * Denominator Length  : 7
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * D:\matlab\extern\include\tmwtypes.h 
 */
const int NL = 7;
const real64_T NUM[7] = {
  4.798276735175e-15,2.878966041105e-14,7.197415102763e-14,9.596553470351e-14,
  7.197415102763e-14,2.878966041105e-14,4.798276735175e-15
};
const int DL = 7;
const real64_T DEN[7] = {
                   1,   -5.987592574069,     14.9382957575,   -19.87725455427,
       14.8779148862,   -5.939286269127,   0.9879227537678
};
