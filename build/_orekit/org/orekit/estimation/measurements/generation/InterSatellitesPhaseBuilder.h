#ifndef org_orekit_estimation_measurements_generation_InterSatellitesPhaseBuilder_H
#define org_orekit_estimation_measurements_generation_InterSatellitesPhaseBuilder_H

#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class CorrelatedRandomVectorGenerator;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace gnss {
          class InterSatellitesPhase;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
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
        namespace generation {

          class InterSatellitesPhaseBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_e19b999c1386068d,
              mid_build_0114763a92169f96,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InterSatellitesPhaseBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InterSatellitesPhaseBuilder(const InterSatellitesPhaseBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            InterSatellitesPhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, const ::org::orekit::estimation::measurements::ObservableSatellite &, const ::org::orekit::estimation::measurements::ObservableSatellite &, jdouble, jdouble, jdouble);

            ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
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
        namespace generation {
          extern PyType_Def PY_TYPE_DEF(InterSatellitesPhaseBuilder);
          extern PyTypeObject *PY_TYPE(InterSatellitesPhaseBuilder);

          class t_InterSatellitesPhaseBuilder {
          public:
            PyObject_HEAD
            InterSatellitesPhaseBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_InterSatellitesPhaseBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const InterSatellitesPhaseBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const InterSatellitesPhaseBuilder&, PyTypeObject *);
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
