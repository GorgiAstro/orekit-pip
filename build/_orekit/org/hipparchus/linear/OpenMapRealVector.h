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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_ab69da052b88f50c,
          mid_init$_c7e68cf2401062fd,
          mid_init$_872f190ac7ffe0f7,
          mid_init$_44ed599e93e8a30c,
          mid_init$_334f245ec9cee46b,
          mid_init$_86ce2862f9d7e5cc,
          mid_init$_d5322b8b512aeb26,
          mid_init$_3313c75e3e16c428,
          mid_init$_94fe8d9ffeb50676,
          mid_add_ecf73b1597383c1a,
          mid_add_d5f1d017fd25113b,
          mid_append_ecf73b1597383c1a,
          mid_append_71c91d164d1c66d4,
          mid_append_e63e4f21d34131ef,
          mid_copy_03a171197d666e91,
          mid_ebeDivide_71c91d164d1c66d4,
          mid_ebeMultiply_71c91d164d1c66d4,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDimension_55546ef6a647f39b,
          mid_getDistance_0c809322800ffaf2,
          mid_getDistance_532b95759e51e831,
          mid_getEntry_2afcbc21f4e57ab2,
          mid_getL1Distance_0c809322800ffaf2,
          mid_getL1Distance_532b95759e51e831,
          mid_getLInfDistance_532b95759e51e831,
          mid_getSparsity_b74f83833fdad017,
          mid_getSubVector_b566fbb7268770e0,
          mid_hashCode_55546ef6a647f39b,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_mapAdd_e63e4f21d34131ef,
          mid_mapAddToSelf_e63e4f21d34131ef,
          mid_set_8ba9fe7a847cecad,
          mid_setEntry_d5322b8b512aeb26,
          mid_setSubVector_9fe1e9c5bee9d07c,
          mid_sparseIterator_fc7780bc5d5b73b0,
          mid_subtract_ecf73b1597383c1a,
          mid_subtract_d5f1d017fd25113b,
          mid_toArray_25e1757a36c4dde2,
          mid_unitVector_03a171197d666e91,
          mid_unitize_a1fa5dae97ea5ed2,
          mid_isDefaultValue_716249baa52d209e,
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
