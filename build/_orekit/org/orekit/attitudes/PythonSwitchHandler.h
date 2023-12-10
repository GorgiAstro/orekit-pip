#ifndef org_orekit_attitudes_PythonSwitchHandler_H
#define org_orekit_attitudes_PythonSwitchHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudesSequence$SwitchHandler;
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class PythonSwitchHandler : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_switchOccurred_0bf4342ddf7e9645,
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
