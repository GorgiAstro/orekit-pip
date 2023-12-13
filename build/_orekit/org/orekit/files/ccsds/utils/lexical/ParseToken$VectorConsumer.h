#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$VectorConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$VectorConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
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
        namespace utils {
          namespace lexical {

            class ParseToken$VectorConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_1844f891addbac57,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$VectorConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$VectorConsumer(const ParseToken$VectorConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
        namespace utils {
          namespace lexical {
            extern PyType_Def PY_TYPE_DEF(ParseToken$VectorConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$VectorConsumer);

            class t_ParseToken$VectorConsumer {
            public:
              PyObject_HEAD
              ParseToken$VectorConsumer object;
              static PyObject *wrap_Object(const ParseToken$VectorConsumer&);
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
