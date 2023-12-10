#ifndef org_orekit_estimation_measurements_Range_H
#define org_orekit_estimation_measurements_Range_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
        class ObservableSatellite;
        class Range;
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

        class Range : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_d61b0753fbc5ddd9,
            mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
            mid_theoreticalEvaluation_27ef5cc84ad0852b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Range(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Range(const Range& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          Range(const ::org::orekit::estimation::measurements::GroundStation &, jboolean, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
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
        extern PyType_Def PY_TYPE_DEF(Range);
        extern PyTypeObject *PY_TYPE(Range);

        class t_Range {
        public:
          PyObject_HEAD
          Range object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Range *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Range&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Range&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
