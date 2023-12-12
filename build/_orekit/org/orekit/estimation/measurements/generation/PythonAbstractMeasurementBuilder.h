#ifndef org_orekit_estimation_measurements_generation_PythonAbstractMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_PythonAbstractMeasurementBuilder_H

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
        class ObservedMeasurement;
        class ObservableSatellite;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class PythonAbstractMeasurementBuilder : public ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder {
           public:
            enum {
              mid_init$_8468e98590cd7e4e,
              mid_init$_e10682339646f739,
              mid_build_9bd3ff0754feb0c8,
              mid_finalize_0640e6acf969ed28,
              mid_getBaseWeight_a53a7513ecedada2,
              mid_getEnd_7a97f7e149e79afb,
              mid_getNoise_a53a7513ecedada2,
              mid_getSatellites_b8c09fefa9db3b83,
              mid_getStart_7a97f7e149e79afb,
              mid_getTheoreticalStandardDeviation_a53a7513ecedada2,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractMeasurementBuilder(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractMeasurementBuilder(const PythonAbstractMeasurementBuilder& obj) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(obj) {}

            PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > &);
            PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator &, jdouble, jdouble, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > &);

            ::org::orekit::estimation::measurements::ObservedMeasurement build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
            void finalize() const;
            JArray< jdouble > getBaseWeight() const;
            ::org::orekit::time::AbsoluteDate getEnd() const;
            JArray< jdouble > getNoise() const;
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > getSatellites() const;
            ::org::orekit::time::AbsoluteDate getStart() const;
            JArray< jdouble > getTheoreticalStandardDeviation() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractMeasurementBuilder);
          extern PyTypeObject *PY_TYPE(PythonAbstractMeasurementBuilder);

          class t_PythonAbstractMeasurementBuilder {
          public:
            PyObject_HEAD
            PythonAbstractMeasurementBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonAbstractMeasurementBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonAbstractMeasurementBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonAbstractMeasurementBuilder&, PyTypeObject *);
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
