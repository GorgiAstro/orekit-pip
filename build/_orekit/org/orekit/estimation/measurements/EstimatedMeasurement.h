#ifndef org_orekit_estimation_measurements_EstimatedMeasurement_H
#define org_orekit_estimation_measurements_EstimatedMeasurement_H

#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class TimeSpanMap;
      class ParameterDriver;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
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
            mid_init$_1751916beaa99c3d,
            mid_getDerivativesDrivers_14e21bf777ff0ccf,
            mid_getParameterDerivatives_3822ea7ff73f87e7,
            mid_getParameterDerivatives_9b6ae2200890bc5e,
            mid_getStateDerivatives_23a0aa7ddbf2fcc5,
            mid_getStateSize_55546ef6a647f39b,
            mid_setParameterDerivatives_0f81e0b84a8be2d3,
            mid_setParameterDerivatives_5f1452ec188801bb,
            mid_setStateDerivatives_fd10cb359d67ca83,
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
