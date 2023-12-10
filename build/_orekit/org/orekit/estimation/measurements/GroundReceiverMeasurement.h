#ifndef org_orekit_estimation_measurements_GroundReceiverMeasurement_H
#define org_orekit_estimation_measurements_GroundReceiverMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class GroundReceiverMeasurement : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_e165cdc92bb6a83c,
            mid_init$_0922b0dcca6e1f60,
            mid_getGroundStationCoordinates_cb5b9259dadf02c2,
            mid_getGroundStationPosition_b070efa02e5e2595,
            mid_getStation_4a0fede0c03d79b0,
            mid_isTwoWay_e470b6d9e0d979db,
            mid_computeCommonParametersWithout_ea56c189b24970f5,
            mid_computeCommonParametersWithDerivatives_f035d89db5ef654f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundReceiverMeasurement(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundReceiverMeasurement(const GroundReceiverMeasurement& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

          GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation &, jboolean, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation &, jboolean, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          ::org::orekit::utils::PVCoordinates getGroundStationCoordinates(const ::org::orekit::frames::Frame &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getGroundStationPosition(const ::org::orekit::frames::Frame &) const;
          ::org::orekit::estimation::measurements::GroundStation getStation() const;
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
        extern PyType_Def PY_TYPE_DEF(GroundReceiverMeasurement);
        extern PyTypeObject *PY_TYPE(GroundReceiverMeasurement);

        class t_GroundReceiverMeasurement {
        public:
          PyObject_HEAD
          GroundReceiverMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GroundReceiverMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GroundReceiverMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GroundReceiverMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
