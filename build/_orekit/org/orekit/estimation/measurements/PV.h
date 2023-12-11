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
            mid_init$_15beb50931c1cf88,
            mid_init$_9f586bcdceee113e,
            mid_init$_8a2365ac496613b2,
            mid_init$_3003177fad71f016,
            mid_init$_88bd0c310d4fcdf3,
            mid_getCorrelationCoefficientsMatrix_8cf5267aa13a77f3,
            mid_getCovarianceMatrix_8cf5267aa13a77f3,
            mid_getPosition_f88961cca75a2c0a,
            mid_getVelocity_f88961cca75a2c0a,
            mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7,
            mid_theoreticalEvaluation_eae039ee8c8a4a4d,
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
