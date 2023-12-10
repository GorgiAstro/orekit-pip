#ifndef org_orekit_estimation_measurements_EstimatedMeasurement_H
#define org_orekit_estimation_measurements_EstimatedMeasurement_H

#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"

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
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
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
            mid_init$_d1c2fb63ea99e1e6,
            mid_getDerivativesDrivers_20f6d2b462aaef4b,
            mid_getParameterDerivatives_5386fd8e2da103f7,
            mid_getParameterDerivatives_3a00431c3e905a8f,
            mid_getStateDerivatives_d3e8f395184a4338,
            mid_getStateSize_570ce0828f81a2c1,
            mid_setParameterDerivatives_ff7a5e31add3f53c,
            mid_setParameterDerivatives_39ef7d36cf7f5331,
            mid_setStateDerivatives_3ca2bf5de9b54389,
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
