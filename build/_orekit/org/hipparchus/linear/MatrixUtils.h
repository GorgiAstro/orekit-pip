#ifndef org_hipparchus_linear_MatrixUtils_H
#define org_hipparchus_linear_MatrixUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace fraction {
      class BigFraction;
      class Fraction;
    }
    namespace linear {
      class Array2DRowRealMatrix;
      class RealMatrixFormat;
      class AnyMatrix;
      class FieldVector;
      class FieldMatrix;
      class RealMatrix;
      class RealVector;
      class DependentVectorsHandler;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class MatrixUtils : public ::java::lang::Object {
       public:
        enum {
          mid_bigFractionMatrixToRealMatrix_433d08205af7451e,
          mid_blockInverse_3d3b9b74b7a3ca99,
          mid_checkAdditionCompatible_1f6906e624899343,
          mid_checkColumnIndex_8ac3b324bd38c0b1,
          mid_checkMatrixIndex_7770183d8c656b44,
          mid_checkMultiplicationCompatible_1f6906e624899343,
          mid_checkRowIndex_8ac3b324bd38c0b1,
          mid_checkSameColumnDimension_1f6906e624899343,
          mid_checkSameRowDimension_1f6906e624899343,
          mid_checkSubMatrixIndex_d304eb0aaedcd740,
          mid_checkSubMatrixIndex_a9bb4e5ac95d750d,
          mid_checkSubtractionCompatible_1f6906e624899343,
          mid_checkSymmetric_08eaf415db10314f,
          mid_createColumnFieldMatrix_9d8782740aa326e0,
          mid_createColumnRealMatrix_e78c77f555f24619,
          mid_createFieldDiagonalMatrix_9d8782740aa326e0,
          mid_createFieldIdentityMatrix_ab864333a790f2dd,
          mid_createFieldMatrix_8216ddcfb9291d0c,
          mid_createFieldMatrix_eac0d1ac87100cfb,
          mid_createFieldVector_e19aa71c6ae91876,
          mid_createFieldVector_7d87a3b3a8c606ac,
          mid_createRealDiagonalMatrix_e78c77f555f24619,
          mid_createRealIdentityMatrix_aec3de0a701ae468,
          mid_createRealMatrix_05cc2960cde80114,
          mid_createRealMatrix_e8546415f980523f,
          mid_createRealVector_b50585f101c65302,
          mid_createRealVector_2a32cae841870443,
          mid_createRowFieldMatrix_9d8782740aa326e0,
          mid_createRowRealMatrix_e78c77f555f24619,
          mid_fractionMatrixToRealMatrix_433d08205af7451e,
          mid_inverse_340b47d21842d02c,
          mid_inverse_a5ade44f7c8eaa17,
          mid_isSymmetric_49da7222f112f25b,
          mid_matrixExponential_340b47d21842d02c,
          mid_orthonormalize_0b5e5c997128e43c,
          mid_orthonormalize_0a07734ea3c208fc,
          mid_solveLowerTriangularSystem_3af1cf4cd4527806,
          mid_solveUpperTriangularSystem_3af1cf4cd4527806,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MatrixUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MatrixUtils(const MatrixUtils& obj) : ::java::lang::Object(obj) {}

        static ::org::hipparchus::linear::RealMatrixFormat *DEFAULT_FORMAT;
        static ::org::hipparchus::linear::RealMatrixFormat *OCTAVE_FORMAT;

        static ::org::hipparchus::linear::Array2DRowRealMatrix bigFractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix &);
        static ::org::hipparchus::linear::RealMatrix blockInverse(const ::org::hipparchus::linear::RealMatrix &, jint);
        static void checkAdditionCompatible(const ::org::hipparchus::linear::AnyMatrix &, const ::org::hipparchus::linear::AnyMatrix &);
        static void checkColumnIndex(const ::org::hipparchus::linear::AnyMatrix &, jint);
        static void checkMatrixIndex(const ::org::hipparchus::linear::AnyMatrix &, jint, jint);
        static void checkMultiplicationCompatible(const ::org::hipparchus::linear::AnyMatrix &, const ::org::hipparchus::linear::AnyMatrix &);
        static void checkRowIndex(const ::org::hipparchus::linear::AnyMatrix &, jint);
        static void checkSameColumnDimension(const ::org::hipparchus::linear::AnyMatrix &, const ::org::hipparchus::linear::AnyMatrix &);
        static void checkSameRowDimension(const ::org::hipparchus::linear::AnyMatrix &, const ::org::hipparchus::linear::AnyMatrix &);
        static void checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix &, const JArray< jint > &, const JArray< jint > &);
        static void checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix &, jint, jint, jint, jint);
        static void checkSubtractionCompatible(const ::org::hipparchus::linear::AnyMatrix &, const ::org::hipparchus::linear::AnyMatrix &);
        static void checkSymmetric(const ::org::hipparchus::linear::RealMatrix &, jdouble);
        static ::org::hipparchus::linear::FieldMatrix createColumnFieldMatrix(const JArray< ::org::hipparchus::FieldElement > &);
        static ::org::hipparchus::linear::RealMatrix createColumnRealMatrix(const JArray< jdouble > &);
        static ::org::hipparchus::linear::FieldMatrix createFieldDiagonalMatrix(const JArray< ::org::hipparchus::FieldElement > &);
        static ::org::hipparchus::linear::FieldMatrix createFieldIdentityMatrix(const ::org::hipparchus::Field &, jint);
        static ::org::hipparchus::linear::FieldMatrix createFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > &);
        static ::org::hipparchus::linear::FieldMatrix createFieldMatrix(const ::org::hipparchus::Field &, jint, jint);
        static ::org::hipparchus::linear::FieldVector createFieldVector(const JArray< ::org::hipparchus::FieldElement > &);
        static ::org::hipparchus::linear::FieldVector createFieldVector(const ::org::hipparchus::Field &, jint);
        static ::org::hipparchus::linear::RealMatrix createRealDiagonalMatrix(const JArray< jdouble > &);
        static ::org::hipparchus::linear::RealMatrix createRealIdentityMatrix(jint);
        static ::org::hipparchus::linear::RealMatrix createRealMatrix(const JArray< JArray< jdouble > > &);
        static ::org::hipparchus::linear::RealMatrix createRealMatrix(jint, jint);
        static ::org::hipparchus::linear::RealVector createRealVector(const JArray< jdouble > &);
        static ::org::hipparchus::linear::RealVector createRealVector(jint);
        static ::org::hipparchus::linear::FieldMatrix createRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > &);
        static ::org::hipparchus::linear::RealMatrix createRowRealMatrix(const JArray< jdouble > &);
        static ::org::hipparchus::linear::Array2DRowRealMatrix fractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix &);
        static ::org::hipparchus::linear::RealMatrix inverse(const ::org::hipparchus::linear::RealMatrix &);
        static ::org::hipparchus::linear::RealMatrix inverse(const ::org::hipparchus::linear::RealMatrix &, jdouble);
        static jboolean isSymmetric(const ::org::hipparchus::linear::RealMatrix &, jdouble);
        static ::org::hipparchus::linear::RealMatrix matrixExponential(const ::org::hipparchus::linear::RealMatrix &);
        static ::java::util::List orthonormalize(const ::java::util::List &, jdouble, const ::org::hipparchus::linear::DependentVectorsHandler &);
        static ::java::util::List orthonormalize(const ::org::hipparchus::Field &, const ::java::util::List &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::linear::DependentVectorsHandler &);
        static void solveLowerTriangularSystem(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealVector &);
        static void solveUpperTriangularSystem(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealVector &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(MatrixUtils);
      extern PyTypeObject *PY_TYPE(MatrixUtils);

      class t_MatrixUtils {
      public:
        PyObject_HEAD
        MatrixUtils object;
        static PyObject *wrap_Object(const MatrixUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
