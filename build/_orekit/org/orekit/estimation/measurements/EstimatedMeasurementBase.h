#ifndef org_orekit_estimation_measurements_EstimatedMeasurementBase_H
#define org_orekit_estimation_measurements_EstimatedMeasurementBase_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase$Status;
        class ComparableMeasurement;
        class ObservedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class EstimatedMeasurementBase : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d1c2fb63ea99e1e6,
            mid_getCount_570ce0828f81a2c1,
            mid_getDate_85703d13e302437e,
            mid_getEstimatedValue_60c7040667a7dc5c,
            mid_getIteration_570ce0828f81a2c1,
            mid_getObservedMeasurement_744f33e0abf11bf9,
            mid_getObservedValue_60c7040667a7dc5c,
            mid_getParticipants_2c08433c0c18552f,
            mid_getStates_fa9cea0faefb9a31,
            mid_getStatus_7c948ae3415a4366,
            mid_getTimeOffset_dff5885c2c873297,
            mid_setEstimatedValue_fa9d415d19f69361,
            mid_setStatus_6b1c7f370d471bab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimatedMeasurementBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimatedMeasurementBase(const EstimatedMeasurementBase& obj) : ::java::lang::Object(obj) {}

          EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement &, jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > &);

          jint getCount() const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          JArray< jdouble > getEstimatedValue() const;
          jint getIteration() const;
          ::org::orekit::estimation::measurements::ObservedMeasurement getObservedMeasurement() const;
          JArray< jdouble > getObservedValue() const;
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > getParticipants() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getStates() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status getStatus() const;
          jdouble getTimeOffset() const;
          void setEstimatedValue(const JArray< jdouble > &) const;
          void setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status &) const;
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
        extern PyType_Def PY_TYPE_DEF(EstimatedMeasurementBase);
        extern PyTypeObject *PY_TYPE(EstimatedMeasurementBase);

        class t_EstimatedMeasurementBase {
        public:
          PyObject_HEAD
          EstimatedMeasurementBase object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EstimatedMeasurementBase *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EstimatedMeasurementBase&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EstimatedMeasurementBase&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
