#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTJ2SquaredClosedFormContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTJ2SquaredClosedFormContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
        }
      }
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

            class DSSTJ2SquaredClosedFormContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_init$_3392e009995cba69,
                mid_getA4_9981f74b2d109da6,
                mid_getAlpha4_9981f74b2d109da6,
                mid_getC_9981f74b2d109da6,
                mid_getEta_9981f74b2d109da6,
                mid_getS2_9981f74b2d109da6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTJ2SquaredClosedFormContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTJ2SquaredClosedFormContext(const DSSTJ2SquaredClosedFormContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              DSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);

              jdouble getA4() const;
              jdouble getAlpha4() const;
              jdouble getC() const;
              jdouble getEta() const;
              jdouble getS2() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTJ2SquaredClosedFormContext);
            extern PyTypeObject *PY_TYPE(DSSTJ2SquaredClosedFormContext);

            class t_DSSTJ2SquaredClosedFormContext {
            public:
              PyObject_HEAD
              DSSTJ2SquaredClosedFormContext object;
              static PyObject *wrap_Object(const DSSTJ2SquaredClosedFormContext&);
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
