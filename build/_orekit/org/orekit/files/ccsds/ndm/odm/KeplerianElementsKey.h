#ifndef org_orekit_files_ccsds_ndm_odm_KeplerianElementsKey_H
#define org_orekit_files_ccsds_ndm_odm_KeplerianElementsKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class KeplerianElements;
            class KeplerianElementsKey;
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
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

            class KeplerianElementsKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_dd99ccac3ff62527,
                mid_valueOf_f84841fb5f6ba9d9,
                mid_values_f3d922bc49c09955,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KeplerianElementsKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KeplerianElementsKey(const KeplerianElementsKey& obj) : ::java::lang::Enum(obj) {}

              static KeplerianElementsKey *ARG_OF_PERICENTER;
              static KeplerianElementsKey *COMMENT;
              static KeplerianElementsKey *ECCENTRICITY;
              static KeplerianElementsKey *EPOCH;
              static KeplerianElementsKey *GM;
              static KeplerianElementsKey *INCLINATION;
              static KeplerianElementsKey *MEAN_ANOMALY;
              static KeplerianElementsKey *MEAN_MOTION;
              static KeplerianElementsKey *RA_OF_ASC_NODE;
              static KeplerianElementsKey *SEMI_MAJOR_AXIS;
              static KeplerianElementsKey *TRUE_ANOMALY;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements &) const;
              static KeplerianElementsKey valueOf(const ::java::lang::String &);
              static JArray< KeplerianElementsKey > values();
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
            extern PyType_Def PY_TYPE_DEF(KeplerianElementsKey);
            extern PyTypeObject *PY_TYPE(KeplerianElementsKey);

            class t_KeplerianElementsKey {
            public:
              PyObject_HEAD
              KeplerianElementsKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_KeplerianElementsKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const KeplerianElementsKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const KeplerianElementsKey&, PyTypeObject *);
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
