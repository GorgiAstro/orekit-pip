#ifndef org_orekit_orbits_PositionAngleType_H
#define org_orekit_orbits_PositionAngleType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
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
    namespace orbits {

      class PositionAngleType : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_0a9f35836add7b7d,
          mid_values_3b07e553554ce971,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PositionAngleType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PositionAngleType(const PositionAngleType& obj) : ::java::lang::Enum(obj) {}

        static PositionAngleType *ECCENTRIC;
        static PositionAngleType *MEAN;
        static PositionAngleType *TRUE;

        static PositionAngleType valueOf(const ::java::lang::String &);
        static JArray< PositionAngleType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(PositionAngleType);
      extern PyTypeObject *PY_TYPE(PositionAngleType);

      class t_PositionAngleType {
      public:
        PyObject_HEAD
        PositionAngleType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PositionAngleType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PositionAngleType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PositionAngleType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
