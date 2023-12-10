#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTTesseralContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTTesseralContext_H

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

            class FieldDSSTTesseralContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_getAx2oA_e6d4d3215c30992a,
                mid_getBoA_e6d4d3215c30992a,
                mid_getBoABpo_e6d4d3215c30992a,
                mid_getChi_e6d4d3215c30992a,
                mid_getChi2_e6d4d3215c30992a,
                mid_getCo2AB_e6d4d3215c30992a,
                mid_getE2_e6d4d3215c30992a,
                mid_getMeanMotion_e6d4d3215c30992a,
                mid_getMoa_e6d4d3215c30992a,
                mid_getOoAB_e6d4d3215c30992a,
                mid_getOrbitPeriod_e6d4d3215c30992a,
                mid_getRatio_e6d4d3215c30992a,
                mid_getRoa_e6d4d3215c30992a,
                mid_getTheta_e6d4d3215c30992a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldDSSTTesseralContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldDSSTTesseralContext(const FieldDSSTTesseralContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {}

              ::org::hipparchus::CalculusFieldElement getAx2oA() const;
              ::org::hipparchus::CalculusFieldElement getBoA() const;
              ::org::hipparchus::CalculusFieldElement getBoABpo() const;
              ::org::hipparchus::CalculusFieldElement getChi() const;
              ::org::hipparchus::CalculusFieldElement getChi2() const;
              ::org::hipparchus::CalculusFieldElement getCo2AB() const;
              ::org::hipparchus::CalculusFieldElement getE2() const;
              ::org::hipparchus::CalculusFieldElement getMeanMotion() const;
              ::org::hipparchus::CalculusFieldElement getMoa() const;
              ::org::hipparchus::CalculusFieldElement getOoAB() const;
              ::org::hipparchus::CalculusFieldElement getOrbitPeriod() const;
              ::org::hipparchus::CalculusFieldElement getRatio() const;
              ::org::hipparchus::CalculusFieldElement getRoa() const;
              ::org::hipparchus::CalculusFieldElement getTheta() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldDSSTTesseralContext);
            extern PyTypeObject *PY_TYPE(FieldDSSTTesseralContext);

            class t_FieldDSSTTesseralContext {
            public:
              PyObject_HEAD
              FieldDSSTTesseralContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldDSSTTesseralContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldDSSTTesseralContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldDSSTTesseralContext&, PyTypeObject *);
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
