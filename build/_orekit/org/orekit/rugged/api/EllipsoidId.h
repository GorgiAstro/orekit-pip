#ifndef org_orekit_rugged_api_EllipsoidId_H
#define org_orekit_rugged_api_EllipsoidId_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class EllipsoidId;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        class EllipsoidId : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_2ee579d46b5afd6e,
            mid_values_cafa0e1d3358d16c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EllipsoidId(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EllipsoidId(const EllipsoidId& obj) : ::java::lang::Enum(obj) {}

          static EllipsoidId *GRS80;
          static EllipsoidId *IERS2003;
          static EllipsoidId *IERS96;
          static EllipsoidId *WGS84;

          static EllipsoidId valueOf(const ::java::lang::String &);
          static JArray< EllipsoidId > values();
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
        extern PyType_Def PY_TYPE_DEF(EllipsoidId);
        extern PyTypeObject *PY_TYPE(EllipsoidId);

        class t_EllipsoidId {
        public:
          PyObject_HEAD
          EllipsoidId object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EllipsoidId *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EllipsoidId&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EllipsoidId&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
