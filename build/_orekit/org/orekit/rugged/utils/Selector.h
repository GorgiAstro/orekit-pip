#ifndef org_orekit_rugged_utils_Selector_H
#define org_orekit_rugged_utils_Selector_H

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
      namespace utils {

        class Selector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_select_2268d18be49a6087,
            mid_selectFirst_41fce65646328eb2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Selector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Selector(const Selector& obj) : ::java::lang::Object(obj) {}

          Selector();

          jdouble select(jdouble, jdouble) const;
          jboolean selectFirst(jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(Selector);
        extern PyTypeObject *PY_TYPE(Selector);

        class t_Selector {
        public:
          PyObject_HEAD
          Selector object;
          static PyObject *wrap_Object(const Selector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
