#ifndef org_orekit_files_ccsds_ndm_cdm_StateVectorKey_H
#define org_orekit_files_ccsds_ndm_cdm_StateVectorKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace cdm {
            class StateVectorKey;
            class StateVector;
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
          namespace cdm {

            class StateVectorKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_5cc64f3494a3e9df,
                mid_valueOf_3ff27fc10a384ffc,
                mid_values_6787e3fc16c4dc2a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StateVectorKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StateVectorKey(const StateVectorKey& obj) : ::java::lang::Enum(obj) {}

              static StateVectorKey *COMMENT;
              static StateVectorKey *X;
              static StateVectorKey *X_DOT;
              static StateVectorKey *Y;
              static StateVectorKey *Y_DOT;
              static StateVectorKey *Z;
              static StateVectorKey *Z_DOT;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::StateVector &) const;
              static StateVectorKey valueOf(const ::java::lang::String &);
              static JArray< StateVectorKey > values();
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(StateVectorKey);
            extern PyTypeObject *PY_TYPE(StateVectorKey);

            class t_StateVectorKey {
            public:
              PyObject_HEAD
              StateVectorKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_StateVectorKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const StateVectorKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const StateVectorKey&, PyTypeObject *);
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
