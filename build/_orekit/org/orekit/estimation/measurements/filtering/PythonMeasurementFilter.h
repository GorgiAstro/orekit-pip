#ifndef org_orekit_estimation_measurements_filtering_PythonMeasurementFilter_H
#define org_orekit_estimation_measurements_filtering_PythonMeasurementFilter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          class MeasurementFilter;
        }
        class ObservedMeasurement;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          class PythonMeasurementFilter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_filter_2b2e233a7bb98272,
              mid_finalize_ff7cb6c242604316,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMeasurementFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMeasurementFilter(const PythonMeasurementFilter& obj) : ::java::lang::Object(obj) {}

            PythonMeasurementFilter();

            void filter(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::orekit::propagation::SpacecraftState &) const;
            void finalize() const;
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
        namespace filtering {
          extern PyType_Def PY_TYPE_DEF(PythonMeasurementFilter);
          extern PyTypeObject *PY_TYPE(PythonMeasurementFilter);

          class t_PythonMeasurementFilter {
          public:
            PyObject_HEAD
            PythonMeasurementFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonMeasurementFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonMeasurementFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonMeasurementFilter&, PyTypeObject *);
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
