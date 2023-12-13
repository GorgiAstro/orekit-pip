#ifndef org_hipparchus_util_ResizableDoubleArray_H
#define org_hipparchus_util_ResizableDoubleArray_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class MathArrays$Function;
      class ResizableDoubleArray$ExpansionMode;
      class ResizableDoubleArray;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class ResizableDoubleArray : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_ab69da052b88f50c,
          mid_init$_44ed599e93e8a30c,
          mid_init$_d5322b8b512aeb26,
          mid_init$_cdd9dee35d124091,
          mid_init$_14e7cb2d05650bff,
          mid_addElement_8ba9fe7a847cecad,
          mid_addElementRolling_04fd0666b613d2ab,
          mid_addElements_ab69da052b88f50c,
          mid_clear_a1fa5dae97ea5ed2,
          mid_compute_e0041a7a3b51fe97,
          mid_contract_a1fa5dae97ea5ed2,
          mid_copy_50ed3e24b16184cd,
          mid_discardFrontElements_44ed599e93e8a30c,
          mid_discardMostRecentElements_44ed599e93e8a30c,
          mid_equals_460c5e2d9d51c6cc,
          mid_getCapacity_55546ef6a647f39b,
          mid_getContractionCriterion_b74f83833fdad017,
          mid_getElement_2afcbc21f4e57ab2,
          mid_getElements_25e1757a36c4dde2,
          mid_getExpansionFactor_b74f83833fdad017,
          mid_getExpansionMode_630c36c2fb1d7068,
          mid_getNumElements_55546ef6a647f39b,
          mid_hashCode_55546ef6a647f39b,
          mid_setElement_d5322b8b512aeb26,
          mid_setNumElements_44ed599e93e8a30c,
          mid_substituteMostRecentElement_04fd0666b613d2ab,
          mid_checkContractExpand_369b4c97255d5afa,
          mid_getArrayRef_25e1757a36c4dde2,
          mid_getStartIndex_55546ef6a647f39b,
          mid_expand_a1fa5dae97ea5ed2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ResizableDoubleArray(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ResizableDoubleArray(const ResizableDoubleArray& obj) : ::java::lang::Object(obj) {}

        ResizableDoubleArray();
        ResizableDoubleArray(const JArray< jdouble > &);
        ResizableDoubleArray(jint);
        ResizableDoubleArray(jint, jdouble);
        ResizableDoubleArray(jint, jdouble, jdouble);
        ResizableDoubleArray(jint, jdouble, jdouble, const ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode &, const JArray< jdouble > &);

        void addElement(jdouble) const;
        jdouble addElementRolling(jdouble) const;
        void addElements(const JArray< jdouble > &) const;
        void clear() const;
        jdouble compute(const ::org::hipparchus::util::MathArrays$Function &) const;
        void contract() const;
        ResizableDoubleArray copy() const;
        void discardFrontElements(jint) const;
        void discardMostRecentElements(jint) const;
        jboolean equals(const ::java::lang::Object &) const;
        jint getCapacity() const;
        jdouble getContractionCriterion() const;
        jdouble getElement(jint) const;
        JArray< jdouble > getElements() const;
        jdouble getExpansionFactor() const;
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode getExpansionMode() const;
        jint getNumElements() const;
        jint hashCode() const;
        void setElement(jint, jdouble) const;
        void setNumElements(jint) const;
        jdouble substituteMostRecentElement(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(ResizableDoubleArray);
      extern PyTypeObject *PY_TYPE(ResizableDoubleArray);

      class t_ResizableDoubleArray {
      public:
        PyObject_HEAD
        ResizableDoubleArray object;
        static PyObject *wrap_Object(const ResizableDoubleArray&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
