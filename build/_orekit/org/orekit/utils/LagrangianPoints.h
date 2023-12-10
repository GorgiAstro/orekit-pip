#ifndef org_orekit_utils_LagrangianPoints_H
#define org_orekit_utils_LagrangianPoints_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace utils {
      class LagrangianPoints;
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
  namespace orekit {
    namespace utils {

      class LagrangianPoints : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_ac5daa58fa9d2237,
          mid_values_3055fa7ebefc5fee,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LagrangianPoints(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LagrangianPoints(const LagrangianPoints& obj) : ::java::lang::Enum(obj) {}

        static LagrangianPoints *L1;
        static LagrangianPoints *L2;
        static LagrangianPoints *L3;
        static LagrangianPoints *L4;
        static LagrangianPoints *L5;

        static LagrangianPoints valueOf(const ::java::lang::String &);
        static JArray< LagrangianPoints > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(LagrangianPoints);
      extern PyTypeObject *PY_TYPE(LagrangianPoints);

      class t_LagrangianPoints {
      public:
        PyObject_HEAD
        LagrangianPoints object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LagrangianPoints *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LagrangianPoints&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LagrangianPoints&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
