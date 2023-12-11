#ifndef org_orekit_gnss_metric_ntrip_CarrierPhase_H
#define org_orekit_gnss_metric_ntrip_CarrierPhase_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class CarrierPhase;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class CarrierPhase : public ::java::lang::Enum {
           public:
            enum {
              mid_getCarrierPhase_14ce0488740d6593,
              mid_valueOf_14ce0488740d6593,
              mid_values_afb61100453b72d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CarrierPhase(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CarrierPhase(const CarrierPhase& obj) : ::java::lang::Enum(obj) {}

            static CarrierPhase *L1;
            static CarrierPhase *L1_L2;
            static CarrierPhase *NO;

            static CarrierPhase getCarrierPhase(const ::java::lang::String &);
            static CarrierPhase valueOf(const ::java::lang::String &);
            static JArray< CarrierPhase > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(CarrierPhase);
          extern PyTypeObject *PY_TYPE(CarrierPhase);

          class t_CarrierPhase {
          public:
            PyObject_HEAD
            CarrierPhase object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CarrierPhase *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CarrierPhase&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CarrierPhase&, PyTypeObject *);
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
