#ifndef org_orekit_propagation_analytical_tle_FieldSDP4_H
#define org_orekit_propagation_analytical_tle_FieldSDP4_H

#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class FieldSDP4 : public ::org::orekit::propagation::analytical::tle::FieldTLEPropagator {
           public:
            enum {
              mid_sxpInitialize_4c337e4c1ec6f647,
              mid_sxpPropagate_ef0bb554ba052051,
              mid_luniSolarTermsComputation_7ae3461a92a43152,
              mid_deepSecularEffects_03a16642f77779e7,
              mid_deepPeriodicEffects_03a16642f77779e7,
              mid_thetaG_2f201d67a80e0793,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldSDP4(jobject obj) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldSDP4(const FieldSDP4& obj) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(obj) {}
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(FieldSDP4);
          extern PyTypeObject *PY_TYPE(FieldSDP4);

          class t_FieldSDP4 {
          public:
            PyObject_HEAD
            FieldSDP4 object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldSDP4 *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldSDP4&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldSDP4&, PyTypeObject *);
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
