#ifndef org_orekit_estimation_measurements_generation_GeneratedMeasurementSubscriber_H
#define org_orekit_estimation_measurements_generation_GeneratedMeasurementSubscriber_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class GeneratedMeasurementSubscriber : public ::java::lang::Object {
           public:
            enum {
              mid_handleGeneratedMeasurement_1640bf51befb0c77,
              mid_init_f89af00fc113b524,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeneratedMeasurementSubscriber(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeneratedMeasurementSubscriber(const GeneratedMeasurementSubscriber& obj) : ::java::lang::Object(obj) {}

            void handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement &) const;
            void init(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeneratedMeasurementSubscriber);
          extern PyTypeObject *PY_TYPE(GeneratedMeasurementSubscriber);

          class t_GeneratedMeasurementSubscriber {
          public:
            PyObject_HEAD
            GeneratedMeasurementSubscriber object;
            static PyObject *wrap_Object(const GeneratedMeasurementSubscriber&);
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
