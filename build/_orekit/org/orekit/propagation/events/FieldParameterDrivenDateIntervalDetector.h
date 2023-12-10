#ifndef org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H
#define org_orekit_propagation_events_FieldParameterDrivenDateIntervalDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class DateDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
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

        class FieldParameterDrivenDateIntervalDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_aed558bc796a4379,
            mid_init$_7b7ab69c28b41c60,
            mid_g_41a008afe53da855,
            mid_getDurationDriver_a25ed222178aa59f,
            mid_getMedianDriver_3fcb2f6aa57e183e,
            mid_getStartDriver_3fcb2f6aa57e183e,
            mid_getStopDriver_3fcb2f6aa57e183e,
            mid_create_29a8fc1df67f1fa7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldParameterDrivenDateIntervalDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldParameterDrivenDateIntervalDetector(const FieldParameterDrivenDateIntervalDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          static ::java::lang::String *DURATION_SUFFIX;
          static ::java::lang::String *MEDIAN_SUFFIX;
          static ::java::lang::String *START_SUFFIX;
          static ::java::lang::String *STOP_SUFFIX;

          FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);
          FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, jdouble);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector);
        extern PyTypeObject *PY_TYPE(FieldParameterDrivenDateIntervalDetector);

        class t_FieldParameterDrivenDateIntervalDetector {
        public:
          PyObject_HEAD
          FieldParameterDrivenDateIntervalDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldParameterDrivenDateIntervalDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldParameterDrivenDateIntervalDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldParameterDrivenDateIntervalDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
