#ifndef org_orekit_estimation_measurements_generation_PythonAbstractScheduler_H
#define org_orekit_estimation_measurements_generation_PythonAbstractScheduler_H

#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          class MeasurementBuilder;
        }
      }
    }
    namespace time {
      class DatesSelector;
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

          class PythonAbstractScheduler : public ::org::orekit::estimation::measurements::generation::AbstractScheduler {
           public:
            enum {
              mid_init$_abb76428109f399d,
              mid_finalize_0640e6acf969ed28,
              mid_measurementIsFeasible_981023bfa4a8a093,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractScheduler(jobject obj) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractScheduler(const PythonAbstractScheduler& obj) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(obj) {}

            PythonAbstractScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder &, const ::org::orekit::time::DatesSelector &);

            void finalize() const;
            jboolean measurementIsFeasible(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractScheduler);
          extern PyTypeObject *PY_TYPE(PythonAbstractScheduler);

          class t_PythonAbstractScheduler {
          public:
            PyObject_HEAD
            PythonAbstractScheduler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonAbstractScheduler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonAbstractScheduler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonAbstractScheduler&, PyTypeObject *);
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
