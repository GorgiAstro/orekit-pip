#ifndef org_orekit_estimation_measurements_AngularRaDec_H
#define org_orekit_estimation_measurements_AngularRaDec_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class GroundStation;
        class AngularRaDec;
        class ObservableSatellite;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class AngularRaDec : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_895f80ea02a737c2,
            mid_getObservedLineOfSight_e91e859b879f3586,
            mid_getReferenceFrame_b86f9f61d97a7244,
            mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
            mid_theoreticalEvaluation_27ef5cc84ad0852b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AngularRaDec(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AngularRaDec(const AngularRaDec& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          AngularRaDec(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getObservedLineOfSight(const ::org::orekit::frames::Frame &) const;
          ::org::orekit::frames::Frame getReferenceFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(AngularRaDec);
        extern PyTypeObject *PY_TYPE(AngularRaDec);

        class t_AngularRaDec {
        public:
          PyObject_HEAD
          AngularRaDec object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AngularRaDec *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AngularRaDec&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AngularRaDec&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
