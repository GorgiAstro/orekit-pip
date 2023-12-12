#ifndef org_orekit_estimation_measurements_generation_PythonMeasurementBuilder_H
#define org_orekit_estimation_measurements_generation_PythonMeasurementBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        namespace generation {
          class MeasurementBuilder;
        }
        class ObservableSatellite;
        class EstimationModifier;
      }
    }
    namespace time {
      class AbsoluteDate;
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
              mid_init$_0640e6acf969ed28,
              mid_addModifier_6f472135bf397672,
              mid_build_9bd3ff0754feb0c8,
              mid_finalize_0640e6acf969ed28,
              mid_getModifiers_0d9551367f7ecdef,
              mid_getSatellites_b8c09fefa9db3b83,
              mid_init_d5db9a5f2035671b,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
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
