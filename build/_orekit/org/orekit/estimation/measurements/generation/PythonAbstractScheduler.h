#ifndef org_orekit_estimation_measurements_generation_PythonAbstractScheduler_H
#define org_orekit_estimation_measurements_generation_PythonAbstractScheduler_H

#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"

namespace org {
  namespace orekit {
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
    }
    namespace estimation {
      namespace measurements {
        namespace generation {
          class MeasurementBuilder;
        }
      }
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
              mid_init$_1c3d87302302feaf,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_measurementIsFeasible_a35647bda2901f54,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
