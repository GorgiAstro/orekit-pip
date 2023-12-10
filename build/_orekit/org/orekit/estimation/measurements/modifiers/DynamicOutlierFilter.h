#ifndef org_orekit_estimation_measurements_modifiers_DynamicOutlierFilter_H
#define org_orekit_estimation_measurements_modifiers_DynamicOutlierFilter_H

#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
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
        namespace modifiers {

          class DynamicOutlierFilter : public ::org::orekit::estimation::measurements::modifiers::OutlierFilter {
           public:
            enum {
              mid_init$_987a5fb872043b12,
              mid_getSigma_7cdc325af0834901,
              mid_modify_a5896dbcbe782924,
              mid_setSigma_ebc26dcaf4761286,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DynamicOutlierFilter(jobject obj) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DynamicOutlierFilter(const DynamicOutlierFilter& obj) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(obj) {}

            DynamicOutlierFilter(jint, jdouble);

            JArray< jdouble > getSigma() const;
            void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
            void setSigma(const JArray< jdouble > &) const;
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
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(DynamicOutlierFilter);
          extern PyTypeObject *PY_TYPE(DynamicOutlierFilter);

          class t_DynamicOutlierFilter {
          public:
            PyObject_HEAD
            DynamicOutlierFilter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DynamicOutlierFilter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DynamicOutlierFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DynamicOutlierFilter&, PyTypeObject *);
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
