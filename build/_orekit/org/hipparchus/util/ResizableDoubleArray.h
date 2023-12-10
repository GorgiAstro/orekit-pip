#ifndef org_hipparchus_util_ResizableDoubleArray_H
#define org_hipparchus_util_ResizableDoubleArray_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class ResizableDoubleArray$ExpansionMode;
      class ResizableDoubleArray;
      class MathArrays$Function;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_fa9d415d19f69361,
          mid_init$_99803b0791f320ff,
          mid_init$_bb79ca80d85d0a66,
          mid_init$_07bf81310115068c,
          mid_init$_bdfcc5b1188867de,
          mid_addElement_17db3a65980d3441,
          mid_addElementRolling_dcbc7ce2902fa136,
          mid_addElements_fa9d415d19f69361,
          mid_clear_0fa09c18fee449d5,
          mid_compute_03e2c9f605520832,
          mid_contract_0fa09c18fee449d5,
          mid_copy_7dd44dd9c212bf1f,
          mid_discardFrontElements_99803b0791f320ff,
          mid_discardMostRecentElements_99803b0791f320ff,
          mid_equals_65c7d273e80d497a,
          mid_getCapacity_570ce0828f81a2c1,
          mid_getContractionCriterion_dff5885c2c873297,
          mid_getElement_46f85b53d9aedd96,
          mid_getElements_60c7040667a7dc5c,
          mid_getExpansionFactor_dff5885c2c873297,
          mid_getExpansionMode_afafe47c1fd96b76,
          mid_getNumElements_570ce0828f81a2c1,
          mid_hashCode_570ce0828f81a2c1,
          mid_setElement_bb79ca80d85d0a66,
          mid_setNumElements_99803b0791f320ff,
          mid_substituteMostRecentElement_dcbc7ce2902fa136,
          mid_checkContractExpand_8f2e782d5278b131,
          mid_getArrayRef_60c7040667a7dc5c,
          mid_getStartIndex_570ce0828f81a2c1,
          mid_expand_0fa09c18fee449d5,
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
