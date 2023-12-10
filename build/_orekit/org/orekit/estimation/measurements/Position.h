#ifndef org_orekit_estimation_measurements_Position_H
#define org_orekit_estimation_measurements_Position_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class Position;
        class ObservableSatellite;
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

        class Position : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_b39cf2a9e1d1fc45,
            mid_init$_984266dc65a298c8,
            mid_init$_91453090eb6b628d,
            mid_getCorrelationCoefficientsMatrix_0358d8ea02f2cdb1,
            mid_getCovarianceMatrix_0358d8ea02f2cdb1,
            mid_getPosition_d52645e0d4c07563,
            mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
            mid_theoreticalEvaluation_27ef5cc84ad0852b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Position(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Position(const Position& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

          static ::java::lang::String *MEASUREMENT_TYPE;

          Position(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< jdouble > &, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          Position(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const JArray< JArray< jdouble > > &, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);
          Position(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          JArray< JArray< jdouble > > getCorrelationCoefficientsMatrix() const;
          JArray< JArray< jdouble > > getCovarianceMatrix() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
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
        extern PyType_Def PY_TYPE_DEF(Position);
        extern PyTypeObject *PY_TYPE(Position);

        class t_Position {
        public:
          PyObject_HEAD
          Position object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Position *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Position&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Position&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
