#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyDynamicContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyDynamicContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
          }
        }
      }
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
                mid_init$_55c5b6aea8221227,
                mid_getA_456d9a2f64d6b28d,
                mid_getAlpha_456d9a2f64d6b28d,
                mid_getBB_456d9a2f64d6b28d,
                mid_getBBB_456d9a2f64d6b28d,
                mid_getBeta_456d9a2f64d6b28d,
                mid_getBoA_456d9a2f64d6b28d,
                mid_getBoABpo_456d9a2f64d6b28d,
                mid_getGamma_456d9a2f64d6b28d,
                mid_getHXXX_456d9a2f64d6b28d,
                mid_getKXXX_456d9a2f64d6b28d,
                mid_getM2aoA_456d9a2f64d6b28d,
                mid_getMCo2AB_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getMuoR3_456d9a2f64d6b28d,
                mid_getOoAB_456d9a2f64d6b28d,
                mid_getR3_456d9a2f64d6b28d,
                mid_getX_456d9a2f64d6b28d,
                mid_getXX_456d9a2f64d6b28d,
                mid_getb_456d9a2f64d6b28d,
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
