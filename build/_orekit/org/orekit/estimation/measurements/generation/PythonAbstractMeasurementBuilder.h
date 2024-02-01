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
        class ObservableSatellite;
        class ObservedMeasurement;
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
              mid_init$_ae6efa529bbaf6e7,
              mid_init$_483ec950921c3999,
              mid_build_9dac2855d37640dd,
              mid_finalize_ff7cb6c242604316,
              mid_getBaseWeight_be783177b060994b,
              mid_getEnd_80e11148db499dda,
              mid_getNoise_be783177b060994b,
              mid_getSatellites_27bb228995072af3,
              mid_getStart_80e11148db499dda,
              mid_getTheoreticalStandardDeviation_be783177b060994b,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
