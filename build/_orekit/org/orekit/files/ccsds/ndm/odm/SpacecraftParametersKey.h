#ifndef org_orekit_files_ccsds_ndm_odm_SpacecraftParametersKey_H
#define org_orekit_files_ccsds_ndm_odm_SpacecraftParametersKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class SpacecraftParametersKey;
            class SpacecraftParameters;
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class SpacecraftParametersKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_2af9cb2c7a28b83c,
                mid_valueOf_69f702e734d2f199,
                mid_values_00864d635520c9f3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpacecraftParametersKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpacecraftParametersKey(const SpacecraftParametersKey& obj) : ::java::lang::Enum(obj) {}

              static SpacecraftParametersKey *COMMENT;
              static SpacecraftParametersKey *DRAG_AREA;
              static SpacecraftParametersKey *DRAG_COEFF;
              static SpacecraftParametersKey *MASS;
              static SpacecraftParametersKey *SOLAR_RAD_AREA;
              static SpacecraftParametersKey *SOLAR_RAD_COEFF;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters &) const;
              static SpacecraftParametersKey valueOf(const ::java::lang::String &);
              static JArray< SpacecraftParametersKey > values();
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
            extern PyType_Def PY_TYPE_DEF(SpacecraftParametersKey);
            extern PyTypeObject *PY_TYPE(SpacecraftParametersKey);

            class t_SpacecraftParametersKey {
            public:
              PyObject_HEAD
              SpacecraftParametersKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_SpacecraftParametersKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const SpacecraftParametersKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const SpacecraftParametersKey&, PyTypeObject *);
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
