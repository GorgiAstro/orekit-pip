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
    class Class;
    class Throwable;
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
            mid_init$_ff7cb6c242604316,
            mid_currentInterval_b443ba1cc794b916,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
