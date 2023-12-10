#ifndef org_orekit_attitudes_AttitudeProviderModifier_H
#define org_orekit_attitudes_AttitudeProviderModifier_H

#include "org/orekit/attitudes/AttitudeProvider.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class AttitudeProviderModifier : public ::org::orekit::attitudes::AttitudeProvider {
       public:
        enum {
          mid_getUnderlyingAttitudeProvider_5cce95036ae870ba,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AttitudeProviderModifier(jobject obj) : ::org::orekit::attitudes::AttitudeProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AttitudeProviderModifier(const AttitudeProviderModifier& obj) : ::org::orekit::attitudes::AttitudeProvider(obj) {}

        ::org::orekit::attitudes::AttitudeProvider getUnderlyingAttitudeProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(AttitudeProviderModifier);
      extern PyTypeObject *PY_TYPE(AttitudeProviderModifier);

      class t_AttitudeProviderModifier {
      public:
        PyObject_HEAD
        AttitudeProviderModifier object;
        static PyObject *wrap_Object(const AttitudeProviderModifier&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
