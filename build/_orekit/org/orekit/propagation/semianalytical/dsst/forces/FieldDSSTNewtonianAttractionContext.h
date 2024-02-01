#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTNewtonianAttractionContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldDSSTNewtonianAttractionContext_H

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

            class FieldDSSTNewtonianAttractionContext : public ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext {
             public:
              enum {
                mid_getGM_08d37e3f77b7239d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldDSSTNewtonianAttractionContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldDSSTNewtonianAttractionContext(const FieldDSSTNewtonianAttractionContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(obj) {}

              ::org::hipparchus::CalculusFieldElement getGM() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldDSSTNewtonianAttractionContext);
            extern PyTypeObject *PY_TYPE(FieldDSSTNewtonianAttractionContext);

            class t_FieldDSSTNewtonianAttractionContext {
            public:
              PyObject_HEAD
              FieldDSSTNewtonianAttractionContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldDSSTNewtonianAttractionContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldDSSTNewtonianAttractionContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldDSSTNewtonianAttractionContext&, PyTypeObject *);
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
