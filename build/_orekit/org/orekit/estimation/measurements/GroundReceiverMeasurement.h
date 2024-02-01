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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
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
            mid_init$_4b32275f454debe9,
            mid_init$_c2b759d1b43bb582,
            mid_getGroundStationCoordinates_40801dad0fb52423,
            mid_getGroundStationPosition_5996cdbecf4f0d06,
            mid_getStation_f8d3ef5d49da0d87,
            mid_isTwoWay_eee3de00fe971136,
            mid_computeCommonParametersWithout_8840f6bb9bb72260,
            mid_computeCommonParametersWithDerivatives_e7e18dd9e92cc83c,
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
