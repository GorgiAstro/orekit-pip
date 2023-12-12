#ifndef org_orekit_estimation_measurements_EstimatedMeasurement_H
#define org_orekit_estimation_measurements_EstimatedMeasurement_H

#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"

namespace org {
  namespace orekit {
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
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
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
            mid_init$_f92fd0d275c4d59c,
            mid_getDerivativesDrivers_d7cce92225eb0db2,
            mid_getParameterDerivatives_00b2044be7a3a4c5,
            mid_getParameterDerivatives_d8cf911e614780c8,
            mid_getStateDerivatives_ace8110626df0bb8,
            mid_getStateSize_412668abc8d889e9,
            mid_setParameterDerivatives_fdd3af5690b10570,
            mid_setParameterDerivatives_83d85c8b9fde2e36,
            mid_setStateDerivatives_03f9d79d0168ba0b,
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
