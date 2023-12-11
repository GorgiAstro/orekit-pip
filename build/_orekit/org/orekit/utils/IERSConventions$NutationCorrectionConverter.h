#ifndef org_orekit_utils_IERSConventions$NutationCorrectionConverter_H
#define org_orekit_utils_IERSConventions$NutationCorrectionConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class IERSConventions$NutationCorrectionConverter : public ::java::lang::Object {
       public:
        enum {
          mid_toEquinox_284d549d39f6cacb,
          mid_toNonRotating_284d549d39f6cacb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IERSConventions$NutationCorrectionConverter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IERSConventions$NutationCorrectionConverter(const IERSConventions$NutationCorrectionConverter& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > toEquinox(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble) const;
        JArray< jdouble > toNonRotating(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter);
      extern PyTypeObject *PY_TYPE(IERSConventions$NutationCorrectionConverter);

      class t_IERSConventions$NutationCorrectionConverter {
      public:
        PyObject_HEAD
        IERSConventions$NutationCorrectionConverter object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_IERSConventions$NutationCorrectionConverter *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const IERSConventions$NutationCorrectionConverter&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const IERSConventions$NutationCorrectionConverter&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
