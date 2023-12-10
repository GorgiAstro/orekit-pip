#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseralContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTTesseralContext_H

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

            class DSSTTesseralContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_getAx2oA_dff5885c2c873297,
                mid_getBoA_dff5885c2c873297,
                mid_getBoABpo_dff5885c2c873297,
                mid_getChi_dff5885c2c873297,
                mid_getChi2_dff5885c2c873297,
                mid_getCo2AB_dff5885c2c873297,
                mid_getE2_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getMoa_dff5885c2c873297,
                mid_getOoAB_dff5885c2c873297,
                mid_getOrbitPeriod_dff5885c2c873297,
                mid_getRatio_dff5885c2c873297,
                mid_getRoa_dff5885c2c873297,
                mid_getTheta_dff5885c2c873297,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTTesseralContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTTesseralContext(const DSSTTesseralContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              jdouble getAx2oA() const;
              jdouble getBoA() const;
              jdouble getBoABpo() const;
              jdouble getChi() const;
              jdouble getChi2() const;
              jdouble getCo2AB() const;
              jdouble getE2() const;
              jdouble getMeanMotion() const;
              jdouble getMoa() const;
              jdouble getOoAB() const;
              jdouble getOrbitPeriod() const;
              jdouble getRatio() const;
              jdouble getRoa() const;
              jdouble getTheta() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTTesseralContext);
            extern PyTypeObject *PY_TYPE(DSSTTesseralContext);

            class t_DSSTTesseralContext {
            public:
              PyObject_HEAD
              DSSTTesseralContext object;
              static PyObject *wrap_Object(const DSSTTesseralContext&);
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
