#ifndef org_orekit_propagation_events_PythonAdaptableInterval_H
#define org_orekit_propagation_events_PythonAdaptableInterval_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class AdaptableInterval;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonAdaptableInterval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_currentInterval_1bbf81d80c47ecdd,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAdaptableInterval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAdaptableInterval(const PythonAdaptableInterval& obj) : ::java::lang::Object(obj) {}

          PythonAdaptableInterval();

          jdouble currentInterval(const ::org::orekit::propagation::SpacecraftState &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(PythonAdaptableInterval);
        extern PyTypeObject *PY_TYPE(PythonAdaptableInterval);

        class t_PythonAdaptableInterval {
        public:
          PyObject_HEAD
          PythonAdaptableInterval object;
          static PyObject *wrap_Object(const PythonAdaptableInterval&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
