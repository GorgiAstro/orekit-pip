#ifndef org_orekit_frames_LocalMagneticFieldFrame$LOFBuilderVector_H
#define org_orekit_frames_LocalMagneticFieldFrame$LOFBuilderVector_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class LocalMagneticFieldFrame$LOFBuilderVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LocalMagneticFieldFrame$LOFBuilderVector : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_35543344c03965dc,
          mid_values_96ce917f3ca49745,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalMagneticFieldFrame$LOFBuilderVector(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalMagneticFieldFrame$LOFBuilderVector(const LocalMagneticFieldFrame$LOFBuilderVector& obj) : ::java::lang::Enum(obj) {}

        static LocalMagneticFieldFrame$LOFBuilderVector *MINUS_MOMENTUM;
        static LocalMagneticFieldFrame$LOFBuilderVector *MINUS_POSITION;
        static LocalMagneticFieldFrame$LOFBuilderVector *MINUS_VELOCITY;
        static LocalMagneticFieldFrame$LOFBuilderVector *PLUS_MOMENTUM;
        static LocalMagneticFieldFrame$LOFBuilderVector *PLUS_POSITION;
        static LocalMagneticFieldFrame$LOFBuilderVector *PLUS_VELOCITY;

        static LocalMagneticFieldFrame$LOFBuilderVector valueOf(const ::java::lang::String &);
        static JArray< LocalMagneticFieldFrame$LOFBuilderVector > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector);
      extern PyTypeObject *PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector);

      class t_LocalMagneticFieldFrame$LOFBuilderVector {
      public:
        PyObject_HEAD
        LocalMagneticFieldFrame$LOFBuilderVector object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
