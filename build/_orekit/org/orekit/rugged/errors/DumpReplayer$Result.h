#ifndef org_orekit_rugged_errors_DumpReplayer$Result_H
#define org_orekit_rugged_errors_DumpReplayer$Result_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class DumpReplayer$Result : public ::java::lang::Object {
         public:
          enum {
            mid_getExpected_e661fe3ba2fafb22,
            mid_getReplayed_e661fe3ba2fafb22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DumpReplayer$Result(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DumpReplayer$Result(const DumpReplayer$Result& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object getExpected() const;
          ::java::lang::Object getReplayed() const;
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
        extern PyType_Def PY_TYPE_DEF(DumpReplayer$Result);
        extern PyTypeObject *PY_TYPE(DumpReplayer$Result);

        class t_DumpReplayer$Result {
        public:
          PyObject_HEAD
          DumpReplayer$Result object;
          static PyObject *wrap_Object(const DumpReplayer$Result&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
