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
                mid_init$_ff7cb6c242604316,
                mid_getDragArea_9981f74b2d109da6,
                mid_getDragCoeff_9981f74b2d109da6,
                mid_getMass_9981f74b2d109da6,
                mid_getSolarRadArea_9981f74b2d109da6,
                mid_getSolarRadCoeff_9981f74b2d109da6,
                mid_setDragArea_1ad26e8c8c0cd65b,
                mid_setDragCoeff_1ad26e8c8c0cd65b,
                mid_setMass_1ad26e8c8c0cd65b,
                mid_setSolarRadArea_1ad26e8c8c0cd65b,
                mid_setSolarRadCoeff_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
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
