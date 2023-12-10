#ifndef org_hipparchus_linear_ArrayRealVector_H
#define org_hipparchus_linear_ArrayRealVector_H

#include "org/hipparchus/linear/RealVector.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVectorPreservingVisitor;
      class RealVectorChangingVisitor;
      class RealMatrix;
      class ArrayRealVector;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_fa9d415d19f69361,
          mid_init$_dffaee884eb24974,
          mid_init$_bdf205176b90cff1,
          mid_init$_99803b0791f320ff,
          mid_init$_9a9aa0abbcb00912,
          mid_init$_d955f5fc3d98ac32,
          mid_init$_884f262c698aecef,
          mid_init$_39fc43911b710424,
          mid_init$_59955994fa99e305,
          mid_init$_e1f4b15468f5564a,
          mid_init$_63367a666c67a5f1,
          mid_init$_a47a33f7938e1575,
          mid_init$_bb79ca80d85d0a66,
          mid_init$_12aca76acb10f1af,
          mid_init$_cbec0a973fc4f649,
          mid_add_c22498c468849d8f,
          mid_addToEntry_bb79ca80d85d0a66,
          mid_append_494a704f5315e1ff,
          mid_append_613347e28dd909cd,
          mid_append_5df18376713b9c4f,
          mid_combine_f7b618ae5379b03b,
          mid_combineToSelf_f7b618ae5379b03b,
          mid_copy_57fd0363c1803550,
          mid_dotProduct_c579a73494d20c67,
          mid_ebeDivide_c22498c468849d8f,
          mid_ebeMultiply_c22498c468849d8f,
          mid_equals_65c7d273e80d497a,
          mid_getDataRef_60c7040667a7dc5c,
          mid_getDimension_570ce0828f81a2c1,
          mid_getDistance_c579a73494d20c67,
          mid_getEntry_46f85b53d9aedd96,
          mid_getL1Distance_c579a73494d20c67,
          mid_getL1Norm_dff5885c2c873297,
          mid_getLInfDistance_c579a73494d20c67,
          mid_getLInfNorm_dff5885c2c873297,
          mid_getNorm_dff5885c2c873297,
          mid_getSubVector_38329ff0125c5584,
          mid_hashCode_570ce0828f81a2c1,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_map_2a9d7fa96d485792,
          mid_mapAddToSelf_5df18376713b9c4f,
          mid_mapDivideToSelf_5df18376713b9c4f,
          mid_mapMultiplyToSelf_5df18376713b9c4f,
          mid_mapSubtractToSelf_5df18376713b9c4f,
          mid_mapToSelf_2a9d7fa96d485792,
          mid_outerProduct_54d602014b6af984,
          mid_set_17db3a65980d3441,
          mid_setEntry_bb79ca80d85d0a66,
          mid_setSubVector_7169a8c8a60b8b2c,
          mid_setSubVector_18388821294f273e,
          mid_subtract_c22498c468849d8f,
          mid_toArray_60c7040667a7dc5c,
          mid_toString_11b109bd155ca898,
          mid_walkInDefaultOrder_7fcbb8310174b200,
          mid_walkInDefaultOrder_1dd342028e49eba0,
          mid_walkInDefaultOrder_d74abf24a85ccc3b,
          mid_walkInDefaultOrder_2debe8623b864ef6,
          mid_walkInOptimizedOrder_7fcbb8310174b200,
          mid_walkInOptimizedOrder_1dd342028e49eba0,
          mid_walkInOptimizedOrder_d74abf24a85ccc3b,
          mid_walkInOptimizedOrder_2debe8623b864ef6,
          mid_checkVectorDimensions_bdf205176b90cff1,
          mid_checkVectorDimensions_99803b0791f320ff,
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
