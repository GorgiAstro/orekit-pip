#ifndef org_orekit_gnss_attitude_GNSSAttitudeProvider_H
#define org_orekit_gnss_attitude_GNSSAttitudeProvider_H

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
    namespace gnss {
      namespace attitude {

        class GNSSAttitudeProvider : public ::org::orekit::attitudes::AttitudeProvider {
         public:
          enum {
            mid_validityEnd_80e11148db499dda,
            mid_validityStart_80e11148db499dda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GNSSAttitudeProvider(jobject obj) : ::org::orekit::attitudes::AttitudeProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GNSSAttitudeProvider(const GNSSAttitudeProvider& obj) : ::org::orekit::attitudes::AttitudeProvider(obj) {}

          ::org::orekit::time::AbsoluteDate validityEnd() const;
          ::org::orekit::time::AbsoluteDate validityStart() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        extern PyType_Def PY_TYPE_DEF(GNSSAttitudeProvider);
        extern PyTypeObject *PY_TYPE(GNSSAttitudeProvider);

        class t_GNSSAttitudeProvider {
        public:
          PyObject_HEAD
          GNSSAttitudeProvider object;
          static PyObject *wrap_Object(const GNSSAttitudeProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
