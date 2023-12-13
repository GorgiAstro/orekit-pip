#ifndef org_orekit_estimation_measurements_InterSatellitesRange_H
#define org_orekit_estimation_measurements_InterSatellitesRange_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class InterSatellitesRange;
        class ObservableSatellite;
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

        class InterSatellitesRange : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_f57a839e18c000c5,
            mid_isTwoWay_9ab94ac1dc23b105,
            mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a,
            mid_theoreticalEvaluation_d598991c5cac8ab0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InterSatellitesRange(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InterSatellitesRange(const InterSatellitesRange& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          InterSatellitesRange(const ::org::orekit::estimation::measurements::ObservableSatellite &, const ::org::orekit::estimation::measurements::ObservableSatellite &, jboolean, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble);

          jboolean isTwoWay() const;
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
        extern PyType_Def PY_TYPE_DEF(InterSatellitesRange);
        extern PyTypeObject *PY_TYPE(InterSatellitesRange);

        class t_InterSatellitesRange {
        public:
          PyObject_HEAD
          InterSatellitesRange object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_InterSatellitesRange *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const InterSatellitesRange&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const InterSatellitesRange&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
