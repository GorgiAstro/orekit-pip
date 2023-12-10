#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTZonalContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTZonalContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class DSSTZonalContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_getBB_456d9a2f64d6b28d,
                mid_getBoA_456d9a2f64d6b28d,
                mid_getBoABpo_456d9a2f64d6b28d,
                mid_getCXO2N2A2_456d9a2f64d6b28d,
                mid_getHK_456d9a2f64d6b28d,
                mid_getK2MH2_456d9a2f64d6b28d,
                mid_getK2MH2O2_456d9a2f64d6b28d,
                mid_getM2aoA_456d9a2f64d6b28d,
                mid_getMCo2AB_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getMuoa_456d9a2f64d6b28d,
                mid_getOON2A2_456d9a2f64d6b28d,
                mid_getOoAB_456d9a2f64d6b28d,
                mid_getRoa_456d9a2f64d6b28d,
                mid_getX_456d9a2f64d6b28d,
                mid_getX2ON2A2XP1_456d9a2f64d6b28d,
                mid_getX3ON2A_456d9a2f64d6b28d,
                mid_getXON2A2_456d9a2f64d6b28d,
                mid_getXX_456d9a2f64d6b28d,
                mid_getXXX_456d9a2f64d6b28d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTZonalContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTZonalContext(const DSSTZonalContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              jdouble getBB() const;
              jdouble getBoA() const;
              jdouble getBoABpo() const;
              jdouble getCXO2N2A2() const;
              jdouble getHK() const;
              jdouble getK2MH2() const;
              jdouble getK2MH2O2() const;
              jdouble getM2aoA() const;
              jdouble getMCo2AB() const;
              jdouble getMeanMotion() const;
              jdouble getMuoa() const;
              jdouble getOON2A2() const;
              jdouble getOoAB() const;
              jdouble getRoa() const;
              jdouble getX() const;
              jdouble getX2ON2A2XP1() const;
              jdouble getX3ON2A() const;
              jdouble getXON2A2() const;
              jdouble getXX() const;
              jdouble getXXX() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(DSSTZonalContext);
            extern PyTypeObject *PY_TYPE(DSSTZonalContext);

            class t_DSSTZonalContext {
            public:
              PyObject_HEAD
              DSSTZonalContext object;
              static PyObject *wrap_Object(const DSSTZonalContext&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif