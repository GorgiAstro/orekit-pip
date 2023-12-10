#ifndef org_orekit_propagation_conversion_TLEPropagatorBuilder_H
#define org_orekit_propagation_conversion_TLEPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLEPropagator;
          class TLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      namespace conversion {
        class PropagatorBuilder;
        class TLEPropagatorBuilder;
      }
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
    namespace orbits {
      class PositionAngleType;
    }
    namespace utils {
      class ParameterDriversList;
    }
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
            mid_init$_a62c74463f877056,
            mid_init$_321a504eebdd5b34,
            mid_buildLeastSquaresModel_31c4fcde5bc19fc3,
            mid_buildPropagator_6af7ded75f6f8b1c,
            mid_copy_213db2109b338194,
            mid_getTemplateTLE_32ddbfc0b67883b1,
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
