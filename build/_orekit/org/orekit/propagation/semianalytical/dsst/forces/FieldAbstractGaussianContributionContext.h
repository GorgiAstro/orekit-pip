#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldAbstractGaussianContributionContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldAbstractGaussianContributionContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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

            class FieldAbstractGaussianContributionContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_getA_08d37e3f77b7239d,
                mid_getCo2AB_08d37e3f77b7239d,
                mid_getMeanMotion_08d37e3f77b7239d,
                mid_getMu_08d37e3f77b7239d,
                mid_getOOA_08d37e3f77b7239d,
                mid_getOOAB_08d37e3f77b7239d,
                mid_getOoBpo_08d37e3f77b7239d,
                mid_getOoMU_08d37e3f77b7239d,
                mid_getTon2a_08d37e3f77b7239d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldAbstractGaussianContributionContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldAbstractGaussianContributionContext(const FieldAbstractGaussianContributionContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {}

              ::org::hipparchus::CalculusFieldElement getA() const;
              ::org::hipparchus::CalculusFieldElement getCo2AB() const;
              ::org::hipparchus::CalculusFieldElement getMeanMotion() const;
              ::org::hipparchus::CalculusFieldElement getMu() const;
              ::org::hipparchus::CalculusFieldElement getOOA() const;
              ::org::hipparchus::CalculusFieldElement getOOAB() const;
              ::org::hipparchus::CalculusFieldElement getOoBpo() const;
              ::org::hipparchus::CalculusFieldElement getOoMU() const;
              ::org::hipparchus::CalculusFieldElement getTon2a() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldAbstractGaussianContributionContext);
            extern PyTypeObject *PY_TYPE(FieldAbstractGaussianContributionContext);

            class t_FieldAbstractGaussianContributionContext {
            public:
              PyObject_HEAD
              FieldAbstractGaussianContributionContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldAbstractGaussianContributionContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldAbstractGaussianContributionContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldAbstractGaussianContributionContext&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
