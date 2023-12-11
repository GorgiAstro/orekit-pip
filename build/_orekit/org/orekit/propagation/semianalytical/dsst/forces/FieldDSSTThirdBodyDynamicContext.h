#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTThirdBodyDynamicContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTThirdBodyDynamicContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
          }
        }
      }
    }
    namespace bodies {
      class CelestialBody;
    }
  }
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

            class FieldDSSTThirdBodyDynamicContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_init$_5161005972fb7356,
                mid_getA_613c8f46c659f636,
                mid_getAlpha_613c8f46c659f636,
                mid_getBB_613c8f46c659f636,
                mid_getBBB_613c8f46c659f636,
                mid_getBeta_613c8f46c659f636,
                mid_getBoA_613c8f46c659f636,
                mid_getBoABpo_613c8f46c659f636,
                mid_getGamma_613c8f46c659f636,
                mid_getHXXX_613c8f46c659f636,
                mid_getKXXX_613c8f46c659f636,
                mid_getM2aoA_613c8f46c659f636,
                mid_getMCo2AB_613c8f46c659f636,
                mid_getMeanMotion_613c8f46c659f636,
                mid_getMuoR3_613c8f46c659f636,
                mid_getOoAB_613c8f46c659f636,
                mid_getR3_613c8f46c659f636,
                mid_getX_613c8f46c659f636,
                mid_getXX_613c8f46c659f636,
                mid_getb_613c8f46c659f636,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldDSSTThirdBodyDynamicContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldDSSTThirdBodyDynamicContext(const FieldDSSTThirdBodyDynamicContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {}

              FieldDSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const ::org::orekit::bodies::CelestialBody &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

              ::org::hipparchus::CalculusFieldElement getA() const;
              ::org::hipparchus::CalculusFieldElement getAlpha() const;
              ::org::hipparchus::CalculusFieldElement getBB() const;
              ::org::hipparchus::CalculusFieldElement getBBB() const;
              ::org::hipparchus::CalculusFieldElement getBeta() const;
              ::org::hipparchus::CalculusFieldElement getBoA() const;
              ::org::hipparchus::CalculusFieldElement getBoABpo() const;
              ::org::hipparchus::CalculusFieldElement getGamma() const;
              ::org::hipparchus::CalculusFieldElement getHXXX() const;
              ::org::hipparchus::CalculusFieldElement getKXXX() const;
              ::org::hipparchus::CalculusFieldElement getM2aoA() const;
              ::org::hipparchus::CalculusFieldElement getMCo2AB() const;
              ::org::hipparchus::CalculusFieldElement getMeanMotion() const;
              ::org::hipparchus::CalculusFieldElement getMuoR3() const;
              ::org::hipparchus::CalculusFieldElement getOoAB() const;
              ::org::hipparchus::CalculusFieldElement getR3() const;
              ::org::hipparchus::CalculusFieldElement getX() const;
              ::org::hipparchus::CalculusFieldElement getXX() const;
              ::org::hipparchus::CalculusFieldElement getb() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldDSSTThirdBodyDynamicContext);
            extern PyTypeObject *PY_TYPE(FieldDSSTThirdBodyDynamicContext);

            class t_FieldDSSTThirdBodyDynamicContext {
            public:
              PyObject_HEAD
              FieldDSSTThirdBodyDynamicContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldDSSTThirdBodyDynamicContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldDSSTThirdBodyDynamicContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldDSSTThirdBodyDynamicContext&, PyTypeObject *);
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
