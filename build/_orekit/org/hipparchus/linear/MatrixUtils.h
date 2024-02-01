#ifndef org_hipparchus_linear_MatrixUtils_H
#define org_hipparchus_linear_MatrixUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class FieldMatrix;
      class AnyMatrix;
      class DependentVectorsHandler;
      class Array2DRowRealMatrix;
      class RealMatrixFormat;
      class FieldVector;
      class RealMatrix;
      class RealVector;
    }
    namespace fraction {
      class Fraction;
      class BigFraction;
    }
    class Field;
    class FieldElement;
    class CalculusFieldElement;
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
          mid_bigFractionMatrixToRealMatrix_0198255710dd47cf,
          mid_blockInverse_5be1e91f90c02733,
          mid_checkAdditionCompatible_c038c678ab81af20,
          mid_checkColumnIndex_9a060da375a54065,
          mid_checkMatrixIndex_e220f16689da2d63,
          mid_checkMultiplicationCompatible_c038c678ab81af20,
          mid_checkRowIndex_9a060da375a54065,
          mid_checkSameColumnDimension_c038c678ab81af20,
          mid_checkSameRowDimension_c038c678ab81af20,
          mid_checkSubMatrixIndex_8b80f4a8c6449c57,
          mid_checkSubMatrixIndex_beed35c748136651,
          mid_checkSubtractionCompatible_c038c678ab81af20,
          mid_checkSymmetric_dc02fdb8767f32bc,
          mid_createColumnFieldMatrix_64fa671a7ba67ac5,
          mid_createColumnRealMatrix_56698d8a4cf94853,
          mid_createFieldDiagonalMatrix_64fa671a7ba67ac5,
          mid_createFieldIdentityMatrix_c30746093e08f180,
          mid_createFieldMatrix_456dfd25125e1f35,
          mid_createFieldMatrix_a35311a1197c0aa9,
          mid_createFieldVector_698743fdd99034ca,
          mid_createFieldVector_abd9199395c78967,
          mid_createRealDiagonalMatrix_56698d8a4cf94853,
          mid_createRealIdentityMatrix_ef7bea65e8e6eaaa,
          mid_createRealMatrix_a50478fa84afaa43,
          mid_createRealMatrix_afc0d8087db42fe7,
          mid_createRealVector_16e45efbf7373c57,
          mid_createRealVector_2ea477ed14744e74,
          mid_createRowFieldMatrix_64fa671a7ba67ac5,
          mid_createRowRealMatrix_56698d8a4cf94853,
          mid_fractionMatrixToRealMatrix_0198255710dd47cf,
          mid_inverse_5a8a8185eb309db7,
          mid_inverse_c42beb313d38e65e,
          mid_isSymmetric_2756f4cab824fd0d,
          mid_matrixExponential_5a8a8185eb309db7,
          mid_orthonormalize_df1c03670bd0a153,
          mid_orthonormalize_1f75b8f86fc5fa42,
          mid_solveLowerTriangularSystem_fcc025557f2f637a,
          mid_solveUpperTriangularSystem_fcc025557f2f637a,
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
