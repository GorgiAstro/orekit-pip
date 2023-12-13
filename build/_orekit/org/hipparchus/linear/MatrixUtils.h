#ifndef org_hipparchus_linear_MatrixUtils_H
#define org_hipparchus_linear_MatrixUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class Array2DRowRealMatrix;
      class RealMatrixFormat;
      class AnyMatrix;
      class FieldVector;
      class RealVector;
      class DependentVectorsHandler;
      class RealMatrix;
      class FieldMatrix;
    }
    class Field;
    class CalculusFieldElement;
    namespace fraction {
      class BigFraction;
      class Fraction;
    }
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
          mid_bigFractionMatrixToRealMatrix_d42609dccc716ce0,
          mid_blockInverse_4d20baae453f6ac7,
          mid_checkAdditionCompatible_ec267f4b97d4af4e,
          mid_checkColumnIndex_391ab531ddc55e65,
          mid_checkMatrixIndex_2a9ba4374421a351,
          mid_checkMultiplicationCompatible_ec267f4b97d4af4e,
          mid_checkRowIndex_391ab531ddc55e65,
          mid_checkSameColumnDimension_ec267f4b97d4af4e,
          mid_checkSameRowDimension_ec267f4b97d4af4e,
          mid_checkSubMatrixIndex_00cfed1e02f34b4f,
          mid_checkSubMatrixIndex_6051820354d91a14,
          mid_checkSubtractionCompatible_ec267f4b97d4af4e,
          mid_checkSymmetric_5c88fbe0835e7c85,
          mid_createColumnFieldMatrix_a0ea14aaa8e13e7e,
          mid_createColumnRealMatrix_f4daeeaa8c92c416,
          mid_createFieldDiagonalMatrix_a0ea14aaa8e13e7e,
          mid_createFieldIdentityMatrix_12ee4122b2b5b2fc,
          mid_createFieldMatrix_13cf8439750db8ef,
          mid_createFieldMatrix_32f51209d9351e3a,
          mid_createFieldVector_ed23db5d5a52a892,
          mid_createFieldVector_0e05ddcd4bfb2fbd,
          mid_createRealDiagonalMatrix_f4daeeaa8c92c416,
          mid_createRealIdentityMatrix_2a3e0c79a1b41fe4,
          mid_createRealMatrix_2d1b7d41dfd6b278,
          mid_createRealMatrix_28a444e31666746c,
          mid_createRealVector_96f31e3adf588399,
          mid_createRealVector_b50dc3915c68ddbc,
          mid_createRowFieldMatrix_a0ea14aaa8e13e7e,
          mid_createRowRealMatrix_f4daeeaa8c92c416,
          mid_fractionMatrixToRealMatrix_d42609dccc716ce0,
          mid_inverse_be124f4006dc9f69,
          mid_inverse_514e92b8dbd002ec,
          mid_isSymmetric_c7ef6c2e438b9c04,
          mid_matrixExponential_be124f4006dc9f69,
          mid_orthonormalize_f8a8b8089136721c,
          mid_orthonormalize_bbc8537193f980d7,
          mid_solveLowerTriangularSystem_316bd569c3edbb4d,
          mid_solveUpperTriangularSystem_316bd569c3edbb4d,
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
