#ifndef org_orekit_attitudes_AttitudesSequence$SwitchHandler_H
#define org_orekit_attitudes_AttitudesSequence$SwitchHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class AttitudesSequence$SwitchHandler : public ::java::lang::Object {
       public:
        enum {
          mid_switchOccurred_8a05bbdb2856b4ec,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AttitudesSequence$SwitchHandler(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AttitudesSequence$SwitchHandler(const AttitudesSequence$SwitchHandler& obj) : ::java::lang::Object(obj) {}

        void switchOccurred(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(AttitudesSequence$SwitchHandler);
      extern PyTypeObject *PY_TYPE(AttitudesSequence$SwitchHandler);

      class t_AttitudesSequence$SwitchHandler {
      public:
        PyObject_HEAD
        AttitudesSequence$SwitchHandler object;
        static PyObject *wrap_Object(const AttitudesSequence$SwitchHandler&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
