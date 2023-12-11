#ifndef org_orekit_estimation_measurements_BistaticRange_H
#define org_orekit_estimation_measurements_BistaticRange_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class BistaticRange;
        class ObservableSatellite;
        class GroundStation;
      }
    }
    namespace time {
      class AbsoluteDate;
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
    namespace estimation {
      namespace measurements {

        class BistaticRange : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_631cad984dc812e4,
            mid_getEmitterStation_2161f2a4a8c885ec,
            mid_getReceiverStation_2161f2a4a8c885ec,
            mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7,
            mid_theoreticalEvaluation_eae039ee8c8a4a4d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BistaticRange(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BistaticRange(const BistaticRange& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          BistaticRange(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          ::org::orekit::estimation::measurements::GroundStation getEmitterStation() const;
          ::org::orekit::estimation::measurements::GroundStation getReceiverStation() const;
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
        extern PyType_Def PY_TYPE_DEF(BistaticRange);
        extern PyTypeObject *PY_TYPE(BistaticRange);

        class t_BistaticRange {
        public:
          PyObject_HEAD
          BistaticRange object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BistaticRange *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BistaticRange&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BistaticRange&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
