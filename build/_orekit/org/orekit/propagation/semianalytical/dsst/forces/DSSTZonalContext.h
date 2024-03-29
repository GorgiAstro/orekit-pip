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
                mid_getBB_9981f74b2d109da6,
                mid_getBoA_9981f74b2d109da6,
                mid_getBoABpo_9981f74b2d109da6,
                mid_getCXO2N2A2_9981f74b2d109da6,
                mid_getHK_9981f74b2d109da6,
                mid_getK2MH2_9981f74b2d109da6,
                mid_getK2MH2O2_9981f74b2d109da6,
                mid_getM2aoA_9981f74b2d109da6,
                mid_getMCo2AB_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                mid_getMuoa_9981f74b2d109da6,
                mid_getOON2A2_9981f74b2d109da6,
                mid_getOoAB_9981f74b2d109da6,
                mid_getRoa_9981f74b2d109da6,
                mid_getX_9981f74b2d109da6,
                mid_getX2ON2A2XP1_9981f74b2d109da6,
                mid_getX3ON2A_9981f74b2d109da6,
                mid_getXON2A2_9981f74b2d109da6,
                mid_getXX_9981f74b2d109da6,
                mid_getXXX_9981f74b2d109da6,
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
