#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define F (1 << 14)

/* x and y are fixed-point numbers, n is an integer */
/* Convert n to fixed point */
#define INT_TO_FP(n) ((n) * F)

/* Convert x to integer (rounding toward zero) */
#define FP_TO_INT_TRUNC(x) ((x) / F)

/* Convert x to integer (rounding to nearest) */
#define FP_TO_INT_ROUND(x) ((x) >= 0 ? ((x) + F / 2) / F : ((x) - F / 2) / F)

/* Add x and y */
#define ADD_FP_FP(x, y) ((x) + (y))

/* Subtract y from x */
#define SUB_FP_FP(x, y) ((x) - (y))

/* Add x and n */
#define ADD_FP_INT(x, n) ((x) + (n) * F)

/* Subtract n from x */
#define SUB_FP_INT(x, n) ((x) - (n) * F)

/* Multiply x by y */
#define MUL_FP_FP(x, y) (((int64_t)(x)) * (y) / F)

/* Multiply x by n */
#define MUL_FP_INT(x, n) ((x) * (n))

/* Divide x by y */
#define DIV_FP_FP(x, y) (((int64_t)(x)) * F / (y))

/* Divide x by n */
#define DIV_FP_INT(x, n) ((x) / (n))

#endif /* threads/fixed-point.h */