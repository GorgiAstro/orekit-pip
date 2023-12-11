#ifndef org_orekit_gnss_SignalCode_H
#define org_orekit_gnss_SignalCode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SignalCode;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class SignalCode : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_29405d3cf2733256,
          mid_values_fd15c2a208a55491,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SignalCode(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SignalCode(const SignalCode& obj) : ::java::lang::Enum(obj) {}

        static SignalCode *A;
        static SignalCode *B;
        static SignalCode *C;
        static SignalCode *CODELESS;
        static SignalCode *D;
        static SignalCode *E;
        static SignalCode *I;
        static SignalCode *L;
        static SignalCode *M;
        static SignalCode *N;
        static SignalCode *P;
        static SignalCode *Q;
        static SignalCode *S;
        static SignalCode *W;
        static SignalCode *X;
        static SignalCode *Y;
        static SignalCode *Z;

        static SignalCode valueOf(const ::java::lang::String &);
        static JArray< SignalCode > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(SignalCode);
      extern PyTypeObject *PY_TYPE(SignalCode);

      class t_SignalCode {
      public:
        PyObject_HEAD
        SignalCode object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SignalCode *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SignalCode&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SignalCode&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
