#ifndef org_orekit_estimation_measurements_generation_PythonScheduler_H
#define org_orekit_estimation_measurements_generation_PythonScheduler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class SortedSet;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          class MeasurementBuilder;
          class Scheduler;
        }
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class PythonScheduler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_generate_e61f6829e4c9c5f5,
              mid_getBuilder_63a5a16953d5c5b8,
              mid_init_a9e71d848b81c8f8,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonScheduler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonScheduler(const PythonScheduler& obj) : ::java::lang::Object(obj) {}

            PythonScheduler();

            void finalize() const;
            ::java::util::SortedSet generate(const ::java::util::Map &) const;
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder getBuilder() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonScheduler);
          extern PyTypeObject *PY_TYPE(PythonScheduler);

          class t_PythonScheduler {
          public:
            PyObject_HEAD
            PythonScheduler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonScheduler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonScheduler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonScheduler&, PyTypeObject *);
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
