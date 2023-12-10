#ifndef org_hipparchus_linear_MatrixUtils_H
#define org_hipparchus_linear_MatrixUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFraction;
      class Fraction;
    }
    class CalculusFieldElement;
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class DependentVectorsHandler;
      class AnyMatrix;
      class RealMatrix;
      class RealVector;
      class Array2DRowRealMatrix;
      class RealMatrixFormat;
      class FieldMatrix;
      class FieldVector;
    }
    class Field;
    class FieldElement;
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
          mid_bigFractionMatrixToRealMatrix_d5bd149cee6814f0,
          mid_blockInverse_cc827997ddc9899a,
          mid_checkAdditionCompatible_7424e164afa9395a,
          mid_checkColumnIndex_cff55cfde0e4b27b,
          mid_checkMatrixIndex_bf0129d8c81da627,
          mid_checkMultiplicationCompatible_7424e164afa9395a,
          mid_checkRowIndex_cff55cfde0e4b27b,
          mid_checkSameColumnDimension_7424e164afa9395a,
          mid_checkSameRowDimension_7424e164afa9395a,
          mid_checkSubMatrixIndex_d5740dc7043aa00f,
          mid_checkSubMatrixIndex_d365082b0116d2a6,
          mid_checkSubtractionCompatible_7424e164afa9395a,
          mid_checkSymmetric_21a79182f4dd9085,
          mid_createColumnFieldMatrix_aa1a2b34c91cf2d0,
          mid_createColumnRealMatrix_1c14cec8544f26fc,
          mid_createFieldDiagonalMatrix_aa1a2b34c91cf2d0,
          mid_createFieldIdentityMatrix_f8cc4c60c0edcead,
          mid_createFieldMatrix_fd0e2f11fcb2162d,
          mid_createFieldMatrix_e8e9ca8cc1d2c247,
          mid_createFieldVector_ec7b1509e2f2d6fd,
          mid_createFieldVector_02962f1fea91a3cb,
          mid_createRealDiagonalMatrix_1c14cec8544f26fc,
          mid_createRealIdentityMatrix_7b5d3ee1211255a1,
          mid_createRealMatrix_62c0bfb50b5dacc0,
          mid_createRealMatrix_4410ec92987b66e9,
          mid_createRealVector_a740f7f012972b3a,
          mid_createRealVector_b686e6fcbf82678b,
          mid_createRowFieldMatrix_aa1a2b34c91cf2d0,
          mid_createRowRealMatrix_1c14cec8544f26fc,
          mid_fractionMatrixToRealMatrix_d5bd149cee6814f0,
          mid_inverse_e9b72403ad502221,
          mid_inverse_b999dd1683240cd1,
          mid_isSymmetric_fa6807f9c03f4acc,
          mid_matrixExponential_e9b72403ad502221,
          mid_orthonormalize_8fe84fea3780e6c0,
          mid_orthonormalize_a29a6bfc68b3c522,
          mid_solveLowerTriangularSystem_8d24243836b4d199,
          mid_solveUpperTriangularSystem_8d24243836b4d199,
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
