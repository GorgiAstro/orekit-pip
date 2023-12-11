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
                mid_init$_fa9c0c4c693f20ff,
                mid_getA_557b8123390d8d0c,
                mid_getAlpha_557b8123390d8d0c,
                mid_getBB_557b8123390d8d0c,
                mid_getBBB_557b8123390d8d0c,
                mid_getBeta_557b8123390d8d0c,
                mid_getBoA_557b8123390d8d0c,
                mid_getBoABpo_557b8123390d8d0c,
                mid_getGamma_557b8123390d8d0c,
                mid_getHXXX_557b8123390d8d0c,
                mid_getKXXX_557b8123390d8d0c,
                mid_getM2aoA_557b8123390d8d0c,
                mid_getMCo2AB_557b8123390d8d0c,
                mid_getMeanMotion_557b8123390d8d0c,
                mid_getMuoR3_557b8123390d8d0c,
                mid_getOoAB_557b8123390d8d0c,
                mid_getR3_557b8123390d8d0c,
                mid_getX_557b8123390d8d0c,
                mid_getXX_557b8123390d8d0c,
                mid_getb_557b8123390d8d0c,
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
