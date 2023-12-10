#ifndef org_orekit_rugged_errors_RuggedMessages$UTF8Control_H
#define org_orekit_rugged_errors_RuggedMessages$UTF8Control_H

#include "java/util/ResourceBundle$Control.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    class Locale;
    class ResourceBundle;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        class RuggedMessages;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class RuggedMessages$UTF8Control : public ::java::util::ResourceBundle$Control {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_newBundle_155ef0911ce0f838,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuggedMessages$UTF8Control(jobject obj) : ::java::util::ResourceBundle$Control(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuggedMessages$UTF8Control(const RuggedMessages$UTF8Control& obj) : ::java::util::ResourceBundle$Control(obj) {}

          RuggedMessages$UTF8Control();

          ::java::util::ResourceBundle newBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        extern PyType_Def PY_TYPE_DEF(RuggedMessages$UTF8Control);
        extern PyTypeObject *PY_TYPE(RuggedMessages$UTF8Control);

        class t_RuggedMessages$UTF8Control {
        public:
          PyObject_HEAD
          RuggedMessages$UTF8Control object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RuggedMessages$UTF8Control *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RuggedMessages$UTF8Control&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RuggedMessages$UTF8Control&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
