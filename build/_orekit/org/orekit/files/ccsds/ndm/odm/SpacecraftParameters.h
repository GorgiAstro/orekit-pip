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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getDragArea_b74f83833fdad017,
                mid_getDragCoeff_b74f83833fdad017,
                mid_getMass_b74f83833fdad017,
                mid_getSolarRadArea_b74f83833fdad017,
                mid_getSolarRadCoeff_b74f83833fdad017,
                mid_setDragArea_8ba9fe7a847cecad,
                mid_setDragCoeff_8ba9fe7a847cecad,
                mid_setMass_8ba9fe7a847cecad,
                mid_setSolarRadArea_8ba9fe7a847cecad,
                mid_setSolarRadCoeff_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
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
