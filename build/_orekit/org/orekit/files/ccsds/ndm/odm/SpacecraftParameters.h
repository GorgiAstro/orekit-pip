#ifndef org_orekit_files_ccsds_ndm_odm_SpacecraftParameters_H
#define org_orekit_files_ccsds_ndm_odm_SpacecraftParameters_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Data;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class SpacecraftParameters : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getDragArea_456d9a2f64d6b28d,
                mid_getDragCoeff_456d9a2f64d6b28d,
                mid_getMass_456d9a2f64d6b28d,
                mid_getSolarRadArea_456d9a2f64d6b28d,
                mid_getSolarRadCoeff_456d9a2f64d6b28d,
                mid_setDragArea_77e0f9a1f260e2e5,
                mid_setDragCoeff_77e0f9a1f260e2e5,
                mid_setMass_77e0f9a1f260e2e5,
                mid_setSolarRadArea_77e0f9a1f260e2e5,
                mid_setSolarRadCoeff_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpacecraftParameters(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpacecraftParameters(const SpacecraftParameters& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              SpacecraftParameters();

              jdouble getDragArea() const;
              jdouble getDragCoeff() const;
              jdouble getMass() const;
              jdouble getSolarRadArea() const;
              jdouble getSolarRadCoeff() const;
              void setDragArea(jdouble) const;
              void setDragCoeff(jdouble) const;
              void setMass(jdouble) const;
              void setSolarRadArea(jdouble) const;
              void setSolarRadCoeff(jdouble) const;
              void validate(jdouble) const;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(SpacecraftParameters);
            extern PyTypeObject *PY_TYPE(SpacecraftParameters);

            class t_SpacecraftParameters {
            public:
              PyObject_HEAD
              SpacecraftParameters object;
              static PyObject *wrap_Object(const SpacecraftParameters&);
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
