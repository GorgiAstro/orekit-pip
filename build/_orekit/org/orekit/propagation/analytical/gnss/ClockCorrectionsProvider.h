#ifndef org_orekit_propagation_analytical_gnss_ClockCorrectionsProvider_H
#define org_orekit_propagation_analytical_gnss_ClockCorrectionsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSClockElements;
          }
        }
      }
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          class ClockCorrectionsProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e8f3d0186004951c,
              mid_getAdditionalState_cb44069ef445f941,
              mid_getName_11b109bd155ca898,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClockCorrectionsProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClockCorrectionsProvider(const ClockCorrectionsProvider& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CLOCK_CORRECTIONS;

            ClockCorrectionsProvider(const ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements &);

            JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
            ::java::lang::String getName() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(ClockCorrectionsProvider);
          extern PyTypeObject *PY_TYPE(ClockCorrectionsProvider);

          class t_ClockCorrectionsProvider {
          public:
            PyObject_HEAD
            ClockCorrectionsProvider object;
            static PyObject *wrap_Object(const ClockCorrectionsProvider&);
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
