#ifndef org_orekit_errors_OrekitMessages$UTF8Control_H
#define org_orekit_errors_OrekitMessages$UTF8Control_H

#include "java/util/ResourceBundle$Control.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class InstantiationException;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Locale;
    class ResourceBundle;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace orekit {
    namespace errors {
      class OrekitMessages;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class OrekitMessages$UTF8Control : public ::java::util::ResourceBundle$Control {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_newBundle_b7c54cce3a9709ed,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrekitMessages$UTF8Control(jobject obj) : ::java::util::ResourceBundle$Control(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitMessages$UTF8Control(const OrekitMessages$UTF8Control& obj) : ::java::util::ResourceBundle$Control(obj) {}

        OrekitMessages$UTF8Control();

        ::java::util::ResourceBundle newBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(OrekitMessages$UTF8Control);
      extern PyTypeObject *PY_TYPE(OrekitMessages$UTF8Control);

      class t_OrekitMessages$UTF8Control {
      public:
        PyObject_HEAD
        OrekitMessages$UTF8Control object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OrekitMessages$UTF8Control *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OrekitMessages$UTF8Control&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OrekitMessages$UTF8Control&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
