#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyDynamicContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyDynamicContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
          }
        }
      }
    }
    namespace bodies {
      class CelestialBody;
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class DSSTThirdBodyDynamicContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_init$_9d38b0d93ab4e317,
                mid_getA_dff5885c2c873297,
                mid_getAlpha_dff5885c2c873297,
                mid_getBB_dff5885c2c873297,
                mid_getBBB_dff5885c2c873297,
                mid_getBeta_dff5885c2c873297,
                mid_getBoA_dff5885c2c873297,
                mid_getBoABpo_dff5885c2c873297,
                mid_getGamma_dff5885c2c873297,
                mid_getHXXX_dff5885c2c873297,
                mid_getKXXX_dff5885c2c873297,
                mid_getM2aoA_dff5885c2c873297,
                mid_getMCo2AB_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getMuoR3_dff5885c2c873297,
                mid_getOoAB_dff5885c2c873297,
                mid_getR3_dff5885c2c873297,
                mid_getX_dff5885c2c873297,
                mid_getXX_dff5885c2c873297,
                mid_getb_dff5885c2c873297,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTThirdBodyDynamicContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTThirdBodyDynamicContext(const DSSTThirdBodyDynamicContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              DSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const ::org::orekit::bodies::CelestialBody &, const JArray< jdouble > &);

              jdouble getA() const;
              jdouble getAlpha() const;
              jdouble getBB() const;
              jdouble getBBB() const;
              jdouble getBeta() const;
              jdouble getBoA() const;
              jdouble getBoABpo() const;
              jdouble getGamma() const;
              jdouble getHXXX() const;
              jdouble getKXXX() const;
              jdouble getM2aoA() const;
              jdouble getMCo2AB() const;
              jdouble getMeanMotion() const;
              jdouble getMuoR3() const;
              jdouble getOoAB() const;
              jdouble getR3() const;
              jdouble getX() const;
              jdouble getXX() const;
              jdouble getb() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTThirdBodyDynamicContext);
            extern PyTypeObject *PY_TYPE(DSSTThirdBodyDynamicContext);

            class t_DSSTThirdBodyDynamicContext {
            public:
              PyObject_HEAD
              DSSTThirdBodyDynamicContext object;
              static PyObject *wrap_Object(const DSSTThirdBodyDynamicContext&);
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
