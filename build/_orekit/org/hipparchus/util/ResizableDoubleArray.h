#ifndef org_hipparchus_util_ResizableDoubleArray_H
#define org_hipparchus_util_ResizableDoubleArray_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class ResizableDoubleArray$ExpansionMode;
      class MathArrays$Function;
      class ResizableDoubleArray;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_a71c45509eaf92d1,
          mid_init$_8fd427ab23829bf5,
          mid_init$_4320462275d66e78,
          mid_init$_aaed259e1b5f1153,
          mid_init$_8e716587161a361e,
          mid_addElement_1ad26e8c8c0cd65b,
          mid_addElementRolling_bf28ed64d6e8576b,
          mid_addElements_a71c45509eaf92d1,
          mid_clear_ff7cb6c242604316,
          mid_compute_bcf8213980423e08,
          mid_contract_ff7cb6c242604316,
          mid_copy_1a4a53528a53646d,
          mid_discardFrontElements_8fd427ab23829bf5,
          mid_discardMostRecentElements_8fd427ab23829bf5,
          mid_equals_72faff9b05f5ed5e,
          mid_getCapacity_d6ab429752e7c267,
          mid_getContractionCriterion_9981f74b2d109da6,
          mid_getElement_ce4c02d583456bc9,
          mid_getElements_be783177b060994b,
          mid_getExpansionFactor_9981f74b2d109da6,
          mid_getExpansionMode_c628b3f54ee99621,
          mid_getNumElements_d6ab429752e7c267,
          mid_hashCode_d6ab429752e7c267,
          mid_setElement_4320462275d66e78,
          mid_setNumElements_8fd427ab23829bf5,
          mid_substituteMostRecentElement_bf28ed64d6e8576b,
          mid_checkContractExpand_13edac039e8cc967,
          mid_getArrayRef_be783177b060994b,
          mid_getStartIndex_d6ab429752e7c267,
          mid_expand_ff7cb6c242604316,
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
