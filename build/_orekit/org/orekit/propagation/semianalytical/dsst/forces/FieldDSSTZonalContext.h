#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTZonalContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTZonalContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class FieldDSSTZonalContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_getBB_613c8f46c659f636,
                mid_getBoA_613c8f46c659f636,
                mid_getBoABpo_613c8f46c659f636,
                mid_getCXO2N2A2_613c8f46c659f636,
                mid_getHK_613c8f46c659f636,
                mid_getK2MH2_613c8f46c659f636,
                mid_getK2MH2O2_613c8f46c659f636,
                mid_getM2aoA_613c8f46c659f636,
                mid_getMCo2AB_613c8f46c659f636,
                mid_getMeanMotion_613c8f46c659f636,
                mid_getMuoa_613c8f46c659f636,
                mid_getOON2A2_613c8f46c659f636,
                mid_getOoAB_613c8f46c659f636,
                mid_getRoa_613c8f46c659f636,
                mid_getX_613c8f46c659f636,
                mid_getX2ON2A2XP1_613c8f46c659f636,
                mid_getX3ON2A_613c8f46c659f636,
                mid_getXON2A2_613c8f46c659f636,
                mid_getXX_613c8f46c659f636,
                mid_getXXX_613c8f46c659f636,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldDSSTZonalContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldDSSTZonalContext(const FieldDSSTZonalContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {}

              ::org::hipparchus::CalculusFieldElement getBB() const;
              ::org::hipparchus::CalculusFieldElement getBoA() const;
              ::org::hipparchus::CalculusFieldElement getBoABpo() const;
              ::org::hipparchus::CalculusFieldElement getCXO2N2A2() const;
              ::org::hipparchus::CalculusFieldElement getHK() const;
              ::org::hipparchus::CalculusFieldElement getK2MH2() const;
              ::org::hipparchus::CalculusFieldElement getK2MH2O2() const;
              ::org::hipparchus::CalculusFieldElement getM2aoA() const;
              ::org::hipparchus::CalculusFieldElement getMCo2AB() const;
              ::org::hipparchus::CalculusFieldElement getMeanMotion() const;
              ::org::hipparchus::CalculusFieldElement getMuoa() const;
              ::org::hipparchus::CalculusFieldElement getOON2A2() const;
              ::org::hipparchus::CalculusFieldElement getOoAB() const;
              ::org::hipparchus::CalculusFieldElement getRoa() const;
              ::org::hipparchus::CalculusFieldElement getX() const;
              ::org::hipparchus::CalculusFieldElement getX2ON2A2XP1() const;
              ::org::hipparchus::CalculusFieldElement getX3ON2A() const;
              ::org::hipparchus::CalculusFieldElement getXON2A2() const;
              ::org::hipparchus::CalculusFieldElement getXX() const;
              ::org::hipparchus::CalculusFieldElement getXXX() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldDSSTZonalContext);
            extern PyTypeObject *PY_TYPE(FieldDSSTZonalContext);

            class t_FieldDSSTZonalContext {
            public:
              PyObject_HEAD
              FieldDSSTZonalContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldDSSTZonalContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldDSSTZonalContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldDSSTZonalContext&, PyTypeObject *);
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
