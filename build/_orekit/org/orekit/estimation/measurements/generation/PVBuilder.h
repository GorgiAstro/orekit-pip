#ifndef org_orekit_estimation_measurements_generation_PVBuilder_H
#define org_orekit_estimation_measurements_generation_PVBuilder_H

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
        class PV;
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
        namespace generation {

          class PVBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_2d62f87042236ab6,
              mid_build_b7a095bbb9aad293,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PVBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PVBuilder(const PVBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            PVBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

            ::org::orekit::estimation::measurements::PV build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(PVBuilder);
          extern PyTypeObject *PY_TYPE(PVBuilder);

          class t_PVBuilder {
          public:
            PyObject_HEAD
            PVBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PVBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PVBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PVBuilder&, PyTypeObject *);
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
