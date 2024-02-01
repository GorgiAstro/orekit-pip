#ifndef org_orekit_estimation_measurements_gnss_WindUp_H
#define org_orekit_estimation_measurements_gnss_WindUp_H

#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class Phase;
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
        namespace gnss {

          class WindUp : public ::org::orekit::estimation::measurements::gnss::AbstractWindUp {
           public:
            enum {
              mid_emitterToInert_f462106a6ca97aca,
              mid_receiverToInert_f462106a6ca97aca,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WindUp(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WindUp(const WindUp& obj) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(WindUp);
          extern PyTypeObject *PY_TYPE(WindUp);

          class t_WindUp {
          public:
            PyObject_HEAD
            WindUp object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_WindUp *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const WindUp&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const WindUp&, PyTypeObject *);
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
