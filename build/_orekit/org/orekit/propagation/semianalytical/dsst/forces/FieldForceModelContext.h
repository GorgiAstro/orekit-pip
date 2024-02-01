#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldForceModelContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldForceModelContext_H

#include "java/lang/Object.h"

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

            class FieldForceModelContext : public ::java::lang::Object {
             public:
              enum {
                mid_getFieldAuxiliaryElements_fb84f60e04f8fd36,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldForceModelContext(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldForceModelContext(const FieldForceModelContext& obj) : ::java::lang::Object(obj) {}

              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements getFieldAuxiliaryElements() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldForceModelContext);
            extern PyTypeObject *PY_TYPE(FieldForceModelContext);

            class t_FieldForceModelContext {
            public:
              PyObject_HEAD
              FieldForceModelContext object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldForceModelContext *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldForceModelContext&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldForceModelContext&, PyTypeObject *);
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
