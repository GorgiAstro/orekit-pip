#ifndef org_orekit_files_sp3_SP3Utils_H
#define org_orekit_files_sp3_SP3Utils_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
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
    namespace files {
      namespace sp3 {

        class SP3Utils : public ::java::lang::Object {
         public:
          enum {
            mid_indexAccuracy_e35b4e41d0799f26,
            mid_siAccuracy_32b37b360bc5030c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Utils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Utils(const SP3Utils& obj) : ::java::lang::Object(obj) {}

          static ::org::orekit::utils::units::Unit *CLOCK_ACCURACY_UNIT;
          static ::org::orekit::utils::units::Unit *CLOCK_RATE_ACCURACY_UNIT;
          static ::org::orekit::utils::units::Unit *CLOCK_RATE_UNIT;
          static ::org::orekit::utils::units::Unit *CLOCK_UNIT;
          static jdouble DEFAULT_CLOCK_RATE_VALUE;
          static jdouble DEFAULT_CLOCK_VALUE;
          static ::org::orekit::utils::units::Unit *POSITION_ACCURACY_UNIT;
          static ::org::orekit::utils::units::Unit *POSITION_UNIT;
          static jdouble POS_VEL_BASE_ACCURACY;
          static ::org::orekit::utils::units::Unit *VELOCITY_ACCURACY_UNIT;
          static ::org::orekit::utils::units::Unit *VELOCITY_UNIT;

          static jint indexAccuracy(const ::org::orekit::utils::units::Unit &, jdouble, jdouble);
          static jdouble siAccuracy(const ::org::orekit::utils::units::Unit &, jdouble, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Utils);
        extern PyTypeObject *PY_TYPE(SP3Utils);

        class t_SP3Utils {
        public:
          PyObject_HEAD
          SP3Utils object;
          static PyObject *wrap_Object(const SP3Utils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
