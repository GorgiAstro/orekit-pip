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
          mid_getFilter_4ea55c50f76fe240,
          mid_getMaxOrder_d6ab429752e7c267,
          mid_valueOf_77ff8b9facb6c7f0,
          mid_values_62aac2887a7867fd,
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
