#ifndef org_orekit_estimation_measurements_gnss_AbstractWindUp_H
#define org_orekit_estimation_measurements_gnss_AbstractWindUp_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
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
        namespace gnss {

          class AbstractWindUp : public ::java::lang::Object {
           public:
            enum {
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              mid_emitterToInert_f462106a6ca97aca,
              mid_receiverToInert_f462106a6ca97aca,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractWindUp(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractWindUp(const AbstractWindUp& obj) : ::java::lang::Object(obj) {}

            ::java::util::List getParametersDrivers() const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
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
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(AbstractWindUp);
          extern PyTypeObject *PY_TYPE(AbstractWindUp);

          class t_AbstractWindUp {
          public:
            PyObject_HEAD
            AbstractWindUp object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractWindUp *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractWindUp&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractWindUp&, PyTypeObject *);
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
