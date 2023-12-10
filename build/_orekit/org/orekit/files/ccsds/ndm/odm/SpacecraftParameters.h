#ifndef org_orekit_files_ccsds_ndm_odm_SpacecraftParameters_H
#define org_orekit_files_ccsds_ndm_odm_SpacecraftParameters_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
namespace java {
  namespace lang {
    class Class;
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
                mid_init$_0fa09c18fee449d5,
                mid_getDragArea_dff5885c2c873297,
                mid_getDragCoeff_dff5885c2c873297,
                mid_getMass_dff5885c2c873297,
                mid_getSolarRadArea_dff5885c2c873297,
                mid_getSolarRadCoeff_dff5885c2c873297,
                mid_setDragArea_17db3a65980d3441,
                mid_setDragCoeff_17db3a65980d3441,
                mid_setMass_17db3a65980d3441,
                mid_setSolarRadArea_17db3a65980d3441,
                mid_setSolarRadCoeff_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
