#ifndef org_hipparchus_ode_LocalizedODEFormats_H
#define org_hipparchus_ode_LocalizedODEFormats_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class LocalizedODEFormats;
    }
    namespace exception {
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class LocalizedODEFormats : public ::java::lang::Enum {
       public:
        enum {
          mid_getLocalizedString_4b51060c6b7ea981,
          mid_getSourceString_3cffd47377eca18a,
          mid_valueOf_d368850a65d634c2,
          mid_values_ac05cca52586756a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalizedODEFormats(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalizedODEFormats(const LocalizedODEFormats& obj) : ::java::lang::Enum(obj) {}

        static LocalizedODEFormats *FIND_ROOT;
        static LocalizedODEFormats *HOLE_BETWEEN_MODELS_TIME_RANGES;
        static LocalizedODEFormats *INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS;
        static LocalizedODEFormats *MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION;
        static LocalizedODEFormats *MULTISTEP_STARTER_STOPPED_EARLY;
        static LocalizedODEFormats *NAN_APPEARING_DURING_INTEGRATION;
        static LocalizedODEFormats *PROPAGATION_DIRECTION_MISMATCH;
        static LocalizedODEFormats *TOO_SMALL_INTEGRATION_INTERVAL;
        static LocalizedODEFormats *UNKNOWN_PARAMETER;
        static LocalizedODEFormats *UNMATCHED_ODE_IN_EXPANDED_SET;

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        static LocalizedODEFormats valueOf(const ::java::lang::String &);
        static JArray< LocalizedODEFormats > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(LocalizedODEFormats);
      extern PyTypeObject *PY_TYPE(LocalizedODEFormats);

      class t_LocalizedODEFormats {
      public:
        PyObject_HEAD
        LocalizedODEFormats object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LocalizedODEFormats *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LocalizedODEFormats&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LocalizedODEFormats&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
