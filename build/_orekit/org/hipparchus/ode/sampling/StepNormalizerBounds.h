#ifndef org_hipparchus_ode_sampling_StepNormalizerBounds_H
#define org_hipparchus_ode_sampling_StepNormalizerBounds_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class StepNormalizerBounds;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        class StepNormalizerBounds : public ::java::lang::Enum {
         public:
          enum {
            mid_firstIncluded_eee3de00fe971136,
            mid_lastIncluded_eee3de00fe971136,
            mid_valueOf_d7e678bf6783ca22,
            mid_values_4e5d829f44944550,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepNormalizerBounds(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepNormalizerBounds(const StepNormalizerBounds& obj) : ::java::lang::Enum(obj) {}

          static StepNormalizerBounds *BOTH;
          static StepNormalizerBounds *FIRST;
          static StepNormalizerBounds *LAST;
          static StepNormalizerBounds *NEITHER;

          jboolean firstIncluded() const;
          jboolean lastIncluded() const;
          static StepNormalizerBounds valueOf(const ::java::lang::String &);
          static JArray< StepNormalizerBounds > values();
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
        extern PyType_Def PY_TYPE_DEF(StepNormalizerBounds);
        extern PyTypeObject *PY_TYPE(StepNormalizerBounds);

        class t_StepNormalizerBounds {
        public:
          PyObject_HEAD
          StepNormalizerBounds object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StepNormalizerBounds *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StepNormalizerBounds&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StepNormalizerBounds&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
