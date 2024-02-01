#ifndef org_hipparchus_optim_LocalizedOptimFormats_H
#define org_hipparchus_optim_LocalizedOptimFormats_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class LocalizedOptimFormats;
    }
    namespace exception {
      class Localizable;
    }
  }
}
namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class LocalizedOptimFormats : public ::java::lang::Enum {
       public:
        enum {
          mid_getLocalizedString_5969ecf7afac3dba,
          mid_getSourceString_d2c8eb4129821f0e,
          mid_valueOf_3a257bc137cf29fb,
          mid_values_96ba5a366934f742,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalizedOptimFormats(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalizedOptimFormats(const LocalizedOptimFormats& obj) : ::java::lang::Enum(obj) {}

        static LocalizedOptimFormats *EQUAL_VERTICES_IN_SIMPLEX;
        static LocalizedOptimFormats *INVALID_IMPLEMENTATION;
        static LocalizedOptimFormats *NO_FEASIBLE_SOLUTION;
        static LocalizedOptimFormats *SIMPLEX_NEED_ONE_POINT;
        static LocalizedOptimFormats *TOO_SMALL_COST_RELATIVE_TOLERANCE;
        static LocalizedOptimFormats *TOO_SMALL_ORTHOGONALITY_TOLERANCE;
        static LocalizedOptimFormats *TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE;
        static LocalizedOptimFormats *TRUST_REGION_STEP_FAILED;
        static LocalizedOptimFormats *UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN;
        static LocalizedOptimFormats *UNABLE_TO_SOLVE_SINGULAR_PROBLEM;
        static LocalizedOptimFormats *UNBOUNDED_SOLUTION;

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        static LocalizedOptimFormats valueOf(const ::java::lang::String &);
        static JArray< LocalizedOptimFormats > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(LocalizedOptimFormats);
      extern PyTypeObject *PY_TYPE(LocalizedOptimFormats);

      class t_LocalizedOptimFormats {
      public:
        PyObject_HEAD
        LocalizedOptimFormats object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LocalizedOptimFormats *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LocalizedOptimFormats&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LocalizedOptimFormats&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
