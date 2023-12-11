#ifndef org_orekit_estimation_measurements_gnss_PhaseBuilder_H
#define org_orekit_estimation_measurements_gnss_PhaseBuilder_H

#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class CorrelatedRandomVectorGenerator;
    }
  }
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
    }
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
        namespace gnss {
          class Phase;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class PhaseBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_6ea91a9a36f19e05,
              mid_build_2399d3358731d055,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseBuilder(const PhaseBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            PhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, const ::org::orekit::estimation::measurements::GroundStation &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

            ::org::orekit::estimation::measurements::gnss::Phase build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(PhaseBuilder);
          extern PyTypeObject *PY_TYPE(PhaseBuilder);

          class t_PhaseBuilder {
          public:
            PyObject_HEAD
            PhaseBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PhaseBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PhaseBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PhaseBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
