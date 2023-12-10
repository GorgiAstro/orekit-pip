#ifndef org_orekit_estimation_measurements_EstimatedMeasurement_H
#define org_orekit_estimation_measurements_EstimatedMeasurement_H

#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
      class TimeStampedPVCoordinates;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class EstimatedMeasurement : public ::org::orekit::estimation::measurements::EstimatedMeasurementBase {
         public:
          enum {
            mid_init$_928a9f4df476de65,
            mid_getDerivativesDrivers_a68a17dd093f796d,
            mid_getParameterDerivatives_6363ab2c73fe360a,
            mid_getParameterDerivatives_401862141dab4c49,
            mid_getStateDerivatives_01d6404243df74a0,
            mid_getStateSize_f2f64475e4580546,
            mid_setParameterDerivatives_24fd0e1bfa4da802,
            mid_setParameterDerivatives_0748e18bcfe2efe9,
            mid_setStateDerivatives_d2ec2a370d571745,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimatedMeasurement(jobject obj) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimatedMeasurement(const EstimatedMeasurement& obj) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(obj) {}

          EstimatedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement &, jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > &);

          ::java::util::stream::Stream getDerivativesDrivers() const;
          JArray< jdouble > getParameterDerivatives(const ::org::orekit::utils::ParameterDriver &) const;
          JArray< jdouble > getParameterDerivatives(const ::org::orekit::utils::ParameterDriver &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< JArray< jdouble > > getStateDerivatives(jint) const;
          jint getStateSize() const;
          void setParameterDerivatives(const ::org::orekit::utils::ParameterDriver &, const ::org::orekit::utils::TimeSpanMap &) const;
          void setParameterDerivatives(const ::org::orekit::utils::ParameterDriver &, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &) const;
          void setStateDerivatives(jint, const JArray< JArray< jdouble > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(EstimatedMeasurement);
        extern PyTypeObject *PY_TYPE(EstimatedMeasurement);

        class t_EstimatedMeasurement {
        public:
          PyObject_HEAD
          EstimatedMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EstimatedMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EstimatedMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EstimatedMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
