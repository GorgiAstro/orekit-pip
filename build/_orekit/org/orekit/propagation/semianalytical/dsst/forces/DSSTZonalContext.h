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
                mid_getBB_dff5885c2c873297,
                mid_getBoA_dff5885c2c873297,
                mid_getBoABpo_dff5885c2c873297,
                mid_getCXO2N2A2_dff5885c2c873297,
                mid_getHK_dff5885c2c873297,
                mid_getK2MH2_dff5885c2c873297,
                mid_getK2MH2O2_dff5885c2c873297,
                mid_getM2aoA_dff5885c2c873297,
                mid_getMCo2AB_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getMuoa_dff5885c2c873297,
                mid_getOON2A2_dff5885c2c873297,
                mid_getOoAB_dff5885c2c873297,
                mid_getRoa_dff5885c2c873297,
                mid_getX_dff5885c2c873297,
                mid_getX2ON2A2XP1_dff5885c2c873297,
                mid_getX3ON2A_dff5885c2c873297,
                mid_getXON2A2_dff5885c2c873297,
                mid_getXX_dff5885c2c873297,
                mid_getXXX_dff5885c2c873297,
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
