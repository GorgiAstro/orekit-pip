#ifndef org_orekit_estimation_measurements_generation_PythonGeneratedMeasurementSubscriber_H
#define org_orekit_estimation_measurements_generation_PythonGeneratedMeasurementSubscriber_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          class GeneratedMeasurementSubscriber;
        }
        class ObservedMeasurement;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_handleGeneratedMeasurement_1640bf51befb0c77,
              mid_init_f89af00fc113b524,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
