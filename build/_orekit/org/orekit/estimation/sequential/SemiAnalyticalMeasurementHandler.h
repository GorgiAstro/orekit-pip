#ifndef org_orekit_estimation_sequential_SemiAnalyticalMeasurementHandler_H
#define org_orekit_estimation_sequential_SemiAnalyticalMeasurementHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
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
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
        class OrekitStepHandler;
      }
      class SpacecraftState;
    }
    namespace estimation {
      namespace sequential {
        class MeasurementDecorator;
        class SemiAnalyticalProcess;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
  }
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class KalmanFilter;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class SemiAnalyticalMeasurementHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_038251d17f092e03,
            mid_init$_36616686aa8cda1a,
            mid_handleStep_9db9d9fe85cac7f9,
            mid_init_14deaae988292d42,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalMeasurementHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalMeasurementHandler(const SemiAnalyticalMeasurementHandler& obj) : ::java::lang::Object(obj) {}

          SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess &, const ::org::hipparchus::filtering::kalman::KalmanFilter &, const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &);
          SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess &, const ::org::hipparchus::filtering::kalman::KalmanFilter &, const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &, jboolean);

          void handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalMeasurementHandler);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalMeasurementHandler);

        class t_SemiAnalyticalMeasurementHandler {
        public:
          PyObject_HEAD
          SemiAnalyticalMeasurementHandler object;
          static PyObject *wrap_Object(const SemiAnalyticalMeasurementHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
