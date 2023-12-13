#ifndef org_orekit_estimation_sequential_MeasurementDecorator_H
#define org_orekit_estimation_sequential_MeasurementDecorator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace filtering {
      namespace kalman {
        class Measurement;
      }
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_7175a655de352e84,
            mid_getCovariance_f77d745f2128c391,
            mid_getObservedMeasurement_a902d8547365f415,
            mid_getTime_b74f83833fdad017,
            mid_getValue_3a10cc75bd070d84,
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
