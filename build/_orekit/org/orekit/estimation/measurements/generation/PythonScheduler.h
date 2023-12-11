#ifndef org_orekit_estimation_measurements_generation_PythonScheduler_H
#define org_orekit_estimation_measurements_generation_PythonScheduler_H

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
        namespace generation {
          class Scheduler;
          class MeasurementBuilder;
        }
        class ObservedMeasurement;
        class ObservableSatellite;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class PythonScheduler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_generate_efa69a4463f8239b,
              mid_getBuilder_73d2d5822258be13,
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
