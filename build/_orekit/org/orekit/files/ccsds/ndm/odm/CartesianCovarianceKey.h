#ifndef org_orekit_files_ccsds_ndm_odm_CartesianCovarianceKey_H
#define org_orekit_files_ccsds_ndm_odm_CartesianCovarianceKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class CartesianCovariance;
            class CartesianCovarianceKey;
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

            class CartesianCovarianceKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_0bf15d1aa6f3acdf,
                mid_valueOf_ab032209186096bd,
                mid_values_85585952912af5d6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CartesianCovarianceKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CartesianCovarianceKey(const CartesianCovarianceKey& obj) : ::java::lang::Enum(obj) {}

              static CartesianCovarianceKey *COMMENT;
              static CartesianCovarianceKey *COV_REF_FRAME;
              static CartesianCovarianceKey *CX_DOT_X;
              static CartesianCovarianceKey *CX_DOT_X_DOT;
              static CartesianCovarianceKey *CX_DOT_Y;
              static CartesianCovarianceKey *CX_DOT_Z;
              static CartesianCovarianceKey *CX_X;
              static CartesianCovarianceKey *CY_DOT_X;
              static CartesianCovarianceKey *CY_DOT_X_DOT;
              static CartesianCovarianceKey *CY_DOT_Y;
              static CartesianCovarianceKey *CY_DOT_Y_DOT;
              static CartesianCovarianceKey *CY_DOT_Z;
              static CartesianCovarianceKey *CY_X;
              static CartesianCovarianceKey *CY_Y;
              static CartesianCovarianceKey *CZ_DOT_X;
              static CartesianCovarianceKey *CZ_DOT_X_DOT;
              static CartesianCovarianceKey *CZ_DOT_Y;
              static CartesianCovarianceKey *CZ_DOT_Y_DOT;
              static CartesianCovarianceKey *CZ_DOT_Z;
              static CartesianCovarianceKey *CZ_DOT_Z_DOT;
              static CartesianCovarianceKey *CZ_X;
              static CartesianCovarianceKey *CZ_Y;
              static CartesianCovarianceKey *CZ_Z;
              static CartesianCovarianceKey *EPOCH;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance &) const;
              static CartesianCovarianceKey valueOf(const ::java::lang::String &);
              static JArray< CartesianCovarianceKey > values();
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
            extern PyType_Def PY_TYPE_DEF(CartesianCovarianceKey);
            extern PyTypeObject *PY_TYPE(CartesianCovarianceKey);

            class t_CartesianCovarianceKey {
            public:
              PyObject_HEAD
              CartesianCovarianceKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CartesianCovarianceKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CartesianCovarianceKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CartesianCovarianceKey&, PyTypeObject *);
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
