#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTJ2SquaredClosedFormContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTJ2SquaredClosedFormContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"

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
            class FieldAuxiliaryElements;
          }
        }
      }
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

            class FieldDSSTJ2SquaredClosedFormContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_init$_3951bdd3b9659811,
                mid_getA4_81520b552cb3fa26,
                mid_getAlpha4_b74f83833fdad017,
                mid_getC_81520b552cb3fa26,
                mid_getEta_81520b552cb3fa26,
                mid_getS2_81520b552cb3fa26,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldDSSTJ2SquaredClosedFormContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldDSSTJ2SquaredClosedFormContext(const FieldDSSTJ2SquaredClosedFormContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {}

              FieldDSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &);

              ::org::hipparchus::CalculusFieldElement getA4() const;
              jdouble getAlpha4() const;
              ::org::hipparchus::CalculusFieldElement getC() const;
              ::org::hipparchus::CalculusFieldElement getEta() const;
              ::org::hipparchus::CalculusFieldElement getS2() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldDSSTJ2SquaredClosedFormContext);
            extern PyTypeObject *PY_TYPE(FieldDSSTJ2SquaredClosedFormContext);

            class t_FieldDSSTJ2SquaredClosedFormContext {
            public:
              PyObject_HEAD
              FieldDSSTJ2SquaredClosedFormContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldDSSTJ2SquaredClosedFormContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldDSSTJ2SquaredClosedFormContext&, PyTypeObject *);
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
