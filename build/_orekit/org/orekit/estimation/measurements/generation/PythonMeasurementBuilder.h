#ifndef org_orekit_estimation_measurements_generation_PythonMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_PythonMeasurementBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace generation {
          class MeasurementBuilder;
        }
        class EstimationModifier;
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
    class List;
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

          class PythonMeasurementBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_addModifier_a3bed5360bec47d0,
              mid_build_9dac2855d37640dd,
              mid_finalize_ff7cb6c242604316,
              mid_getModifiers_d751c1a57012b438,
              mid_getSatellites_27bb228995072af3,
              mid_init_ce7d94fe97fdcf55,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMeasurementBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMeasurementBuilder(const PythonMeasurementBuilder& obj) : ::java::lang::Object(obj) {}

            PythonMeasurementBuilder();

            void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
            ::org::orekit::estimation::measurements::ObservedMeasurement build(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Map &) const;
            void finalize() const;
            ::java::util::List getModifiers() const;
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > getSatellites() const;
            void init(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonMeasurementBuilder);
          extern PyTypeObject *PY_TYPE(PythonMeasurementBuilder);

          class t_PythonMeasurementBuilder {
          public:
            PyObject_HEAD
            PythonMeasurementBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonMeasurementBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonMeasurementBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonMeasurementBuilder&, PyTypeObject *);
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
