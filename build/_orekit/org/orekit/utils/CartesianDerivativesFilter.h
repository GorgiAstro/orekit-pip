#ifndef org_orekit_utils_CartesianDerivativesFilter_H
#define org_orekit_utils_CartesianDerivativesFilter_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace utils {
      class CartesianDerivativesFilter;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class CartesianDerivativesFilter : public ::java::lang::Enum {
       public:
        enum {
          mid_getFilter_db36f0575b5122ab,
          mid_getMaxOrder_570ce0828f81a2c1,
          mid_valueOf_5856fb500eb39730,
          mid_values_b21b9bc9310d7dc4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CartesianDerivativesFilter(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CartesianDerivativesFilter(const CartesianDerivativesFilter& obj) : ::java::lang::Enum(obj) {}

        static CartesianDerivativesFilter *USE_P;
        static CartesianDerivativesFilter *USE_PV;
        static CartesianDerivativesFilter *USE_PVA;

        static CartesianDerivativesFilter getFilter(jint);
        jint getMaxOrder() const;
        static CartesianDerivativesFilter valueOf(const ::java::lang::String &);
        static JArray< CartesianDerivativesFilter > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(CartesianDerivativesFilter);
      extern PyTypeObject *PY_TYPE(CartesianDerivativesFilter);

      class t_CartesianDerivativesFilter {
      public:
        PyObject_HEAD
        CartesianDerivativesFilter object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CartesianDerivativesFilter *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CartesianDerivativesFilter&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CartesianDerivativesFilter&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
