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
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace linear {
      class OpenMapRealVector;
      class RealVector$Entry;
      class RealVector;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_cc18240f4a737f14,
          mid_init$_c354c911a2a99469,
          mid_init$_87d15d6564ad754f,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_3682f2e0c8382fe5,
          mid_init$_4c962094e30c788c,
          mid_init$_89aad365fb0ed8da,
          mid_init$_a84c9a223722150c,
          mid_init$_754312f3734d6e2f,
          mid_add_c8caf6b86809b421,
          mid_add_342d5b01463e0dc5,
          mid_append_c8caf6b86809b421,
          mid_append_7841ff123295f72b,
          mid_append_75541c8200d1f16e,
          mid_copy_0f75e049dcae9e48,
          mid_ebeDivide_7841ff123295f72b,
          mid_ebeMultiply_7841ff123295f72b,
          mid_equals_221e8e85cb385209,
          mid_getDimension_412668abc8d889e9,
          mid_getDistance_db11e5a6053f761d,
          mid_getDistance_4062041acf71098b,
          mid_getEntry_69cfb132c661aca4,
          mid_getL1Distance_db11e5a6053f761d,
          mid_getL1Distance_4062041acf71098b,
          mid_getLInfDistance_4062041acf71098b,
          mid_getSparsity_557b8123390d8d0c,
          mid_getSubVector_dd99dbbd80939c15,
          mid_hashCode_412668abc8d889e9,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_mapAdd_75541c8200d1f16e,
          mid_mapAddToSelf_75541c8200d1f16e,
          mid_set_10f281d777284cea,
          mid_setEntry_89aad365fb0ed8da,
          mid_setSubVector_a967cf1fffd0038f,
          mid_sparseIterator_834a3801c426326d,
          mid_subtract_c8caf6b86809b421,
          mid_subtract_342d5b01463e0dc5,
          mid_toArray_a53a7513ecedada2,
          mid_unitVector_0f75e049dcae9e48,
          mid_unitize_0640e6acf969ed28,
          mid_isDefaultValue_dd69c3ab2404bb71,
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
