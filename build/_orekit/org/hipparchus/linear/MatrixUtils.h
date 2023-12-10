#ifndef org_hipparchus_linear_MatrixUtils_H
#define org_hipparchus_linear_MatrixUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class FieldVector;
      class Array2DRowRealMatrix;
      class DependentVectorsHandler;
      class RealMatrix;
      class RealMatrixFormat;
      class AnyMatrix;
      class FieldMatrix;
    }
    namespace fraction {
      class BigFraction;
      class Fraction;
    }
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
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
          mid_bigFractionMatrixToRealMatrix_9fb9a1441a6479fb,
          mid_blockInverse_549c024f6fbaee2a,
          mid_checkAdditionCompatible_9300e0efbec32708,
          mid_checkColumnIndex_de5dcced44bc9dea,
          mid_checkMatrixIndex_017e238265e32530,
          mid_checkMultiplicationCompatible_9300e0efbec32708,
          mid_checkRowIndex_de5dcced44bc9dea,
          mid_checkSameColumnDimension_9300e0efbec32708,
          mid_checkSameRowDimension_9300e0efbec32708,
          mid_checkSubMatrixIndex_72f0321bceef35fd,
          mid_checkSubMatrixIndex_3c5b7326720b7ecb,
          mid_checkSubtractionCompatible_9300e0efbec32708,
          mid_checkSymmetric_27ff5cf8ba76b4fe,
          mid_createColumnFieldMatrix_f4763f915253b903,
          mid_createColumnRealMatrix_70265c1b8bef83aa,
          mid_createFieldDiagonalMatrix_f4763f915253b903,
          mid_createFieldIdentityMatrix_93a1eea693cbc805,
          mid_createFieldMatrix_e0465faeef73b24e,
          mid_createFieldMatrix_f040517a28cc4692,
          mid_createFieldVector_183d789bbe27b047,
          mid_createFieldVector_9fe3b6e2ee7771dd,
          mid_createRealDiagonalMatrix_70265c1b8bef83aa,
          mid_createRealIdentityMatrix_3a4716f77215ee99,
          mid_createRealMatrix_d983e368b64b23a3,
          mid_createRealMatrix_4225756160ad1bc1,
          mid_createRealVector_8cf27fb7e5ba736a,
          mid_createRealVector_2cafd1b18558ed5f,
          mid_createRowFieldMatrix_f4763f915253b903,
          mid_createRowRealMatrix_70265c1b8bef83aa,
          mid_fractionMatrixToRealMatrix_9fb9a1441a6479fb,
          mid_inverse_e00cd33aedcc5bd0,
          mid_inverse_7a6fbf98ec206240,
          mid_isSymmetric_e41a0097560f9100,
          mid_matrixExponential_e00cd33aedcc5bd0,
          mid_orthonormalize_7e40acb6d4e820e7,
          mid_orthonormalize_17f42c4cc95332ee,
          mid_solveLowerTriangularSystem_99f2b480bb8e82fc,
          mid_solveUpperTriangularSystem_99f2b480bb8e82fc,
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
