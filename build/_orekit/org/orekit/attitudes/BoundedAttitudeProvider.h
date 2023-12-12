#ifndef org_orekit_attitudes_BoundedAttitudeProvider_H
#define org_orekit_attitudes_BoundedAttitudeProvider_H

#include "org/orekit/attitudes/AttitudeProvider.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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

      class BoundedAttitudeProvider : public ::org::orekit::attitudes::AttitudeProvider {
       public:
        enum {
          mid_getMaxDate_7a97f7e149e79afb,
          mid_getMinDate_7a97f7e149e79afb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BoundedAttitudeProvider(jobject obj) : ::org::orekit::attitudes::AttitudeProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BoundedAttitudeProvider(const BoundedAttitudeProvider& obj) : ::org::orekit::attitudes::AttitudeProvider(obj) {}

        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(BoundedAttitudeProvider);
      extern PyTypeObject *PY_TYPE(BoundedAttitudeProvider);

      class t_BoundedAttitudeProvider {
      public:
        PyObject_HEAD
        BoundedAttitudeProvider object;
        static PyObject *wrap_Object(const BoundedAttitudeProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
