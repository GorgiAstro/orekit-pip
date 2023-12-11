#ifndef org_orekit_estimation_measurements_generation_PositionBuilder_H
#define org_orekit_estimation_measurements_generation_PositionBuilder_H

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
        class Position;
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

          class PositionBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_c6d5bf8c476330d3,
              mid_build_5812c2d3106b1048,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositionBuilder(const PositionBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            PositionBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

            ::org::orekit::estimation::measurements::Position build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
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
          extern PyType_Def PY_TYPE_DEF(PositionBuilder);
          extern PyTypeObject *PY_TYPE(PositionBuilder);

          class t_PositionBuilder {
          public:
            PyObject_HEAD
            PositionBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PositionBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PositionBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PositionBuilder&, PyTypeObject *);
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
