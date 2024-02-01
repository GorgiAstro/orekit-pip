#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyDynamicContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyDynamicContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                mid_init$_747a861def72ab1c,
                mid_getA_9981f74b2d109da6,
                mid_getAlpha_9981f74b2d109da6,
                mid_getBB_9981f74b2d109da6,
                mid_getBBB_9981f74b2d109da6,
                mid_getBeta_9981f74b2d109da6,
                mid_getBoA_9981f74b2d109da6,
                mid_getBoABpo_9981f74b2d109da6,
                mid_getGamma_9981f74b2d109da6,
                mid_getHXXX_9981f74b2d109da6,
                mid_getKXXX_9981f74b2d109da6,
                mid_getM2aoA_9981f74b2d109da6,
                mid_getMCo2AB_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                mid_getMuoR3_9981f74b2d109da6,
                mid_getOoAB_9981f74b2d109da6,
                mid_getR3_9981f74b2d109da6,
                mid_getX_9981f74b2d109da6,
                mid_getXX_9981f74b2d109da6,
                mid_getb_9981f74b2d109da6,
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
