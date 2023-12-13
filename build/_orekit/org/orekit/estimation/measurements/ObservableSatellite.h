#ifndef org_orekit_estimation_measurements_ObservableSatellite_H
#define org_orekit_estimation_measurements_ObservableSatellite_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
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
            mid_init$_44ed599e93e8a30c,
            mid_equals_460c5e2d9d51c6cc,
            mid_getClockDriftDriver_a59daa5e273117e1,
            mid_getClockOffsetDriver_a59daa5e273117e1,
            mid_getPropagatorIndex_55546ef6a647f39b,
            mid_hashCode_55546ef6a647f39b,
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
