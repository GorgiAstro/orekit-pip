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
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class ObservableSatellite;
      }
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
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
              mid_init$_4f943d9e98868fa9,
              mid_init$_de1f836ff115aa61,
              mid_build_121e4e49170b7802,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getBaseWeight_25e1757a36c4dde2,
              mid_getEnd_c325492395d89b24,
              mid_getNoise_25e1757a36c4dde2,
              mid_getSatellites_eb47c48e4fca882c,
              mid_getStart_c325492395d89b24,
              mid_getTheoreticalStandardDeviation_25e1757a36c4dde2,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
