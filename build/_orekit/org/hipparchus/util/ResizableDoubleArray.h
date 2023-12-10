#ifndef org_hipparchus_util_ResizableDoubleArray_H
#define org_hipparchus_util_ResizableDoubleArray_H

#include "java/lang/Object.h"

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
          mid_init$_7ae3461a92a43152,
          mid_init$_ebc26dcaf4761286,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_987a5fb872043b12,
          mid_init$_13f7a72902bf1e20,
          mid_init$_985955375daf760b,
          mid_addElement_77e0f9a1f260e2e5,
          mid_addElementRolling_0ba5fed9597b693e,
          mid_addElements_ebc26dcaf4761286,
          mid_clear_7ae3461a92a43152,
          mid_compute_ecb308087b03a390,
          mid_contract_7ae3461a92a43152,
          mid_copy_3d2d3ed8718aeea1,
          mid_discardFrontElements_0a2a1ac2721c0336,
          mid_discardMostRecentElements_0a2a1ac2721c0336,
          mid_equals_229c87223f486349,
          mid_getCapacity_f2f64475e4580546,
          mid_getContractionCriterion_456d9a2f64d6b28d,
          mid_getElement_b772323fc98b7293,
          mid_getElements_7cdc325af0834901,
          mid_getExpansionFactor_456d9a2f64d6b28d,
          mid_getExpansionMode_321b8dd6e9847f20,
          mid_getNumElements_f2f64475e4580546,
          mid_hashCode_f2f64475e4580546,
          mid_setElement_987a5fb872043b12,
          mid_setNumElements_0a2a1ac2721c0336,
          mid_substituteMostRecentElement_0ba5fed9597b693e,
          mid_checkContractExpand_1d715fa3b7b756e1,
          mid_getArrayRef_7cdc325af0834901,
          mid_getStartIndex_f2f64475e4580546,
          mid_expand_7ae3461a92a43152,
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
