#ifndef org_orekit_propagation_conversion_TLEPropagatorBuilder_H
#define org_orekit_propagation_conversion_TLEPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class TLEPropagatorBuilder;
      }
      namespace analytical {
        namespace tle {
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class TLEPropagator;
          class TLE;
        }
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
    }
    namespace estimation {
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class TLEPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_edb8bfbb9c94d0c5,
            mid_init$_d8ddb83f6cdc6ad6,
            mid_buildLeastSquaresModel_434804ad6c6cc8a8,
            mid_buildPropagator_f71c7f606859fe78,
            mid_copy_359c84901857d78a,
            mid_getTemplateTLE_dacb215ad36dee42,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TLEPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TLEPropagatorBuilder(const TLEPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm &);
          TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::data::DataContext &, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm &);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::analytical::tle::TLEPropagator buildPropagator(const JArray< jdouble > &) const;
          TLEPropagatorBuilder copy() const;
          ::org::orekit::propagation::analytical::tle::TLE getTemplateTLE() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(TLEPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(TLEPropagatorBuilder);

        class t_TLEPropagatorBuilder {
        public:
          PyObject_HEAD
          TLEPropagatorBuilder object;
          static PyObject *wrap_Object(const TLEPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
