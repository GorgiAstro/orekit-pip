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
              mid_luniSolarTermsComputation_0640e6acf969ed28,
              mid_thetaG_3eee18bd9e50c57c,
              mid_deepSecularEffects_1ee4bed350fde589,
              mid_deepPeriodicEffects_1ee4bed350fde589,
              mid_sxpInitialize_5d9c9afaca2e497c,
              mid_sxpPropagate_960efa47e0a8eec2,
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
