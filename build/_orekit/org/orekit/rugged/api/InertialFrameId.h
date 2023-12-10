#ifndef org_orekit_rugged_api_InertialFrameId_H
#define org_orekit_rugged_api_InertialFrameId_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class InertialFrameId;
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

        class InertialFrameId : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_fc03650940d93693,
            mid_values_c8ee9c64bce68cea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InertialFrameId(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InertialFrameId(const InertialFrameId& obj) : ::java::lang::Enum(obj) {}

          static InertialFrameId *EME2000;
          static InertialFrameId *GCRF;
          static InertialFrameId *MOD;
          static InertialFrameId *TOD;
          static InertialFrameId *VEIS1950;

          static InertialFrameId valueOf(const ::java::lang::String &);
          static JArray< InertialFrameId > values();
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
        extern PyType_Def PY_TYPE_DEF(InertialFrameId);
        extern PyTypeObject *PY_TYPE(InertialFrameId);

        class t_InertialFrameId {
        public:
          PyObject_HEAD
          InertialFrameId object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_InertialFrameId *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const InertialFrameId&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const InertialFrameId&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
