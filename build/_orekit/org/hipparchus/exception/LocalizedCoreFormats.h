#ifndef org_hipparchus_exception_LocalizedCoreFormats_H
#define org_hipparchus_exception_LocalizedCoreFormats_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class LocalizedCoreFormats;
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class LocalizedCoreFormats : public ::java::lang::Enum {
       public:
        enum {
          mid_getLocalizedString_bab3be9b232acc5a,
          mid_getSourceString_0090f7797e403f43,
          mid_valueOf_22c27263cea306a7,
          mid_values_48b05f789e784309,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalizedCoreFormats(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalizedCoreFormats(const LocalizedCoreFormats& obj) : ::java::lang::Enum(obj) {}

        static LocalizedCoreFormats *ARITHMETIC_EXCEPTION;
        static LocalizedCoreFormats *ARRAY_ELEMENT;
        static LocalizedCoreFormats *ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1;
        static LocalizedCoreFormats *ARRAY_SIZE_EXCEEDS_MAX_VARIABLES;
        static LocalizedCoreFormats *ARRAY_SUMS_TO_ZERO;
        static LocalizedCoreFormats *ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED;
        static LocalizedCoreFormats *AT_LEAST_ONE_COLUMN;
        static LocalizedCoreFormats *AT_LEAST_ONE_ROW;
        static LocalizedCoreFormats *BANDWIDTH;
        static LocalizedCoreFormats *BASE;
        static LocalizedCoreFormats *BESSEL_FUNCTION_BAD_ARGUMENT;
        static LocalizedCoreFormats *BESSEL_FUNCTION_FAILED_CONVERGENCE;
        static LocalizedCoreFormats *BINOMIAL_INVALID_PARAMETERS_ORDER;
        static LocalizedCoreFormats *BINOMIAL_NEGATIVE_PARAMETER;
        static LocalizedCoreFormats *CANNOT_COMPUTE_0TH_ROOT_OF_UNITY;
        static LocalizedCoreFormats *CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA;
        static LocalizedCoreFormats *CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA;
        static LocalizedCoreFormats *CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N;
        static LocalizedCoreFormats *CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS;
        static LocalizedCoreFormats *CANNOT_FORMAT_INSTANCE_AS_COMPLEX;
        static LocalizedCoreFormats *CANNOT_FORMAT_OBJECT_TO_FRACTION;
        static LocalizedCoreFormats *CANNOT_PARSE;
        static LocalizedCoreFormats *CANNOT_PARSE_AS_TYPE;
        static LocalizedCoreFormats *CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY;
        static LocalizedCoreFormats *COLUMN_INDEX;
        static LocalizedCoreFormats *COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER;
        static LocalizedCoreFormats *CONSTRAINT;
        static LocalizedCoreFormats *CONTINUED_FRACTION_INFINITY_DIVERGENCE;
        static LocalizedCoreFormats *CONTINUED_FRACTION_NAN_DIVERGENCE;
        static LocalizedCoreFormats *CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR;
        static LocalizedCoreFormats *CONTRACTION_CRITERIA_SMALLER_THAN_ONE;
        static LocalizedCoreFormats *CONVERGENCE_FAILED;
        static LocalizedCoreFormats *CUMULATIVE_PROBABILITY_RETURNED_NAN;
        static LocalizedCoreFormats *DEGREES_OF_FREEDOM;
        static LocalizedCoreFormats *DENOMINATOR;
        static LocalizedCoreFormats *DENOMINATOR_FORMAT;
        static LocalizedCoreFormats *DERIVATION_ORDER_NOT_ALLOWED;
        static LocalizedCoreFormats *DIFFERENT_ROWS_LENGTHS;
        static LocalizedCoreFormats *DIGEST_NOT_INITIALIZED;
        static LocalizedCoreFormats *DIMENSION;
        static LocalizedCoreFormats *DIMENSIONS_MISMATCH;
        static LocalizedCoreFormats *DIMENSIONS_MISMATCH_2x2;
        static LocalizedCoreFormats *DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN;
        static LocalizedCoreFormats *DISTRIBUTION_NOT_LOADED;
        static LocalizedCoreFormats *DUPLICATED_ABSCISSA_DIVISION_BY_ZERO;
        static LocalizedCoreFormats *EMPTY_INTERPOLATION_SAMPLE;
        static LocalizedCoreFormats *EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY;
        static LocalizedCoreFormats *EMPTY_SELECTED_COLUMN_INDEX_ARRAY;
        static LocalizedCoreFormats *EMPTY_SELECTED_ROW_INDEX_ARRAY;
        static LocalizedCoreFormats *ENDPOINTS_NOT_AN_INTERVAL;
        static LocalizedCoreFormats *EVALUATION;
        static LocalizedCoreFormats *EVALUATIONS;
        static LocalizedCoreFormats *EXPANSION_FACTOR_SMALLER_THAN_ONE;
        static LocalizedCoreFormats *EXPONENT;
        static LocalizedCoreFormats *FACTORIAL_NEGATIVE_PARAMETER;
        static LocalizedCoreFormats *FAILED_BRACKETING;
        static LocalizedCoreFormats *FAILED_DECOMPOSITION;
        static LocalizedCoreFormats *FAILED_FRACTION_CONVERSION;
        static LocalizedCoreFormats *FIRST_COLUMNS_NOT_INITIALIZED_YET;
        static LocalizedCoreFormats *FIRST_ROWS_NOT_INITIALIZED_YET;
        static LocalizedCoreFormats *FRACTION;
        static LocalizedCoreFormats *FRACTION_CONVERSION_OVERFLOW;
        static LocalizedCoreFormats *FUNCTION;
        static LocalizedCoreFormats *GCD_OVERFLOW_32_BITS;
        static LocalizedCoreFormats *GCD_OVERFLOW_64_BITS;
        static LocalizedCoreFormats *ILLEGAL_STATE;
        static LocalizedCoreFormats *ILL_CONDITIONED_OPERATOR;
        static LocalizedCoreFormats *IMAGINARY_FORMAT;
        static LocalizedCoreFormats *INDEX;
        static LocalizedCoreFormats *INDEX_LARGER_THAN_MAX;
        static LocalizedCoreFormats *INDEX_NOT_POSITIVE;
        static LocalizedCoreFormats *INFINITE_ARRAY_ELEMENT;
        static LocalizedCoreFormats *INFINITE_BOUND;
        static LocalizedCoreFormats *INFINITE_VALUE_CONVERSION;
        static LocalizedCoreFormats *INITIAL_CAPACITY_NOT_POSITIVE;
        static LocalizedCoreFormats *INITIAL_COLUMN_AFTER_FINAL_COLUMN;
        static LocalizedCoreFormats *INITIAL_ROW_AFTER_FINAL_ROW;
        static LocalizedCoreFormats *INPUT_ARRAY;
        static LocalizedCoreFormats *INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED;
        static LocalizedCoreFormats *INSUFFICIENT_DATA;
        static LocalizedCoreFormats *INSUFFICIENT_DIMENSION;
        static LocalizedCoreFormats *INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE;
        static LocalizedCoreFormats *INSUFFICIENT_ROWS_AND_COLUMNS;
        static LocalizedCoreFormats *INTERNAL_ERROR;
        static LocalizedCoreFormats *INVALID_MAX_ITERATIONS;
        static LocalizedCoreFormats *ITERATIONS;
        static LocalizedCoreFormats *LCM_OVERFLOW_32_BITS;
        static LocalizedCoreFormats *LCM_OVERFLOW_64_BITS;
        static LocalizedCoreFormats *LENGTH;
        static LocalizedCoreFormats *LOWER_BOUND_NOT_BELOW_UPPER_BOUND;
        static LocalizedCoreFormats *LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT;
        static LocalizedCoreFormats *MAX_COUNT_EXCEEDED;
        static LocalizedCoreFormats *MEAN;
        static LocalizedCoreFormats *NAN_ELEMENT_AT_INDEX;
        static LocalizedCoreFormats *NAN_NOT_ALLOWED;
        static LocalizedCoreFormats *NAN_VALUE_CONVERSION;
        static LocalizedCoreFormats *NEGATIVE_COMPLEX_MODULE;
        static LocalizedCoreFormats *NEGATIVE_DEFINITE_MATRIX;
        static LocalizedCoreFormats *NEGATIVE_ELEMENT_AT_INDEX;
        static LocalizedCoreFormats *NON_CONVERGENT_CONTINUED_FRACTION;
        static LocalizedCoreFormats *NON_POSITIVE_DEFINITE_OPERATOR;
        static LocalizedCoreFormats *NON_SELF_ADJOINT_OPERATOR;
        static LocalizedCoreFormats *NON_SQUARE_MATRIX;
        static LocalizedCoreFormats *NON_SQUARE_OPERATOR;
        static LocalizedCoreFormats *NON_SYMMETRIC_MATRIX;
        static LocalizedCoreFormats *NORM;
        static LocalizedCoreFormats *NORMALIZE_INFINITE;
        static LocalizedCoreFormats *NORMALIZE_NAN;
        static LocalizedCoreFormats *NOT_BRACKETING_INTERVAL;
        static LocalizedCoreFormats *NOT_DECREASING_SEQUENCE;
        static LocalizedCoreFormats *NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION;
        static LocalizedCoreFormats *NOT_FINITE_NUMBER;
        static LocalizedCoreFormats *NOT_INCREASING_SEQUENCE;
        static LocalizedCoreFormats *NOT_POSITIVE_DEFINITE_MATRIX;
        static LocalizedCoreFormats *NOT_POSITIVE_EXPONENT;
        static LocalizedCoreFormats *NOT_POSITIVE_NUMBER_OF_SAMPLES;
        static LocalizedCoreFormats *NOT_POSITIVE_SCALE;
        static LocalizedCoreFormats *NOT_POSITIVE_WINDOW_SIZE;
        static LocalizedCoreFormats *NOT_STRICTLY_DECREASING_SEQUENCE;
        static LocalizedCoreFormats *NOT_STRICTLY_INCREASING_SEQUENCE;
        static LocalizedCoreFormats *NO_CONVERGENCE_WITH_ANY_START_POINT;
        static LocalizedCoreFormats *NO_DATA$;
        static LocalizedCoreFormats *NO_OPTIMUM_COMPUTED_YET;
        static LocalizedCoreFormats *NULL_NOT_ALLOWED;
        static LocalizedCoreFormats *NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE;
        static LocalizedCoreFormats *NUMBER_OF_INTERPOLATION_POINTS;
        static LocalizedCoreFormats *NUMBER_OF_POINTS;
        static LocalizedCoreFormats *NUMBER_OF_SAMPLES;
        static LocalizedCoreFormats *NUMBER_OF_SUCCESSES;
        static LocalizedCoreFormats *NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE;
        static LocalizedCoreFormats *NUMBER_OF_TRIALS;
        static LocalizedCoreFormats *NUMBER_TOO_LARGE;
        static LocalizedCoreFormats *NUMBER_TOO_LARGE_BOUND_EXCLUDED;
        static LocalizedCoreFormats *NUMBER_TOO_SMALL;
        static LocalizedCoreFormats *NUMBER_TOO_SMALL_BOUND_EXCLUDED;
        static LocalizedCoreFormats *NUMERATOR;
        static LocalizedCoreFormats *NUMERATOR_FORMAT;
        static LocalizedCoreFormats *NUMERATOR_OVERFLOW_AFTER_MULTIPLY;
        static LocalizedCoreFormats *OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY;
        static LocalizedCoreFormats *OUT_OF_RANGE;
        static LocalizedCoreFormats *OUT_OF_RANGE_LEFT;
        static LocalizedCoreFormats *OUT_OF_RANGE_ROOT_OF_UNITY_INDEX;
        static LocalizedCoreFormats *OUT_OF_RANGE_SIMPLE;
        static LocalizedCoreFormats *OVERFLOW$;
        static LocalizedCoreFormats *OVERFLOW_IN_ADDITION;
        static LocalizedCoreFormats *OVERFLOW_IN_FRACTION;
        static LocalizedCoreFormats *OVERFLOW_IN_MULTIPLICATION;
        static LocalizedCoreFormats *OVERFLOW_IN_SUBTRACTION;
        static LocalizedCoreFormats *PERMUTATION_EXCEEDS_N;
        static LocalizedCoreFormats *PERMUTATION_SIZE;
        static LocalizedCoreFormats *POLYNOMIAL;
        static LocalizedCoreFormats *POPULATION_SIZE;
        static LocalizedCoreFormats *REAL_FORMAT;
        static LocalizedCoreFormats *RIGHT_EDGE_GREATER_THAN_LEFT_EDGE;
        static LocalizedCoreFormats *ROBUSTNESS_ITERATIONS;
        static LocalizedCoreFormats *ROOTS_OF_UNITY_NOT_COMPUTED_YET;
        static LocalizedCoreFormats *ROW_INDEX;
        static LocalizedCoreFormats *SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE;
        static LocalizedCoreFormats *SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE;
        static LocalizedCoreFormats *SCALE;
        static LocalizedCoreFormats *SHAPE;
        static LocalizedCoreFormats *SIMPLE_MESSAGE;
        static LocalizedCoreFormats *SINGULAR_MATRIX;
        static LocalizedCoreFormats *SINGULAR_OPERATOR;
        static LocalizedCoreFormats *STANDARD_DEVIATION;
        static LocalizedCoreFormats *START_POINT_NOT_IN_INTERVAL;
        static LocalizedCoreFormats *START_POSITION;
        static LocalizedCoreFormats *SUBARRAY_ENDS_AFTER_ARRAY_END;
        static LocalizedCoreFormats *TOO_LARGE_CUTOFF_SINGULAR_VALUE;
        static LocalizedCoreFormats *TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY;
        static LocalizedCoreFormats *UNKNOWN_MODE;
        static LocalizedCoreFormats *UNSUPPORTED_OPERATION;
        static LocalizedCoreFormats *URL_CONTAINS_NO_DATA;
        static LocalizedCoreFormats *USER_EXCEPTION;
        static LocalizedCoreFormats *VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT;
        static LocalizedCoreFormats *WEIGHT_AT_LEAST_ONE_NON_ZERO;
        static LocalizedCoreFormats *WHOLE_FORMAT;
        static LocalizedCoreFormats *WRONG_NUMBER_OF_POINTS;
        static LocalizedCoreFormats *ZERO_DENOMINATOR;
        static LocalizedCoreFormats *ZERO_DENOMINATOR_IN_FRACTION;
        static LocalizedCoreFormats *ZERO_FRACTION_TO_DIVIDE_BY;
        static LocalizedCoreFormats *ZERO_NORM;
        static LocalizedCoreFormats *ZERO_NOT_ALLOWED;
        static LocalizedCoreFormats *ZERO_STATE_SIZE;

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        static LocalizedCoreFormats valueOf(const ::java::lang::String &);
        static JArray< LocalizedCoreFormats > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(LocalizedCoreFormats);
      extern PyTypeObject *PY_TYPE(LocalizedCoreFormats);

      class t_LocalizedCoreFormats {
      public:
        PyObject_HEAD
        LocalizedCoreFormats object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LocalizedCoreFormats *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LocalizedCoreFormats&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LocalizedCoreFormats&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
