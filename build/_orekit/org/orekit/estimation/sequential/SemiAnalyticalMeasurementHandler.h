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
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalProcess;
        class MeasurementDecorator;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
        class OrekitStepHandler;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_443674e595d9825a,
            mid_init$_5d94a9dc7da109ec,
            mid_handleStep_eb797cf50ec4b2c4,
            mid_init_3d13474d79f5e7bc,
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
