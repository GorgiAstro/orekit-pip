#ifndef org_orekit_estimation_measurements_ObservableSatellite_H
#define org_orekit_estimation_measurements_ObservableSatellite_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class ObservableSatellite : public ::java::lang::Object {
         public:
          enum {
            mid_init$_99803b0791f320ff,
            mid_equals_65c7d273e80d497a,
            mid_getClockDriftDriver_a25ed222178aa59f,
            mid_getClockOffsetDriver_a25ed222178aa59f,
            mid_getPropagatorIndex_570ce0828f81a2c1,
            mid_hashCode_570ce0828f81a2c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ObservableSatellite(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ObservableSatellite(const ObservableSatellite& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *CLOCK_DRIFT_PREFIX;
          static ::java::lang::String *CLOCK_OFFSET_PREFIX;

          ObservableSatellite(jint);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::orekit::utils::ParameterDriver getClockDriftDriver() const;
          ::org::orekit::utils::ParameterDriver getClockOffsetDriver() const;
          jint getPropagatorIndex() const;
          jint hashCode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(ObservableSatellite);
        extern PyTypeObject *PY_TYPE(ObservableSatellite);

        class t_ObservableSatellite {
        public:
          PyObject_HEAD
          ObservableSatellite object;
          static PyObject *wrap_Object(const ObservableSatellite&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
