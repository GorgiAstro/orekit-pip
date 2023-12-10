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
                mid_getCo2AB_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getMu_dff5885c2c873297,
                mid_getOOA_dff5885c2c873297,
                mid_getOOAB_dff5885c2c873297,
                mid_getOoBpo_dff5885c2c873297,
                mid_getOoMU_dff5885c2c873297,
                mid_getTon2a_dff5885c2c873297,
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
