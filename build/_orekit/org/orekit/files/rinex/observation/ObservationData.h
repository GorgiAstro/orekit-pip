#ifndef org_orekit_files_rinex_observation_ObservationData_H
#define org_orekit_files_rinex_observation_ObservationData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class ObservationType;
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
      namespace rinex {
        namespace observation {

          class ObservationData : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9af4f38a9192ac92,
              mid_getLossOfLockIndicator_55546ef6a647f39b,
              mid_getObservationType_eeb5027d2516140e,
              mid_getSignalStrength_55546ef6a647f39b,
              mid_getValue_b74f83833fdad017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ObservationData(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ObservationData(const ObservationData& obj) : ::java::lang::Object(obj) {}

            ObservationData(const ::org::orekit::gnss::ObservationType &, jdouble, jint, jint);

            jint getLossOfLockIndicator() const;
            ::org::orekit::gnss::ObservationType getObservationType() const;
            jint getSignalStrength() const;
            jdouble getValue() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(ObservationData);
          extern PyTypeObject *PY_TYPE(ObservationData);

          class t_ObservationData {
          public:
            PyObject_HEAD
            ObservationData object;
            static PyObject *wrap_Object(const ObservationData&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
