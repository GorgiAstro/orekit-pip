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
    namespace time {
      class AbsoluteDate;
    }
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
            mid_init$_047f677485db459a,
            mid_getDerivativesDrivers_11e4ca8182c1933d,
            mid_getParameterDerivatives_216e712e7fff98fc,
            mid_getParameterDerivatives_d136ede758f40943,
            mid_getStateDerivatives_45c1754ef74fe1b8,
            mid_getStateSize_d6ab429752e7c267,
            mid_setParameterDerivatives_63f001d499f83adb,
            mid_setParameterDerivatives_313626664dd230b6,
            mid_setStateDerivatives_5f60b0f0790bcf77,
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
