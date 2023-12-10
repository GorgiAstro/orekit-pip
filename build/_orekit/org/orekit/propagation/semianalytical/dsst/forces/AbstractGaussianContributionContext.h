#ifndef org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContributionContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_AbstractGaussianContributionContext_H

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

            class AbstractGaussianContributionContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_getCo2AB_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getMu_456d9a2f64d6b28d,
                mid_getOOA_456d9a2f64d6b28d,
                mid_getOOAB_456d9a2f64d6b28d,
                mid_getOoBpo_456d9a2f64d6b28d,
                mid_getOoMU_456d9a2f64d6b28d,
                mid_getTon2a_456d9a2f64d6b28d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractGaussianContributionContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractGaussianContributionContext(const AbstractGaussianContributionContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              jdouble getCo2AB() const;
              jdouble getMeanMotion() const;
              jdouble getMu() const;
              jdouble getOOA() const;
              jdouble getOOAB() const;
              jdouble getOoBpo() const;
              jdouble getOoMU() const;
              jdouble getTon2a() const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractGaussianContributionContext);
            extern PyTypeObject *PY_TYPE(AbstractGaussianContributionContext);

            class t_AbstractGaussianContributionContext {
            public:
              PyObject_HEAD
              AbstractGaussianContributionContext object;
              static PyObject *wrap_Object(const AbstractGaussianContributionContext&);
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
