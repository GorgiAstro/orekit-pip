#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTThirdBodyDynamicContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTThirdBodyDynamicContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
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

            class FieldDSSTThirdBodyDynamicContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_init$_7d613228456ec52a,
                mid_getA_81520b552cb3fa26,
                mid_getAlpha_81520b552cb3fa26,
                mid_getBB_81520b552cb3fa26,
                mid_getBBB_81520b552cb3fa26,
                mid_getBeta_81520b552cb3fa26,
                mid_getBoA_81520b552cb3fa26,
                mid_getBoABpo_81520b552cb3fa26,
                mid_getGamma_81520b552cb3fa26,
                mid_getHXXX_81520b552cb3fa26,
                mid_getKXXX_81520b552cb3fa26,
                mid_getM2aoA_81520b552cb3fa26,
                mid_getMCo2AB_81520b552cb3fa26,
                mid_getMeanMotion_81520b552cb3fa26,
                mid_getMuoR3_81520b552cb3fa26,
                mid_getOoAB_81520b552cb3fa26,
                mid_getR3_81520b552cb3fa26,
                mid_getX_81520b552cb3fa26,
                mid_getXX_81520b552cb3fa26,
                mid_getb_81520b552cb3fa26,
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
