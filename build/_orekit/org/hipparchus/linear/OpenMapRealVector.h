#ifndef org_hipparchus_linear_OpenMapRealVector_H
#define org_hipparchus_linear_OpenMapRealVector_H

#include "org/hipparchus/linear/SparseRealVector.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Double;
    class Class;
    class Object;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class OpenMapRealVector;
      class RealVector;
      class RealVector$Entry;
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class OpenMapRealVector : public ::org::hipparchus::linear::SparseRealVector {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_fa9d415d19f69361,
          mid_init$_dffaee884eb24974,
          mid_init$_bdf205176b90cff1,
          mid_init$_99803b0791f320ff,
          mid_init$_bc1ff02eb3693128,
          mid_init$_ce8c8b53c2138baa,
          mid_init$_bb79ca80d85d0a66,
          mid_init$_6f37635c3285dbdf,
          mid_init$_1506189166690b5e,
          mid_add_f41b4392c3b0cbe8,
          mid_add_613347e28dd909cd,
          mid_append_f41b4392c3b0cbe8,
          mid_append_bca8e4820c9cabf8,
          mid_append_09df6803b1c624a1,
          mid_copy_8ab6f9d2c3b24e14,
          mid_ebeDivide_bca8e4820c9cabf8,
          mid_ebeMultiply_bca8e4820c9cabf8,
          mid_equals_65c7d273e80d497a,
          mid_getDimension_570ce0828f81a2c1,
          mid_getDistance_bd316bc7df5386b7,
          mid_getDistance_c579a73494d20c67,
          mid_getEntry_46f85b53d9aedd96,
          mid_getL1Distance_bd316bc7df5386b7,
          mid_getL1Distance_c579a73494d20c67,
          mid_getLInfDistance_c579a73494d20c67,
          mid_getSparsity_dff5885c2c873297,
          mid_getSubVector_583c2e0c30920a31,
          mid_hashCode_570ce0828f81a2c1,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_mapAdd_09df6803b1c624a1,
          mid_mapAddToSelf_09df6803b1c624a1,
          mid_set_17db3a65980d3441,
          mid_setEntry_bb79ca80d85d0a66,
          mid_setSubVector_18388821294f273e,
          mid_sparseIterator_4d23511a9f0db098,
          mid_subtract_f41b4392c3b0cbe8,
          mid_subtract_613347e28dd909cd,
          mid_toArray_60c7040667a7dc5c,
          mid_unitVector_8ab6f9d2c3b24e14,
          mid_unitize_0fa09c18fee449d5,
          mid_isDefaultValue_2e401133981893e4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenMapRealVector(jobject obj) : ::org::hipparchus::linear::SparseRealVector(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenMapRealVector(const OpenMapRealVector& obj) : ::org::hipparchus::linear::SparseRealVector(obj) {}

        static jdouble DEFAULT_ZERO_TOLERANCE;

        OpenMapRealVector();
        OpenMapRealVector(const JArray< jdouble > &);
        OpenMapRealVector(const JArray< ::java::lang::Double > &);
        OpenMapRealVector(const ::org::hipparchus::linear::RealVector &);
        OpenMapRealVector(jint);
        OpenMapRealVector(const JArray< jdouble > &, jdouble);
        OpenMapRealVector(const JArray< ::java::lang::Double > &, jdouble);
        OpenMapRealVector(jint, jdouble);
        OpenMapRealVector(jint, jint);
        OpenMapRealVector(jint, jint, jdouble);

        OpenMapRealVector add(const OpenMapRealVector &) const;
        ::org::hipparchus::linear::RealVector add(const ::org::hipparchus::linear::RealVector &) const;
        OpenMapRealVector append(const OpenMapRealVector &) const;
        OpenMapRealVector append(const ::org::hipparchus::linear::RealVector &) const;
        OpenMapRealVector append(jdouble) const;
        OpenMapRealVector copy() const;
        OpenMapRealVector ebeDivide(const ::org::hipparchus::linear::RealVector &) const;
        OpenMapRealVector ebeMultiply(const ::org::hipparchus::linear::RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        jint getDimension() const;
        jdouble getDistance(const OpenMapRealVector &) const;
        jdouble getDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const OpenMapRealVector &) const;
        jdouble getL1Distance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getLInfDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getSparsity() const;
        OpenMapRealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        OpenMapRealVector mapAdd(jdouble) const;
        OpenMapRealVector mapAddToSelf(jdouble) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        ::java::util::Iterator sparseIterator() const;
        OpenMapRealVector subtract(const OpenMapRealVector &) const;
        ::org::hipparchus::linear::RealVector subtract(const ::org::hipparchus::linear::RealVector &) const;
        JArray< jdouble > toArray() const;
        OpenMapRealVector unitVector() const;
        void unitize() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(OpenMapRealVector);
      extern PyTypeObject *PY_TYPE(OpenMapRealVector);

      class t_OpenMapRealVector {
      public:
        PyObject_HEAD
        OpenMapRealVector object;
        static PyObject *wrap_Object(const OpenMapRealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
