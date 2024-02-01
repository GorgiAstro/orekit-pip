#ifndef org_orekit_estimation_measurements_AngularAzEl_H
#define org_orekit_estimation_measurements_AngularAzEl_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class AngularAzEl;
        class ObservableSatellite;
        class GroundStation;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
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

        class AngularAzEl : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_81a66ef405c1c200,
            mid_getObservedLineOfSight_5996cdbecf4f0d06,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AngularAzEl(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AngularAzEl(const AngularAzEl& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          AngularAzEl(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getObservedLineOfSight(const ::org::orekit::frames::Frame &) const;
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
        extern PyType_Def PY_TYPE_DEF(AngularAzEl);
        extern PyTypeObject *PY_TYPE(AngularAzEl);

        class t_AngularAzEl {
        public:
          PyObject_HEAD
          AngularAzEl object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AngularAzEl *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AngularAzEl&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AngularAzEl&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
