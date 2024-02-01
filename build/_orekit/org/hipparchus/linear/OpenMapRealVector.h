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
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_a71c45509eaf92d1,
          mid_init$_3d3b8362311739ce,
          mid_init$_99bb541b0ecf3230,
          mid_init$_8fd427ab23829bf5,
          mid_init$_19a01fdb4baa56b0,
          mid_init$_f7e9747cdcd2cea2,
          mid_init$_4320462275d66e78,
          mid_init$_b5d23e6c0858e8ed,
          mid_init$_e98d7b3e971b6087,
          mid_add_c4b62513600b4f58,
          mid_add_bf8d75e459632544,
          mid_append_c4b62513600b4f58,
          mid_append_793501de279e164e,
          mid_append_0c797a447eb4ff71,
          mid_copy_b677a29415ab6d99,
          mid_ebeDivide_793501de279e164e,
          mid_ebeMultiply_793501de279e164e,
          mid_equals_72faff9b05f5ed5e,
          mid_getDimension_d6ab429752e7c267,
          mid_getDistance_e26aa9a2bfe70300,
          mid_getDistance_510dfb60b80a1bc5,
          mid_getEntry_ce4c02d583456bc9,
          mid_getL1Distance_e26aa9a2bfe70300,
          mid_getL1Distance_510dfb60b80a1bc5,
          mid_getLInfDistance_510dfb60b80a1bc5,
          mid_getSparsity_9981f74b2d109da6,
          mid_getSubVector_21edf7b8aaef852b,
          mid_hashCode_d6ab429752e7c267,
          mid_isInfinite_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_mapAdd_0c797a447eb4ff71,
          mid_mapAddToSelf_0c797a447eb4ff71,
          mid_set_1ad26e8c8c0cd65b,
          mid_setEntry_4320462275d66e78,
          mid_setSubVector_543485b1a87e5329,
          mid_sparseIterator_4f613ccd2f803b4b,
          mid_subtract_c4b62513600b4f58,
          mid_subtract_bf8d75e459632544,
          mid_toArray_be783177b060994b,
          mid_unitVector_b677a29415ab6d99,
          mid_unitize_ff7cb6c242604316,
          mid_isDefaultValue_7bc657d327f0f830,
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
