#ifndef org_hipparchus_linear_ArrayRealVector_H
#define org_hipparchus_linear_ArrayRealVector_H

#include "org/hipparchus/linear/RealVector.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace linear {
      class RealVectorChangingVisitor;
      class RealMatrix;
      class ArrayRealVector;
      class RealVectorPreservingVisitor;
    }
    namespace analysis {
      class UnivariateFunction;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Double;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class ArrayRealVector : public ::org::hipparchus::linear::RealVector {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_cc18240f4a737f14,
          mid_init$_c354c911a2a99469,
          mid_init$_87d15d6564ad754f,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_fbec1236c2bcb3a3,
          mid_init$_f9ced59a30836914,
          mid_init$_d16ecf07ee5cc977,
          mid_init$_22d90c27a54aa2bd,
          mid_init$_e5e74b7cece49119,
          mid_init$_ab4840ba016ef1da,
          mid_init$_cc9ae4efb8ef1ba2,
          mid_init$_bdd4888f749f6b83,
          mid_init$_89aad365fb0ed8da,
          mid_init$_91b51b3c05127ead,
          mid_init$_3e0896aee0100cf3,
          mid_add_8588f37f94ff4d77,
          mid_addToEntry_89aad365fb0ed8da,
          mid_append_c25d880db01cc755,
          mid_append_342d5b01463e0dc5,
          mid_append_6041102868c92dbb,
          mid_combine_590f13fbb2cfe7a8,
          mid_combineToSelf_590f13fbb2cfe7a8,
          mid_copy_f793fd79757f0404,
          mid_dotProduct_4062041acf71098b,
          mid_ebeDivide_8588f37f94ff4d77,
          mid_ebeMultiply_8588f37f94ff4d77,
          mid_equals_221e8e85cb385209,
          mid_getDataRef_a53a7513ecedada2,
          mid_getDimension_412668abc8d889e9,
          mid_getDistance_4062041acf71098b,
          mid_getEntry_69cfb132c661aca4,
          mid_getL1Distance_4062041acf71098b,
          mid_getL1Norm_557b8123390d8d0c,
          mid_getLInfDistance_4062041acf71098b,
          mid_getLInfNorm_557b8123390d8d0c,
          mid_getNorm_557b8123390d8d0c,
          mid_getSubVector_7d0bb0711f91d9f7,
          mid_hashCode_412668abc8d889e9,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_map_22b76d3604ea9d1a,
          mid_mapAddToSelf_6041102868c92dbb,
          mid_mapDivideToSelf_6041102868c92dbb,
          mid_mapMultiplyToSelf_6041102868c92dbb,
          mid_mapSubtractToSelf_6041102868c92dbb,
          mid_mapToSelf_22b76d3604ea9d1a,
          mid_outerProduct_62980eaee0411593,
          mid_set_10f281d777284cea,
          mid_setEntry_89aad365fb0ed8da,
          mid_setSubVector_3246bd31f432242d,
          mid_setSubVector_a967cf1fffd0038f,
          mid_subtract_8588f37f94ff4d77,
          mid_toArray_a53a7513ecedada2,
          mid_toString_3cffd47377eca18a,
          mid_walkInDefaultOrder_06815b04d05d6656,
          mid_walkInDefaultOrder_5142e2b49b502547,
          mid_walkInDefaultOrder_5eb221680d1ddecd,
          mid_walkInDefaultOrder_a3edcb203ea44030,
          mid_walkInOptimizedOrder_06815b04d05d6656,
          mid_walkInOptimizedOrder_5142e2b49b502547,
          mid_walkInOptimizedOrder_5eb221680d1ddecd,
          mid_walkInOptimizedOrder_a3edcb203ea44030,
          mid_checkVectorDimensions_87d15d6564ad754f,
          mid_checkVectorDimensions_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ArrayRealVector(jobject obj) : ::org::hipparchus::linear::RealVector(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ArrayRealVector(const ArrayRealVector& obj) : ::org::hipparchus::linear::RealVector(obj) {}

        ArrayRealVector();
        ArrayRealVector(const JArray< jdouble > &);
        ArrayRealVector(const JArray< ::java::lang::Double > &);
        ArrayRealVector(const ::org::hipparchus::linear::RealVector &);
        ArrayRealVector(jint);
        ArrayRealVector(const ArrayRealVector &, const ArrayRealVector &);
        ArrayRealVector(const ArrayRealVector &, const JArray< jdouble > &);
        ArrayRealVector(const JArray< jdouble > &, const ArrayRealVector &);
        ArrayRealVector(const ArrayRealVector &, const ::org::hipparchus::linear::RealVector &);
        ArrayRealVector(const ::org::hipparchus::linear::RealVector &, const ArrayRealVector &);
        ArrayRealVector(const JArray< jdouble > &, const JArray< jdouble > &);
        ArrayRealVector(const ArrayRealVector &, jboolean);
        ArrayRealVector(const JArray< jdouble > &, jboolean);
        ArrayRealVector(jint, jdouble);
        ArrayRealVector(const JArray< jdouble > &, jint, jint);
        ArrayRealVector(const JArray< ::java::lang::Double > &, jint, jint);

        ArrayRealVector add(const ::org::hipparchus::linear::RealVector &) const;
        void addToEntry(jint, jdouble) const;
        ArrayRealVector append(const ArrayRealVector &) const;
        ::org::hipparchus::linear::RealVector append(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector append(jdouble) const;
        ArrayRealVector combine(jdouble, jdouble, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector combineToSelf(jdouble, jdouble, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector copy() const;
        jdouble dotProduct(const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector ebeDivide(const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector ebeMultiply(const ::org::hipparchus::linear::RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< jdouble > getDataRef() const;
        jint getDimension() const;
        jdouble getDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getL1Norm() const;
        jdouble getLInfDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getLInfNorm() const;
        jdouble getNorm() const;
        ::org::hipparchus::linear::RealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        ArrayRealVector map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealVector mapAddToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapDivideToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapMultiplyToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapSubtractToSelf(jdouble) const;
        ArrayRealVector mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealMatrix outerProduct(const ::org::hipparchus::linear::RealVector &) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const JArray< jdouble > &) const;
        void setSubVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector subtract(const ::org::hipparchus::linear::RealVector &) const;
        JArray< jdouble > toArray() const;
        ::java::lang::String toString() const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(ArrayRealVector);
      extern PyTypeObject *PY_TYPE(ArrayRealVector);

      class t_ArrayRealVector {
      public:
        PyObject_HEAD
        ArrayRealVector object;
        static PyObject *wrap_Object(const ArrayRealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
