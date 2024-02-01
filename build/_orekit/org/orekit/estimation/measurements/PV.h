#ifndef org_orekit_estimation_measurements_PV_H
#define org_orekit_estimation_measurements_PV_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class PV;
      }
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

        class PV : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_a747e59bf5cbf117,
            mid_init$_3bfaed5e0365e963,
            mid_init$_53a6d1957e6238b5,
            mid_init$_2293665340e2c778,
            mid_init$_43a03eb81775031e,
            mid_getCorrelationCoefficientsMatrix_eda3f19b8225f78f,
            mid_getCovarianceMatrix_eda3f19b8225f78f,
            mid_getPosition_032312bdeb3f2f93,
            mid_getVelocity_032312bdeb3f2f93,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PV(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PV(const PV& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          PV(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          PV(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< JArray< jdouble > > &, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          PV(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          PV(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          PV(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          JArray< JArray< jdouble > > getCorrelationCoefficientsMatrix() const;
          JArray< JArray< jdouble > > getCovarianceMatrix() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocity() const;
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
        extern PyType_Def PY_TYPE_DEF(PV);
        extern PyTypeObject *PY_TYPE(PV);

        class t_PV {
        public:
          PyObject_HEAD
          PV object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PV *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PV&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PV&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
