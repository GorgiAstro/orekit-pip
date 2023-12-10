#ifndef org_orekit_propagation_events_ParameterDrivenDateIntervalDetector_H
#define org_orekit_propagation_events_ParameterDrivenDateIntervalDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class ParameterDrivenDateIntervalDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
      class DateDriver;
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
      namespace events {

        class ParameterDrivenDateIntervalDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_49db7ce395dde351,
            mid_init$_7d29df8e1e987e68,
            mid_g_432f3d328c15ec82,
            mid_getDurationDriver_a25ed222178aa59f,
            mid_getMedianDriver_3fcb2f6aa57e183e,
            mid_getStartDriver_3fcb2f6aa57e183e,
            mid_getStopDriver_3fcb2f6aa57e183e,
            mid_create_4b6d24734e79941b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParameterDrivenDateIntervalDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParameterDrivenDateIntervalDetector(const ParameterDrivenDateIntervalDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          static ::java::lang::String *DURATION_SUFFIX;
          static ::java::lang::String *MEDIAN_SUFFIX;
          static ::java::lang::String *START_SUFFIX;
          static ::java::lang::String *STOP_SUFFIX;

          ParameterDrivenDateIntervalDetector(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);
          ParameterDrivenDateIntervalDetector(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::utils::ParameterDriver getDurationDriver() const;
          ::org::orekit::utils::DateDriver getMedianDriver() const;
          ::org::orekit::utils::DateDriver getStartDriver() const;
          ::org::orekit::utils::DateDriver getStopDriver() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(ParameterDrivenDateIntervalDetector);
        extern PyTypeObject *PY_TYPE(ParameterDrivenDateIntervalDetector);

        class t_ParameterDrivenDateIntervalDetector {
        public:
          PyObject_HEAD
          ParameterDrivenDateIntervalDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ParameterDrivenDateIntervalDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ParameterDrivenDateIntervalDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ParameterDrivenDateIntervalDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
