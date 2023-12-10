#ifndef org_hipparchus_dfp_DfpField$RoundingMode_H
#define org_hipparchus_dfp_DfpField$RoundingMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace dfp {
      class DfpField$RoundingMode;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace dfp {

      class DfpField$RoundingMode : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_83ded841db171824,
          mid_values_16b47472f5afd3e2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DfpField$RoundingMode(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DfpField$RoundingMode(const DfpField$RoundingMode& obj) : ::java::lang::Enum(obj) {}

        static DfpField$RoundingMode *ROUND_CEIL;
        static DfpField$RoundingMode *ROUND_DOWN;
        static DfpField$RoundingMode *ROUND_FLOOR;
        static DfpField$RoundingMode *ROUND_HALF_DOWN;
        static DfpField$RoundingMode *ROUND_HALF_EVEN;
        static DfpField$RoundingMode *ROUND_HALF_ODD;
        static DfpField$RoundingMode *ROUND_HALF_UP;
        static DfpField$RoundingMode *ROUND_UP;

        static DfpField$RoundingMode valueOf(const ::java::lang::String &);
        static JArray< DfpField$RoundingMode > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace dfp {
      extern PyType_Def PY_TYPE_DEF(DfpField$RoundingMode);
      extern PyTypeObject *PY_TYPE(DfpField$RoundingMode);

      class t_DfpField$RoundingMode {
      public:
        PyObject_HEAD
        DfpField$RoundingMode object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DfpField$RoundingMode *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DfpField$RoundingMode&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DfpField$RoundingMode&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
