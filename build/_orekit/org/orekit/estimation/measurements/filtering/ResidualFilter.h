#ifndef org_orekit_estimation_measurements_filtering_ResidualFilter_H
#define org_orekit_estimation_measurements_filtering_ResidualFilter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        namespace filtering {
          class MeasurementFilter;
        }
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
        namespace filtering {

          class ResidualFilter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_filter_00f3b288ddb27bce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ResidualFilter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ResidualFilter(const ResidualFilter& obj) : ::java::lang::Object(obj) {}

            ResidualFilter(jdouble);

            void filter(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::orekit::propagation::SpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(ResidualFilter);
          extern PyTypeObject *PY_TYPE(ResidualFilter);

          class t_ResidualFilter {
          public:
            PyObject_HEAD
            ResidualFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ResidualFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ResidualFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ResidualFilter&, PyTypeObject *);
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
