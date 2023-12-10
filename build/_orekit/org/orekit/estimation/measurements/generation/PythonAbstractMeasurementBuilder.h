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
              mid_init$_577088844344eac1,
              mid_init$_96f673984426d019,
              mid_build_ae909064be36023e,
              mid_finalize_0fa09c18fee449d5,
              mid_getBaseWeight_60c7040667a7dc5c,
              mid_getEnd_85703d13e302437e,
              mid_getNoise_60c7040667a7dc5c,
              mid_getSatellites_f81b672126a6576d,
              mid_getStart_85703d13e302437e,
              mid_getTheoreticalStandardDeviation_60c7040667a7dc5c,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
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
