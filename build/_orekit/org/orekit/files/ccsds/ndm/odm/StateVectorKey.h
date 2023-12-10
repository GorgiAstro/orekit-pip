#ifndef org_orekit_files_ccsds_ndm_odm_StateVectorKey_H
#define org_orekit_files_ccsds_ndm_odm_StateVectorKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class StateVectorKey;
            class StateVector;
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

            class StateVectorKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_b442327a1fe0a964,
                mid_valueOf_36c496337d3a1a5a,
                mid_values_8a78dbfd685d704e,
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
              static StateVectorKey *EPOCH;
              static StateVectorKey *X;
              static StateVectorKey *X_DDOT;
              static StateVectorKey *X_DOT;
              static StateVectorKey *Y;
              static StateVectorKey *Y_DDOT;
              static StateVectorKey *Y_DOT;
              static StateVectorKey *Z;
              static StateVectorKey *Z_DDOT;
              static StateVectorKey *Z_DOT;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::StateVector &) const;
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
          namespace odm {
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
