#ifndef org_orekit_utils_AngularDerivativesFilter_H
#define org_orekit_utils_AngularDerivativesFilter_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class IllegalArgumentException;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class AngularDerivativesFilter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class AngularDerivativesFilter : public ::java::lang::Enum {
       public:
        enum {
          mid_getFilter_6b4b72dbe46ae1d2,
          mid_getMaxOrder_f2f64475e4580546,
          mid_valueOf_6e06abfdcdffc262,
          mid_values_7bb60d04961b1572,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AngularDerivativesFilter(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AngularDerivativesFilter(const AngularDerivativesFilter& obj) : ::java::lang::Enum(obj) {}

        static AngularDerivativesFilter *USE_R;
        static AngularDerivativesFilter *USE_RR;
        static AngularDerivativesFilter *USE_RRA;

        static AngularDerivativesFilter getFilter(jint);
        jint getMaxOrder() const;
        static AngularDerivativesFilter valueOf(const ::java::lang::String &);
        static JArray< AngularDerivativesFilter > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AngularDerivativesFilter);
      extern PyTypeObject *PY_TYPE(AngularDerivativesFilter);

      class t_AngularDerivativesFilter {
      public:
        PyObject_HEAD
        AngularDerivativesFilter object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AngularDerivativesFilter *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AngularDerivativesFilter&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AngularDerivativesFilter&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
