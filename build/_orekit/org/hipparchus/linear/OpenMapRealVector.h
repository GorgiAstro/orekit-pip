#ifndef org_hipparchus_linear_OpenMapRealVector_H
#define org_hipparchus_linear_OpenMapRealVector_H

#include "org/hipparchus/linear/SparseRealVector.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealVector$Entry;
      class OpenMapRealVector;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class OpenMapRealVector : public ::org::hipparchus::linear::SparseRealVector {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_ebc26dcaf4761286,
          mid_init$_6d211d0550baef5d,
          mid_init$_df4ee11a06094b55,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_caadaecfce5fba2f,
          mid_init$_b6f037ff44710d52,
          mid_init$_987a5fb872043b12,
          mid_init$_8dbc1129a3c2557a,
          mid_init$_78e41e7b5124a628,
          mid_add_3df4c0786bb92f4f,
          mid_add_a3e626dfa1abd779,
          mid_append_3df4c0786bb92f4f,
          mid_append_1b8432fd9839ffe9,
          mid_append_61b3fd82e8e8c17c,
          mid_copy_886c441ddd7b236c,
          mid_ebeDivide_1b8432fd9839ffe9,
          mid_ebeMultiply_1b8432fd9839ffe9,
          mid_equals_229c87223f486349,
          mid_getDimension_f2f64475e4580546,
          mid_getDistance_7f9114d371c3209e,
          mid_getDistance_5ed80776077f2bda,
          mid_getEntry_b772323fc98b7293,
          mid_getL1Distance_7f9114d371c3209e,
          mid_getL1Distance_5ed80776077f2bda,
          mid_getLInfDistance_5ed80776077f2bda,
          mid_getSparsity_456d9a2f64d6b28d,
          mid_getSubVector_5a91de7afba9af1f,
          mid_hashCode_f2f64475e4580546,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_mapAdd_61b3fd82e8e8c17c,
          mid_mapAddToSelf_61b3fd82e8e8c17c,
          mid_set_77e0f9a1f260e2e5,
          mid_setEntry_987a5fb872043b12,
          mid_setSubVector_dcd0f7fda5e9451c,
          mid_sparseIterator_035c6167e6569aac,
          mid_subtract_3df4c0786bb92f4f,
          mid_subtract_a3e626dfa1abd779,
          mid_toArray_7cdc325af0834901,
          mid_unitVector_886c441ddd7b236c,
          mid_unitize_7ae3461a92a43152,
          mid_isDefaultValue_e18fb1101b70dcca,
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
