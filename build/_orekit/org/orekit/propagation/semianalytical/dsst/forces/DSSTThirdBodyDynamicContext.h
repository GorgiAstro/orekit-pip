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
                mid_init$_0c5b54ae7a4af60a,
                mid_getA_b74f83833fdad017,
                mid_getAlpha_b74f83833fdad017,
                mid_getBB_b74f83833fdad017,
                mid_getBBB_b74f83833fdad017,
                mid_getBeta_b74f83833fdad017,
                mid_getBoA_b74f83833fdad017,
                mid_getBoABpo_b74f83833fdad017,
                mid_getGamma_b74f83833fdad017,
                mid_getHXXX_b74f83833fdad017,
                mid_getKXXX_b74f83833fdad017,
                mid_getM2aoA_b74f83833fdad017,
                mid_getMCo2AB_b74f83833fdad017,
                mid_getMeanMotion_b74f83833fdad017,
                mid_getMuoR3_b74f83833fdad017,
                mid_getOoAB_b74f83833fdad017,
                mid_getR3_b74f83833fdad017,
                mid_getX_b74f83833fdad017,
                mid_getXX_b74f83833fdad017,
                mid_getb_b74f83833fdad017,
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
