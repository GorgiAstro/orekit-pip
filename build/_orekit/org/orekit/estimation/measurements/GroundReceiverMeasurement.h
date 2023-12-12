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
    namespace utils {
      class PVCoordinates;
    }
    namespace frames {
      class Frame;
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
            mid_init$_cc77f77ecf3467f7,
            mid_init$_0c97652d522ed1b8,
            mid_getGroundStationCoordinates_2608b7929cfe65be,
            mid_getGroundStationPosition_8386213426308de8,
            mid_getStation_2161f2a4a8c885ec,
            mid_isTwoWay_89b302893bdbe1f1,
            mid_computeCommonParametersWithout_eb2352b23f22469e,
            mid_computeCommonParametersWithDerivatives_e0d35cbb5d453f3a,
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
