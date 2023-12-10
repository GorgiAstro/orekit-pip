#ifndef org_orekit_estimation_measurements_generation_PythonAbstractMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_PythonAbstractMeasurementBuilder_H

#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class ObservedMeasurement;
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
  namespace hipparchus {
    namespace random {
      class CorrelatedRandomVectorGenerator;
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
              mid_init$_1cda38b242122db4,
              mid_init$_f74e8126ce3426c2,
              mid_build_d02e2fca157afe5d,
              mid_finalize_7ae3461a92a43152,
              mid_getBaseWeight_7cdc325af0834901,
              mid_getEnd_aaa854c403487cf3,
              mid_getNoise_7cdc325af0834901,
              mid_getSatellites_ff20f279f9ba9f9e,
              mid_getStart_aaa854c403487cf3,
              mid_getTheoreticalStandardDeviation_7cdc325af0834901,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
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
