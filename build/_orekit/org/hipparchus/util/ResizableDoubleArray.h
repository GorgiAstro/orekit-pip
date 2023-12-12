#ifndef org_hipparchus_util_ResizableDoubleArray_H
#define org_hipparchus_util_ResizableDoubleArray_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class ResizableDoubleArray;
      class ResizableDoubleArray$ExpansionMode;
      class MathArrays$Function;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class ResizableDoubleArray : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_cc18240f4a737f14,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_89aad365fb0ed8da,
          mid_init$_79cfe3f564275380,
          mid_init$_15b0310ad3557c3c,
          mid_addElement_10f281d777284cea,
          mid_addElementRolling_7e960cd6eee376d8,
          mid_addElements_cc18240f4a737f14,
          mid_clear_0640e6acf969ed28,
          mid_compute_23a245537fd5b882,
          mid_contract_0640e6acf969ed28,
          mid_copy_1ec432f6c6474a51,
          mid_discardFrontElements_a3da1a935cb37f7b,
          mid_discardMostRecentElements_a3da1a935cb37f7b,
          mid_equals_221e8e85cb385209,
          mid_getCapacity_412668abc8d889e9,
          mid_getContractionCriterion_557b8123390d8d0c,
          mid_getElement_69cfb132c661aca4,
          mid_getElements_a53a7513ecedada2,
          mid_getExpansionFactor_557b8123390d8d0c,
          mid_getExpansionMode_c799c969d6a3c220,
          mid_getNumElements_412668abc8d889e9,
          mid_hashCode_412668abc8d889e9,
          mid_setElement_89aad365fb0ed8da,
          mid_setNumElements_a3da1a935cb37f7b,
          mid_substituteMostRecentElement_7e960cd6eee376d8,
          mid_checkContractExpand_ab23f4ae0fb33968,
          mid_getArrayRef_a53a7513ecedada2,
          mid_getStartIndex_412668abc8d889e9,
          mid_expand_0640e6acf969ed28,
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
