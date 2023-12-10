#ifndef org_orekit_rugged_api_BodyRotatingFrameId_H
#define org_orekit_rugged_api_BodyRotatingFrameId_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class BodyRotatingFrameId;
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
  namespace orekit {
    namespace rugged {
      namespace api {

        class BodyRotatingFrameId : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_0e2268125faf80ef,
            mid_values_225464e14cee5fb1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BodyRotatingFrameId(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BodyRotatingFrameId(const BodyRotatingFrameId& obj) : ::java::lang::Enum(obj) {}

          static BodyRotatingFrameId *GTOD;
          static BodyRotatingFrameId *ITRF;
          static BodyRotatingFrameId *ITRF_EQUINOX;

          static BodyRotatingFrameId valueOf(const ::java::lang::String &);
          static JArray< BodyRotatingFrameId > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        extern PyType_Def PY_TYPE_DEF(BodyRotatingFrameId);
        extern PyTypeObject *PY_TYPE(BodyRotatingFrameId);

        class t_BodyRotatingFrameId {
        public:
          PyObject_HEAD
          BodyRotatingFrameId object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BodyRotatingFrameId *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BodyRotatingFrameId&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BodyRotatingFrameId&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
