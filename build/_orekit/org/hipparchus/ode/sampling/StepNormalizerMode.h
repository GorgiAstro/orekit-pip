#ifndef org_hipparchus_ode_sampling_StepNormalizerMode_H
#define org_hipparchus_ode_sampling_StepNormalizerMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class StepNormalizerMode;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        class StepNormalizerMode : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_582fe1e7e7ab4d53,
            mid_values_c855f4e7f5f94038,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepNormalizerMode(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepNormalizerMode(const StepNormalizerMode& obj) : ::java::lang::Enum(obj) {}

          static StepNormalizerMode *INCREMENT;
          static StepNormalizerMode *MULTIPLES;

          static StepNormalizerMode valueOf(const ::java::lang::String &);
          static JArray< StepNormalizerMode > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        extern PyType_Def PY_TYPE_DEF(StepNormalizerMode);
        extern PyTypeObject *PY_TYPE(StepNormalizerMode);

        class t_StepNormalizerMode {
        public:
          PyObject_HEAD
          StepNormalizerMode object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StepNormalizerMode *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StepNormalizerMode&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StepNormalizerMode&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
