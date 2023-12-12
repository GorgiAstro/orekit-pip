#ifndef org_orekit_estimation_measurements_generation_PythonGeneratedMeasurementSubscriber_H
#define org_orekit_estimation_measurements_generation_PythonGeneratedMeasurementSubscriber_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        namespace generation {
          class GeneratedMeasurementSubscriber;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
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

          class PythonGeneratedMeasurementSubscriber : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_handleGeneratedMeasurement_4063373aad443d2b,
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

            explicit PythonGeneratedMeasurementSubscriber(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonGeneratedMeasurementSubscriber(const PythonGeneratedMeasurementSubscriber& obj) : ::java::lang::Object(obj) {}

            PythonGeneratedMeasurementSubscriber();

            void finalize() const;
            void handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonGeneratedMeasurementSubscriber);
          extern PyTypeObject *PY_TYPE(PythonGeneratedMeasurementSubscriber);

          class t_PythonGeneratedMeasurementSubscriber {
          public:
            PyObject_HEAD
            PythonGeneratedMeasurementSubscriber object;
            static PyObject *wrap_Object(const PythonGeneratedMeasurementSubscriber&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
