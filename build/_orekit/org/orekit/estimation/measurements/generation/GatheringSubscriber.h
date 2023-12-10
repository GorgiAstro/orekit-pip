#ifndef org_orekit_estimation_measurements_generation_GatheringSubscriber_H
#define org_orekit_estimation_measurements_generation_GatheringSubscriber_H

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
  namespace util {
    class SortedSet;
  }
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

          class GatheringSubscriber : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_getGeneratedMeasurements_917725130bbb61f1,
              mid_handleGeneratedMeasurement_558d7f8249b8a2bc,
              mid_init_a9e71d848b81c8f8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GatheringSubscriber(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GatheringSubscriber(const GatheringSubscriber& obj) : ::java::lang::Object(obj) {}

            GatheringSubscriber();

            ::java::util::SortedSet getGeneratedMeasurements() const;
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
          extern PyType_Def PY_TYPE_DEF(GatheringSubscriber);
          extern PyTypeObject *PY_TYPE(GatheringSubscriber);

          class t_GatheringSubscriber {
          public:
            PyObject_HEAD
            GatheringSubscriber object;
            static PyObject *wrap_Object(const GatheringSubscriber&);
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
