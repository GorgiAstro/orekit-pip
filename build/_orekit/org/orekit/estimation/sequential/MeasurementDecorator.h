#ifndef org_orekit_estimation_sequential_MeasurementDecorator_H
#define org_orekit_estimation_sequential_MeasurementDecorator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class Measurement;
      }
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
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
      namespace sequential {

        class MeasurementDecorator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1c31b7db2619902,
            mid_getCovariance_b2eebabce70526d8,
            mid_getObservedMeasurement_2198162c3cb7b73f,
            mid_getTime_9981f74b2d109da6,
            mid_getValue_92d7e8d8d3f1dfcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MeasurementDecorator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MeasurementDecorator(const MeasurementDecorator& obj) : ::java::lang::Object(obj) {}

          MeasurementDecorator(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::time::AbsoluteDate &);

          ::org::hipparchus::linear::RealMatrix getCovariance() const;
          ::org::orekit::estimation::measurements::ObservedMeasurement getObservedMeasurement() const;
          jdouble getTime() const;
          ::org::hipparchus::linear::RealVector getValue() const;
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
        extern PyType_Def PY_TYPE_DEF(MeasurementDecorator);
        extern PyTypeObject *PY_TYPE(MeasurementDecorator);

        class t_MeasurementDecorator {
        public:
          PyObject_HEAD
          MeasurementDecorator object;
          static PyObject *wrap_Object(const MeasurementDecorator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
