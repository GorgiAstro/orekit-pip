#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTThirdBodyDynamicContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTThirdBodyDynamicContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
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
                mid_init$_fbdd386e600c6e4b,
                mid_getA_e6d4d3215c30992a,
                mid_getAlpha_e6d4d3215c30992a,
                mid_getBB_e6d4d3215c30992a,
                mid_getBBB_e6d4d3215c30992a,
                mid_getBeta_e6d4d3215c30992a,
                mid_getBoA_e6d4d3215c30992a,
                mid_getBoABpo_e6d4d3215c30992a,
                mid_getGamma_e6d4d3215c30992a,
                mid_getHXXX_e6d4d3215c30992a,
                mid_getKXXX_e6d4d3215c30992a,
                mid_getM2aoA_e6d4d3215c30992a,
                mid_getMCo2AB_e6d4d3215c30992a,
                mid_getMeanMotion_e6d4d3215c30992a,
                mid_getMuoR3_e6d4d3215c30992a,
                mid_getOoAB_e6d4d3215c30992a,
                mid_getR3_e6d4d3215c30992a,
                mid_getX_e6d4d3215c30992a,
                mid_getXX_e6d4d3215c30992a,
                mid_getb_e6d4d3215c30992a,
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
