#ifndef org_orekit_estimation_measurements_generation_PythonGeneratedMeasurementSubscriber_H
#define org_orekit_estimation_measurements_generation_PythonGeneratedMeasurementSubscriber_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        namespace generation {
          class GeneratedMeasurementSubscriber;
        }
        class ObservedMeasurement;
      }
    }
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
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_handleGeneratedMeasurement_ccec3dc40c67aef1,
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
