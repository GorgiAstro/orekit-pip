#ifndef org_orekit_attitudes_PythonSwitchHandler_H
#define org_orekit_attitudes_PythonSwitchHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class AttitudesSequence$SwitchHandler;
    }
    namespace propagation {
      class SpacecraftState;
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
    namespace attitudes {

      class PythonSwitchHandler : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_switchOccurred_fc1e5e72098d53da,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonSwitchHandler(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonSwitchHandler(const PythonSwitchHandler& obj) : ::java::lang::Object(obj) {}

        PythonSwitchHandler();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        void switchOccurred(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(PythonSwitchHandler);
      extern PyTypeObject *PY_TYPE(PythonSwitchHandler);

      class t_PythonSwitchHandler {
      public:
        PyObject_HEAD
        PythonSwitchHandler object;
        static PyObject *wrap_Object(const PythonSwitchHandler&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
